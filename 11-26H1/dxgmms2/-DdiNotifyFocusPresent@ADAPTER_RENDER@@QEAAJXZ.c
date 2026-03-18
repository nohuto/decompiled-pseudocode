/*
 * XREFs of ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x1400411B4
 * Callers:
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x14000BB50 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiNotifyFocusPresent(ADAPTER_RENDER *this)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *))DxgCoreInterface[26])(this);
}
