/*
 * XREFs of PfpPartitionAllocateState @ 0x1407CA0C4
 * Callers:
 *     PfpPartitionCreate @ 0x140602B1C (PfpPartitionCreate.c)
 * Callees:
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140484BD0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14091B070 (ExAllocateCacheAwareRundownProtection.c)
 */

__int64 __fastcall PfpPartitionAllocateState(__int64 a1)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *CacheAwareRundownProtection; // rax
  unsigned int v3; // ebx

  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x74506650u);
  *(_QWORD *)(a1 + 16) = CacheAwareRundownProtection;
  v3 = 0;
  if ( CacheAwareRundownProtection )
    ExWaitForRundownProtectionReleaseCacheAware(CacheAwareRundownProtection);
  else
    return (unsigned int)-1073741670;
  return v3;
}
