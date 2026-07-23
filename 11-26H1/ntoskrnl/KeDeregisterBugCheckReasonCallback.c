/*
 * XREFs of KeDeregisterBugCheckReasonCallback @ 0x1404D5620
 * Callers:
 *     CarCleanup @ 0x14064D1D0 (CarCleanup.c)
 *     CmFcDebugUninitialize @ 0x1406E7244 (CmFcDebugUninitialize.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall KeDeregisterBugCheckReasonCallback(PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord)
{
  PKBUGCHECK_REASON_CALLBACK_RECORD v1; // rbx
  unsigned __int8 CurrentIrql; // di
  BOOLEAN v3; // si
  bool v4; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v1 = CallbackRecord;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(CallbackRecord) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(CallbackRecord, 15LL);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Blink);
  v3 = 0;
  if ( v1->State == 1 )
  {
    v4 = v1->Reason == 1023;
    v1->State = 0;
    if ( v4 )
      _InterlockedDecrement((volatile signed __int32 *)&KsepShimDbLock.QueueListEntry);
    Flink = v1->Entry.Flink;
    if ( (PKBUGCHECK_REASON_CALLBACK_RECORD)v1->Entry.Flink->Blink != v1
      || (Blink = v1->Entry.Blink, (PKBUGCHECK_REASON_CALLBACK_RECORD)Blink->Flink != v1) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    v3 = 1;
    Flink->Blink = Blink;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Blink);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
