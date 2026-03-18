/*
 * XREFs of ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400C9490
 * Callers:
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1400C8F58 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400C9534 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA388 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CAEBC (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB7E8 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193AB4 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193DFC (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x140225494 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400C94D8 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CBasePTPEngine::SendLastActionTelemetry(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-48h]
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v3 = 0LL;
  LODWORD(v3) = a2;
  v4 = v3;
  v5 = 0LL;
  return CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v4);
}
