/*
 * XREFs of ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600
 * Callers:
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x140103180 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103630 (-DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401039F8 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x14010556C (-SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1401055B8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x14010568C (-SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x140105728 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x1401059A0 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x140105ED4 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x14010637C (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z @ 0x140106460 (-SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x140132FF4 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ??1CPTPEngine@@UEAA@XZ @ 0x140226CC8 (--1CPTPEngine@@UEAA@XZ.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1402272B8 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBasePTPEngine::SendTelemetryOutput(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // xmm1_8
  __int64 v5; // rcx
  __int64 result; // rax

  v3 = a1 + 772;
  v4 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 780) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 776) = a2;
  *(_QWORD *)(a1 + 796) = v4;
  v5 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)v3 = 2;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, v3);
  *(_OWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 16) = 0LL;
  return result;
}
