/*
 * XREFs of RtlCountSetBitsAffinityEx @ 0x140253280
 * Callers:
 *     HvlpProxySyntheticClusterIpi @ 0x140251228 (HvlpProxySyntheticClusterIpi.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     KeCountSetBitsAffinityEx @ 0x1402532B0 (KeCountSetBitsAffinityEx.c)
 *     PpmCheckQueuePhaseActions @ 0x140253FF8 (PpmCheckQueuePhaseActions.c)
 *     KiIntSteerLogStatus @ 0x140256580 (KiIntSteerLogStatus.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140415324 (PpmEventTraceMultiClassHeteroResponse.c)
 *     KiForwardTick @ 0x140452220 (KiForwardTick.c)
 *     KeChangeMemoryAttributes @ 0x140453D18 (KeChangeMemoryAttributes.c)
 *     PpmParkUnblockIdle @ 0x14049BAB0 (PpmParkUnblockIdle.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x1404C1164 (PPmHeteroHgsUpdateOrderValue.c)
 *     PpmParkSeedToIndex @ 0x1404F44AC (PpmParkSeedToIndex.c)
 *     HalSendNMI @ 0x140581470 (HalSendNMI.c)
 *     KeQueryProcessAvailableCpus @ 0x1405E8110 (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405E81D0 (KeQuerySystemAvailableCpus.c)
 *     KeUpdateProcessorRestrictions @ 0x1405EBF80 (KeUpdateProcessorRestrictions.c)
 *     KeSelectNodeForAffinityAndPartition @ 0x1405F1434 (KeSelectNodeForAffinityAndPartition.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14061280C (PpmParkDetectTopologyLevelInfo.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640690 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ExpLookasideMgrHotAddProcessor @ 0x1406D18DC (ExpLookasideMgrHotAddProcessor.c)
 *     PpmIdleInitializeConcurrency @ 0x1407CC980 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeTopologyStructures @ 0x140BFCBB4 (KiInitializeTopologyStructures.c)
 *     PpmHeteroWpsDetectContainmentFromMaskAmd @ 0x140C04230 (PpmHeteroWpsDetectContainmentFromMaskAmd.c)
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
