/*
 * XREFs of RtlCountSetBitsAffinityEx @ 0x140251920
 * Callers:
 *     HvlpProxySyntheticClusterIpi @ 0x14024F8C8 (HvlpProxySyntheticClusterIpi.c)
 *     KeFlushProcessWriteBuffers @ 0x14025167C (KeFlushProcessWriteBuffers.c)
 *     KeCountSetBitsAffinityEx @ 0x140251950 (KeCountSetBitsAffinityEx.c)
 *     PpmCheckQueuePhaseActions @ 0x140252698 (PpmCheckQueuePhaseActions.c)
 *     KiIntSteerLogStatus @ 0x140254C20 (KiIntSteerLogStatus.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14025C2E8 (PPmHeteroHgsUpdateOrderValue.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 *     KiForwardTick @ 0x1403ED6F0 (KiForwardTick.c)
 *     KeChangeMemoryAttributes @ 0x1403EF1E8 (KeChangeMemoryAttributes.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x14041DAE0 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmParkUnblockIdle @ 0x1404A1F80 (PpmParkUnblockIdle.c)
 *     PpmParkSeedToIndex @ 0x1404FAE9C (PpmParkSeedToIndex.c)
 *     HalSendNMI @ 0x14057EF50 (HalSendNMI.c)
 *     KeQueryProcessAvailableCpus @ 0x1405E57A0 (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405E5860 (KeQuerySystemAvailableCpus.c)
 *     KeUpdateProcessorRestrictions @ 0x1405E9610 (KeUpdateProcessorRestrictions.c)
 *     KeSelectNodeForAffinityAndPartition @ 0x1405EEAC4 (KeSelectNodeForAffinityAndPartition.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060ACD4 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14060F5A8 (PpmParkDetectTopologyLevelInfo.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14063CAB0 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ExpLookasideMgrHotAddProcessor @ 0x1406CD8AC (ExpLookasideMgrHotAddProcessor.c)
 *     PpmIdleInitializeConcurrency @ 0x1407C98E0 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeTopologyStructures @ 0x140BF6BB4 (KiInitializeTopologyStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCountSetBitsAffinityEx(unsigned __int16 *a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  unsigned __int64 *v3; // rdx

  v1 = *a1;
  result = 0LL;
  if ( (_WORD)v1 )
  {
    v3 = (unsigned __int64 *)(a1 + 4);
    do
    {
      result = (unsigned int)__popcnt(*v3++) + (unsigned int)result;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
