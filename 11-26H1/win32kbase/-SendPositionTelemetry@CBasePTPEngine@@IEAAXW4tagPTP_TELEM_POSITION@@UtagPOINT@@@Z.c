/*
 * XREFs of ?SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z @ 0x140106460
 * Callers:
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x14010637C (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x140188C34 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CBasePTPEngine::SendPositionTelemetry(__int64 a1, int a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-48h]
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  HIDWORD(v4) = 0;
  LODWORD(v4) = a2;
  *(_QWORD *)((char *)&v4 + 4) = a3;
  v5 = v4;
  v6 = 0LL;
  return CBasePTPEngine::SendTelemetryOutput(a1, 6, (__int64)&v5);
}
