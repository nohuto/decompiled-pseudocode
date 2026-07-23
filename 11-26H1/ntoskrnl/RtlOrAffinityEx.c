/*
 * XREFs of RtlOrAffinityEx @ 0x14025C158
 * Callers:
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     KiComputeCpuSetAffinity @ 0x14022B948 (KiComputeCpuSetAffinity.c)
 *     PpmParkSteerInterrupts @ 0x140255B30 (PpmParkSteerInterrupts.c)
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmPerfApplyProcessorStates @ 0x14025B7A0 (PpmPerfApplyProcessorStates.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x14025B99C (KiTryPopulateLogicalProcessorInformation.c)
 *     PpmParkComputeDiff @ 0x14025C028 (PpmParkComputeDiff.c)
 *     KeOrAffinityEx2 @ 0x14025C140 (KeOrAffinityEx2.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x14025DAC4 (KiQueryCpuPartitionAffinityProcess.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     KiForwardTick @ 0x140452220 (KiForwardTick.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404BE7C0 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404D3BB0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     EmonAddProfileSource @ 0x140597230 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405A5810 (Amd64AddProfileSource.c)
 *     KeUpdateProcessorRestrictions @ 0x1405EBF80 (KeUpdateProcessorRestrictions.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F6240 (KeCpuPartitionMoveCpus.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x14060F474 (PpmHeteroComputeMultiClassUnparkCount.c)
 *     PpmParkAggregateTopologyMasks @ 0x140612394 (PpmParkAggregateTopologyMasks.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640690 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 *     PpmUpdateProcessorPolicy @ 0x140AF0768 (PpmUpdateProcessorPolicy.c)
 *     PpmEventTraceParkNodeRundown @ 0x140B4C568 (PpmEventTraceParkNodeRundown.c)
 *     PsInitializeBootCpuPartitions @ 0x140CDDE44 (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     ?RtlpOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140625B60 (-RtlpOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall RtlOrAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, __int64 a3)
{
  unsigned __int16 Count; // ax
  struct _KAFFINITY_EX *v7; // rbp
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  int v12; // r8d
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // dx
  signed __int64 v15; // rbx
  $B38C3B1372D6E954799962D5DD404846 *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r11
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  __int64 v24; // r11
  unsigned __int64 v25; // rax

  if ( !a3 )
    return RtlpOrAffinityExNoResult(a1, a2);
  Count = a1->Count;
  v7 = a2;
  v8 = *(_WORD *)(a3 + 2);
  v9 = a2->Count;
  v10 = Count;
  *(_WORD *)(a3 + 2) = v8;
  v11 = v9;
  if ( Count >= v9 )
  {
    v11 = Count;
    v10 = v9;
    v7 = a1;
  }
  *(_WORD *)a3 = v11;
  v12 = 0;
  if ( v11 > v8 )
    *(_WORD *)a3 = v8;
  v13 = v8;
  if ( v10 <= v8 )
    v13 = v10;
  v14 = 0;
  if ( v11 <= v8 )
    v8 = v11;
  if ( v13 )
  {
    v15 = (char *)a1 - (char *)a2;
    v16 = &a2->8;
    v14 = v13;
    v17 = a3 - (_QWORD)a2;
    v18 = v13;
    do
    {
      v19 = (v16->Bitmap[0] | *(unsigned __int64 *)((char *)v16->Bitmap + v15)) == 0;
      *(unsigned __int64 *)((char *)v16->Bitmap + v17) = v16->Bitmap[0] | *(unsigned __int64 *)((char *)v16->Bitmap + v15);
      v16 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v16 + 8);
      if ( !v19 )
        v12 = 1;
      --v18;
    }
    while ( v18 );
  }
  if ( v14 < v8 )
  {
    v22 = v14;
    v23 = v8 - v14;
    v14 = v8;
    v24 = v23;
    do
    {
      v25 = v7->Bitmap[v22];
      *(_QWORD *)(a3 + v22 * 8 + 8) = v25;
      ++v22;
      if ( v25 )
        v12 = 1;
      --v24;
    }
    while ( v24 );
  }
  *(_DWORD *)(a3 + 4) = 0;
  while ( v14 < *(_WORD *)(a3 + 2) )
  {
    v20 = v14++;
    *(_QWORD *)(a3 + 8 * v20 + 8) = 0LL;
  }
  return v12;
}
