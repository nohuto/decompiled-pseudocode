/*
 * XREFs of ExpWaitForBootDevices @ 0x1406D17F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     KeThawExecution @ 0x1404FBB50 (KeThawExecution.c)
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn ExpWaitForBootDevices(PVOID StartContext)
{
  int v1; // edi
  struct _KTHREAD *Flink; // rbx
  KIRQL v3; // al

  while ( 1 )
  {
    KeWaitForSingleObject(&ExSaPageGroupDescriptorArrayLock.SchedulerAssistLastYieldBoostTime, Executive, 0, 0, 0LL);
    v1 = 60;
    while ( 1 )
    {
      Flink = (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.Padding[3];
      do
      {
        v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistYieldCounter);
        Flink = (struct _KTHREAD *)Flink->Header.WaitListHead.Flink;
        KeReleaseSpinLock((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistYieldCounter, v3);
      }
      while ( Flink != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.Padding[3]
           && (!HIDWORD(Flink[-1].Padding[4])
            || !(unsigned __int8)guard_dispatch_icall_no_overrides(Flink->QuantumTarget, Flink->StackLimit)
            || _InterlockedExchangeAdd((volatile signed __int32 *)&Flink[-1].Padding[4] + 1, 0xFFFFFFFF) != 1
            || _InterlockedExchangeAdd(
                 (volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.KcsanThread,
                 0xFFFFFFFF) != 1) );
      if ( !LODWORD(ExSaPageGroupDescriptorArrayLock.KcsanThread) )
        break;
      KeFreezeExecution();
      KeStallExecutionProcessor(0xF4240u);
      KeThawExecution(1);
      if ( !--v1 )
        KeBugCheckEx(0x7Bu, 0LL, 0LL, 3uLL, 0LL);
    }
  }
}
