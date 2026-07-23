/*
 * XREFs of KeRegisterBugCheckCallback @ 0x1404F7930
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x14049F4A0 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckCallback(
        PKBUGCHECK_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Buffer,
        ULONG Length,
        PUCHAR Component)
{
  __int64 v5; // rbp
  PKBUGCHECK_CALLBACK_RECORD v8; // rbx
  unsigned __int8 CurrentIrql; // di
  BOOLEAN v10; // si
  struct _LIST_ENTRY *v11; // r8
  unsigned __int64 ThreadLock; // rax

  v5 = Length;
  v8 = CallbackRecord;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(CallbackRecord) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(CallbackRecord, 15LL);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Blink);
  v10 = 0;
  if ( !v8->State && !KiCheckForDuplicateBugCheckCallback(&KiSupervisorXStateFeaturesLock.ThreadLock, v8) )
  {
    v8->CallbackRoutine = CallbackRoutine;
    v8->Buffer = Buffer;
    v8->Checksum = (ULONG_PTR)&Component[(unsigned __int64)CallbackRoutine + v5 + (_QWORD)Buffer];
    v10 = 1;
    v8->Length = v5;
    v8->Component = Component;
    v8->State = 1;
    ThreadLock = KiSupervisorXStateFeaturesLock.ThreadLock;
    if ( *(struct _LIST_ENTRY **)(KiSupervisorXStateFeaturesLock.ThreadLock + 8) != v11 )
      __fastfail(3u);
    v8->Entry.Flink = (struct _LIST_ENTRY *)KiSupervisorXStateFeaturesLock.ThreadLock;
    v8->Entry.Blink = v11;
    *(_QWORD *)(ThreadLock + 8) = v8;
    KiSupervisorXStateFeaturesLock.ThreadLock = (unsigned __int64)v8;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Blink);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v10;
}
