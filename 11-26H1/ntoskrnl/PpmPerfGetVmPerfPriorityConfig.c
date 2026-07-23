/*
 * XREFs of PpmPerfGetVmPerfPriorityConfig @ 0x140609648
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfGetVmPerfPriorityConfig(unsigned int a1, _QWORD *a2, unsigned int a3)
{
  int v4; // ebx
  _PROC_PERF_DOMAIN *Domain; // rcx

  *a2 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, (__int64)a2, a3);
  if ( PpmPerfVmPerfSelectionSupported
    && (Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain, Domain->PerfPriorityHandler) )
  {
    v4 = guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext, a1);
    if ( v4 >= 0 )
      v4 = 0;
  }
  else
  {
    v4 = -1073741637;
  }
  PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  return (unsigned int)v4;
}
