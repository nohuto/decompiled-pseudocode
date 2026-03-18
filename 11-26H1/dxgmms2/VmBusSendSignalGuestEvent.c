/*
 * XREFs of VmBusSendSignalGuestEvent @ 0x14003D3E0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiCompleteSignalCommmand @ 0x140012020 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x140013210 (-UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1400136F8 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 VmBusSendSignalGuestEvent()
{
  return ((__int64 (*)(void))DxgCoreInterface[72])();
}
