/*
 * XREFs of KeDeregisterBugCheckReasonCallback @ 0x1404DBF40
 * Callers:
 *     CarCleanup @ 0x1406495F0 (CarCleanup.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  v3 = 0;
  if ( v1->State == 1 )
  {
    v4 = v1->Reason == 1023;
    v1->State = 0;
    if ( v4 )
      _InterlockedDecrement((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[48]);
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
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
