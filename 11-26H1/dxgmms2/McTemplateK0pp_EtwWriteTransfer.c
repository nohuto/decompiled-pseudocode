/*
 * XREFs of McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24
 * Callers:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000A3C0 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z @ 0x140019950 (-VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z.c)
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z @ 0x140019D80 (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x140019ED0 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14001A020 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14001A6B0 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001BAA0 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z @ 0x14001C390 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z.c)
 *     VidSchiBlockContextOnPendingFlips @ 0x14002013C (VidSchiBlockContextOnPendingFlips.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     Upgrade64KBWork @ 0x1400A8034 (Upgrade64KBWork.c)
 *     ?VidMmQueryAllocationContiguity@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@_K1PEA_K2@Z @ 0x1400B4BC8 (-VidMmQueryAllocationContiguity@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@_K1PEA_K2@Z.c)
 *     DeselectTask @ 0x1400B8CE8 (DeselectTask.c)
 *     WorkerThreadRun @ 0x1400B91B4 (WorkerThreadRun.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pp_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  va_list v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 3u, &v4);
}
