/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x140078A24
 * Callers:
 *     EtwTracePointerDeviceTransformationStop @ 0x140078680 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1400786B0 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePowerOnMonitorEnd @ 0x140080144 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x14008016C (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1401495B0 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x140150FD0 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceFlipManagerCreate @ 0x140155A20 (EtwTraceFlipManagerCreate.c)
 *     EtwTraceFlipManagerDestroy @ 0x1401571E0 (EtwTraceFlipManagerDestroy.c)
 *     EtwTracePowerOnGdiBegin @ 0x140158680 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x140159730 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x14015A240 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x14015A410 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x14015A440 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracePowerOnGdiEnd @ 0x14015D8C0 (EtwTracePowerOnGdiEnd.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1401A2090 (EtwTraceSPIBlockedByFiltering.c)
 *     EtwTraceConvertibleState @ 0x1401B7AA0 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1401B7C30 (EtwTraceDockState.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1401B7C60 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceEdgyDetectionStop @ 0x1401B7CC0 (EtwTraceEdgyDetectionStop.c)
 *     EtwTraceFlipManagerLost @ 0x1401B7E80 (EtwTraceFlipManagerLost.c)
 *     EtwTracePointerPredictionStart @ 0x1401B84A0 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1401B84D0 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1401B857C (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1401B86F0 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1401B88E0 (EtwTraceTouchPadTypeDiscovered.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14003E650 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0d_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 2u, &v5);
}
