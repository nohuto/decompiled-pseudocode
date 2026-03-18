/*
 * XREFs of ExAcquireRundownProtectionCacheAware @ 0x1402F0540
 * Callers:
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     MiProbeLockFrame @ 0x1402EE600 (MiProbeLockFrame.c)
 *     MiSwitchValidPteToTransition @ 0x14030ED40 (MiSwitchValidPteToTransition.c)
 *     PfpPartitionIterate @ 0x140382630 (PfpPartitionIterate.c)
 *     PfpPartitionGetNext @ 0x140382870 (PfpPartitionGetNext.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x1404B2034 (PfpPartitionRundownProtectionAcquire.c)
 *     PfpPartitionCreate @ 0x14060006C (PfpPartitionCreate.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
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
