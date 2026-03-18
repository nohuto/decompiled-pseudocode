/*
 * XREFs of RtlAndAffinityEx @ 0x140252394
 * Callers:
 *     KiComputeCpuSetAffinity @ 0x140229FB8 (KiComputeCpuSetAffinity.c)
 *     PpmParkBuildTopologyCandidates @ 0x14025222C (PpmParkBuildTopologyCandidates.c)
 *     PpmHeteroDistributeUtility @ 0x140259CF0 (PpmHeteroDistributeUtility.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 *     KiForwardTick @ 0x1403ED6F0 (KiForwardTick.c)
 *     KiGetDeepIdleProcessors @ 0x1403EDF4C (KiGetDeepIdleProcessors.c)
 *     MiStoreWriteModifiedPages @ 0x140408D88 (MiStoreWriteModifiedPages.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x1404208F0 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14045E650 (PpmParkFindSpecificTopologyMask.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404C4E10 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     HalSendNMI @ 0x14057EF50 (HalSendNMI.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E5BB8 (KiUpdateProcessAvailableCpuState.c)
 *     KeUpdateProcessorRestrictions @ 0x1405E9610 (KeUpdateProcessorRestrictions.c)
 *     PpmParkApplyMixedTopologyPolicy @ 0x14060F1EC (PpmParkApplyMixedTopologyPolicy.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14060F5A8 (PpmParkDetectTopologyLevelInfo.c)
 *     PpmParkRegisterParking @ 0x14060FE58 (PpmParkRegisterParking.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14063CAB0 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     PpmParkApplyForcedMask @ 0x1407DD1D8 (PpmParkApplyForcedMask.c)
 *     NtStartProfile @ 0x140842840 (NtStartProfile.c)
 *     PspSetEffectiveJobLimits @ 0x140ABBC18 (PspSetEffectiveJobLimits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v5; // r9
  unsigned int v6; // r11d
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r9
  bool v9; // zf
  __int64 v10; // rcx
  unsigned __int16 v12; // ax
  unsigned int v13; // r10d
  unsigned __int16 v14; // r8
  unsigned __int16 v15; // dx

  if ( a3 )
  {
    v5 = *(_WORD *)(a3 + 2);
    v6 = 0;
    *(_WORD *)(a3 + 2) = v5;
    v7 = *a1;
    if ( v7 >= *a2 )
      v7 = *a2;
    *(_WORD *)a3 = v7;
    if ( v7 > v5 )
    {
      *(_WORD *)a3 = v5;
      v7 = v5;
    }
    v8 = 0;
    if ( v7 )
    {
      do
      {
        v9 = (*(_QWORD *)&a1[4 * v8 + 4] & *(_QWORD *)&a2[4 * v8 + 4]) == 0LL;
        *(_QWORD *)(a3 + 8LL * v8 + 8) = *(_QWORD *)&a1[4 * v8 + 4] & *(_QWORD *)&a2[4 * v8 + 4];
        if ( !v9 )
          v6 = 1;
        ++v8;
      }
      while ( v8 < *(_WORD *)a3 );
    }
    *(_DWORD *)(a3 + 4) = 0;
    while ( v8 < *(_WORD *)(a3 + 2) )
    {
      v10 = v8++;
      *(_QWORD *)(a3 + 8 * v10 + 8) = 0LL;
    }
    return v6;
  }
  else
  {
    v12 = *a2;
    v13 = 1;
    v14 = *a1;
    v15 = 0;
    if ( *a1 >= v12 )
      v14 = v12;
    while ( v15 < v14 )
    {
      if ( (*(_QWORD *)&a2[4 * v15 + 4] & *(_QWORD *)&a1[4 * v15 + 4]) != 0LL )
        return v13;
      ++v15;
    }
    return 0;
  }
}
