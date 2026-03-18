/*
 * XREFs of SmKmStoreGet @ 0x140354B70
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x14021A770 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x140354BA0 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     SmpKeyedStoreCreate @ 0x140966FB8 (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStop @ 0x140AE9E34 (SmStoreCompressionStop.c)
 *     SmSwapStore @ 0x140AEA064 (SmSwapStore.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140B2EB04 (SmProcessSystemStoreTrimRequest.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B522A4 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreGet(__int64 a1, __int16 a2)
{
  unsigned int v2; // edx
  __int64 v3; // r8
  __int64 v4; // rax

  v2 = a2 & 0x3FF;
  v3 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v2 >> 5));
  v4 = 0LL;
  if ( v3 )
    v4 = v3 + 40LL * (v2 & 0x1F);
  return *(_QWORD *)v4;
}
