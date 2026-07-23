/*
 * XREFs of SmAllocEx @ 0x1403EEAF0
 * Callers:
 *     SmFpPreAllocate @ 0x1403E9990 (SmFpPreAllocate.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1403EDCD4 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x1403EEA28 (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640444 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140642980 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140642BD8 (SmRecordDecompressionFailureDumpPayload.c)
 *     SmProcessListRequest @ 0x14081FBB8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x14082014C (SmProcessStatsRequest.c)
 *     SmHwAcceleratorCreate @ 0x140820A74 (SmHwAcceleratorCreate.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x140820CA8 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14082179C (SmHwAcceleratorParitionCtxCreate.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x140821B84 (SmHwAcceleratorPartitionMgrStart.c)
 *     SmCreatePartition @ 0x140AAEDD0 (SmCreatePartition.c)
 *     SmpKeyedStoreCreate @ 0x140ADC25C (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x140B0CD9C (SmKmStoreAdd.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall SmAllocEx(__int64 a1, unsigned int a2, int a3)
{
  struct _LIST_ENTRY **p_Blink; // r9
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]

  p_Blink = &stru_140E27C48.Header.WaitListHead.Blink;
  v4 = 1;
  if ( a3 != -1 )
  {
    p_Blink = (struct _LIST_ENTRY **)&v6;
    v4 = 2;
    v7 = 0LL;
    LOBYTE(v7) = 3;
    v6 = *(_OWORD *)&stru_140E27C48.Header.WaitListHead.Blink;
    DWORD2(v7) = a3;
  }
  return ExAllocatePool3(64LL, a1, a2, p_Blink, v4);
}
