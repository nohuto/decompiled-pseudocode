/*
 * XREFs of ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1402272B8
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401047BC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1401064AC (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1401055B8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CBasePTPEngine::SendWarpbackTelemetry(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+24h] [rbp-24h]
  __int64 v12; // [rsp+2Ch] [rbp-1Ch]
  int v13; // [rsp+34h] [rbp-14h]

  CBasePTPEngine::SendLastActionTelemetry(a1, a2);
  v13 = a5;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  return CBasePTPEngine::SendTelemetryOutput(a1, 7, (__int64)&v10);
}
