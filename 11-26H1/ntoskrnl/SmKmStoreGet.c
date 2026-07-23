/*
 * XREFs of SmKmStoreGet @ 0x140356910
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x14021C100 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x140356940 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     SmpKeyedStoreCreate @ 0x140ADC25C (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStop @ 0x140AEC924 (SmStoreCompressionStop.c)
 *     SmSwapStore @ 0x140AECB54 (SmSwapStore.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140B308E0 (SmProcessSystemStoreTrimRequest.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B54B44 (SmProcessStoreMemoryPriorityRequest.c)
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
