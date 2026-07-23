/*
 * XREFs of ExAcquireRundownProtectionCacheAware @ 0x1402D25C0
 * Callers:
 *     MiProbeLockFrame @ 0x1402D0680 (MiProbeLockFrame.c)
 *     MiSwitchValidPteToTransition @ 0x1402F0DC0 (MiSwitchValidPteToTransition.c)
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 *     PfpPartitionGetNext @ 0x140384620 (PfpPartitionGetNext.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x1404AB540 (PfpPartitionRundownProtectionAcquire.c)
 *     PfpPartitionCreate @ 0x140602B1C (PfpPartitionCreate.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  unsigned __int64 v2; // rtt

  v1 = (_EX_RUNDOWN_REF *)((char *)RunRefCacheAware->RunRefs
                         + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v1);
  v2 = v1->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 == _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 2, v2) )
    return 1;
  else
    return ExfAcquireRundownProtection(v1);
}
