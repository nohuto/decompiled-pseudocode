/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x1400F4FF8
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400F5058 (rimPopulateContactFrameData.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1400F5750 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1400F6EF0 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePowerOnGdiEnd @ 0x140148A40 (EtwTracePowerOnGdiEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x140148A68 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTracePowerOnMonitorEnd @ 0x140148A94 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTraceContactVisualizationInfo @ 0x1401848A0 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x14018D720 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceFlipManagerCreate @ 0x14018F400 (EtwTraceFlipManagerCreate.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x140192280 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTraceFlipManagerDestroy @ 0x140192D10 (EtwTraceFlipManagerDestroy.c)
 *     EtwTracePowerOnGdiBegin @ 0x140196090 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x140199100 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x140199250 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x140199280 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1401C5EB0 (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1401C5F10 (EtwTraceSPIBlockedByFiltering.c)
 *     EtwTraceConvertibleState @ 0x1401DAAC0 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1401DAC50 (EtwTraceDockState.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1401DAC80 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceEdgyDetectionStop @ 0x1401DACE0 (EtwTraceEdgyDetectionStop.c)
 *     EtwTraceFlipManagerLost @ 0x1401DAE40 (EtwTraceFlipManagerLost.c)
 *     EtwTracePointerPredictionStart @ 0x1401DB430 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1401DB460 (EtwTracePointerPredictionStop.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1401DB5F0 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1401DB7B0 (EtwTraceTouchPadTypeDiscovered.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0d_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = 4LL;
  v6 = &v8;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 2u, &v5);
}
