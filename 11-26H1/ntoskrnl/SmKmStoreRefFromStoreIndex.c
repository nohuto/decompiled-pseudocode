/*
 * XREFs of SmKmStoreRefFromStoreIndex @ 0x140204B30
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140204A10 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1404E0280 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmGetStoreOwnerProcessId @ 0x14063EE98 (SmGetStoreOwnerProcessId.c)
 *     SmProcessListRequest @ 0x1408199A8 (SmProcessListRequest.c)
 *     SmKmStoreDelete @ 0x140B20310 (SmKmStoreDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreRefFromStoreIndex(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)a2 >> 5));
  if ( v2 )
    return v2 + 40LL * (a2 & 0x1F);
  else
    return 0LL;
}
