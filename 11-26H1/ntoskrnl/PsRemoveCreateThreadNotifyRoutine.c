/*
 * XREFs of PsRemoveCreateThreadNotifyRoutine @ 0x140B2DB60
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rdi
  PVOID *p_NormalContext; // rdx
  __int64 v8; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x40 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v1);
      return -1073741702;
    }
    v5 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + i, v1);
    v6 = v5;
    if ( v5 )
      break;
LABEL_4:
    ;
  }
  if ( (PCREATE_THREAD_NOTIFY_ROUTINE)v5[1].Count != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + i, 0LL, (__int64)v5) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + i, v6);
    goto LABEL_4;
  }
  p_NormalContext = (PVOID *)((char *)&PspSiloMonitorLock.SchedulerApc.Reserved[2] + 4);
  if ( !v6[2].Count )
    p_NormalContext = &PspSiloMonitorLock.SchedulerApc.NormalContext;
  _InterlockedAdd((volatile signed __int32 *)p_NormalContext, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + i, v6);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v8);
  ExWaitForRundownProtectionRelease(v6);
  ExFreePoolWithTag(v6, 0);
  return 0;
}
