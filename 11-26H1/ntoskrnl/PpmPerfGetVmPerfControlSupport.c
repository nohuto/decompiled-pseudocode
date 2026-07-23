/*
 * XREFs of PpmPerfGetVmPerfControlSupport @ 0x140B70164
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 */

LONG __fastcall PpmPerfGetVmPerfControlSupport(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v4; // zf
  _PROC_PERF_DOMAIN *Domain; // rdx

  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  v4 = PpmPerfVmPerfSelectionSupported == 0;
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  if ( !v4 )
  {
    Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain;
    *(_BYTE *)a1 = 1;
    *(_DWORD *)(a1 + 16) = Domain->VmFrequencyStepMhz;
    *(_DWORD *)(a1 + 4) = Domain->VmHighestFrequencyMhz;
    *(_DWORD *)(a1 + 8) = Domain->VmNominalFrequencyMhz;
    *(_DWORD *)(a1 + 12) = Domain->VmLowestFrequencyMhz;
  }
  return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
}
