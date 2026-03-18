/*
 * XREFs of ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400C94D8
 * Callers:
 *     ?SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z @ 0x1400C8F14 (-SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1400C8F58 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x1400C911C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1400C9210 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x1400C93B0 (-SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z.c)
 *     ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x1400C944C (-SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400C9490 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1400C9990 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA09C (-DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA388 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400EF604 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x14019C05C (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 *     ??1CPTPEngine@@UEAA@XZ @ 0x1402250FC (--1CPTPEngine@@UEAA@XZ.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x140225494 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
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
