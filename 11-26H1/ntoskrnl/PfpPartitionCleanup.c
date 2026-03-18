/*
 * XREFs of PfpPartitionCleanup @ 0x1407C70A8
 * Callers:
 *     PfpPartitionCreate @ 0x14060006C (PfpPartitionCreate.c)
 *     PfDeletePartition @ 0x1407C6F10 (PfDeletePartition.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x1404BB310 (ExFreeCacheAwareRundownProtection.c)
 *     PfTCleanup @ 0x1407C6254 (PfTCleanup.c)
 */

void __fastcall PfpPartitionCleanup(__int64 a1)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  PfTCleanup(a1, 1u);
  v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 16);
  if ( v2 )
    ExFreeCacheAwareRundownProtection(v2);
}
