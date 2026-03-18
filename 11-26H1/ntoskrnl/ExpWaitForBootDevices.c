/*
 * XREFs of ExpWaitForBootDevices @ 0x1406CD7C0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     KeThawExecution @ 0x140502280 (KeThawExecution.c)
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn ExpWaitForBootDevices(PVOID StartContext)
{
  int v1; // edi
  struct _KTHREAD *Flink; // rbx
  KIRQL v3; // al

  while ( 1 )
  {
    KeWaitForSingleObject(&ExSaPageGroupDescriptorArrayLock.SchedulerSharedSwappablePage, Executive, 0, 0, 0LL);
    v1 = 60;
    while ( 1 )
    {
      Flink = (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.Padding[2];
      do
      {
        v3 = KeAcquireSpinLockRaiseToDpc(&ExSaPageGroupDescriptorArrayLock.Padding[4]);
        Flink = (struct _KTHREAD *)Flink->Header.WaitListHead.Flink;
        KeReleaseSpinLock(&ExSaPageGroupDescriptorArrayLock.Padding[4], v3);
      }
      while ( Flink != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.Padding[2]
           && (!HIDWORD(Flink[-1].Padding[4])
            || !(unsigned __int8)guard_dispatch_icall_no_overrides(Flink->QuantumTarget, Flink->StackLimit)
            || _InterlockedExchangeAdd((volatile signed __int32 *)&Flink[-1].Padding[4] + 1, 0xFFFFFFFF) != 1
            || _InterlockedExchangeAdd(&dword_140EFEF38, 0xFFFFFFFF) != 1) );
      if ( !dword_140EFEF38 )
        break;
      KeFreezeExecution();
      KeStallExecutionProcessor(0xF4240u);
      KeThawExecution(1);
      if ( !--v1 )
        KeBugCheckEx(0x7Bu, 0LL, 0LL, 3uLL, 0LL);
    }
  }
}
