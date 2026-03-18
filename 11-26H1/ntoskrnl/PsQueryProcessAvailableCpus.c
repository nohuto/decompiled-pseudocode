/*
 * XREFs of PsQueryProcessAvailableCpus @ 0x140532BB0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140408D88 (MiStoreWriteModifiedPages.c)
 *     MiEnforcePartitionAffinity @ 0x140507B78 (MiEnforcePartitionAffinity.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14063CAB0 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     MiRefreshBackgroundZeroingAffinity @ 0x14070EA3C (MiRefreshBackgroundZeroingAffinity.c)
 * Callees:
 *     KeQueryProcessAvailableCpus @ 0x1405E57A0 (KeQueryProcessAvailableCpus.c)
 */

__int64 __fastcall PsQueryProcessAvailableCpus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) >= (unsigned __int16)KiActiveGroups )
    return KeQueryProcessAvailableCpus(a1, a2, a3, a4, 0LL);
  return 3221225507LL;
}
