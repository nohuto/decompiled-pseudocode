/*
 * XREFs of PsQueryProcessAvailableCpus @ 0x140535050
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 *     MiEnforcePartitionAffinity @ 0x140501548 (MiEnforcePartitionAffinity.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640690 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     MiRefreshBackgroundZeroingAffinity @ 0x14071373C (MiRefreshBackgroundZeroingAffinity.c)
 * Callees:
 *     KeQueryProcessAvailableCpus @ 0x1405E8110 (KeQueryProcessAvailableCpus.c)
 */

__int64 __fastcall PsQueryProcessAvailableCpus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) >= (unsigned __int16)KiActiveGroups )
    return KeQueryProcessAvailableCpus(a1, a2, a3, a4, 0LL);
  return 3221225507LL;
}
