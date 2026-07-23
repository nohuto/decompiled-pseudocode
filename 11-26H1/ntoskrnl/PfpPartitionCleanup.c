/*
 * XREFs of PfpPartitionCleanup @ 0x1407CA108
 * Callers:
 *     PfpPartitionCreate @ 0x140602B1C (PfpPartitionCreate.c)
 *     PfDeletePartition @ 0x1407C9F70 (PfDeletePartition.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x1404B4AF0 (ExFreeCacheAwareRundownProtection.c)
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 */

void __fastcall PfpPartitionCleanup(__int64 a1)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  PfTCleanup(a1, 1u);
  v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 16);
  if ( v2 )
    ExFreeCacheAwareRundownProtection(v2);
}
