/*
 * XREFs of PsRemoveLoadImageNotifyRoutine @ 0x1407FCBE0
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x140A84B18 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExDereferenceCallBackBlock @ 0x140435D80 (ExDereferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x140463604 (ExCompareExchangeCallBack.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  signed __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rdi
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  for ( i = 0LL; (unsigned int)i < 0x40; i = (unsigned int)(i + 1) )
  {
    v5 = ExReferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, v1);
    v6 = v5;
    if ( v5 )
    {
      if ( (PLOAD_IMAGE_NOTIFY_ROUTINE)v5[1].Count == NotifyRoutine
        && ExCompareExchangeCallBack((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, 0LL, (__int64)v5) )
      {
        _InterlockedAdd((volatile signed __int32 *)&PspSiloMonitorLock.SchedulerApcFill5[44], 0xFFFFFFFF);
        ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, v6);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v7);
        ExWaitForRundownProtectionRelease(v6);
        ExFreePoolWithTag(v6, 0);
        return 0;
      }
      ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, v6);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v1);
  return -1073741702;
}
