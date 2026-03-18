/*
 * XREFs of ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1401D5828
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     EtwTracPowerOnMonitoreBegin @ 0x140148A68 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTracePowerOnMonitorEnd @ 0x140148A94 (EtwTracePowerOnMonitorEnd.c)
 *     ?PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x1401D5900 (-PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401D5B48 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

NTSTATUS __fastcall PowerOnSession(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // r8
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v4 = 0;
  EtwTracPowerOnMonitoreBegin(0LL, a2, a3);
  InputTraceLogging::Power::PowerOnSession((unsigned int)a1);
  if ( !*(_WORD *)(W32GetUserSessionState(v6, v5, v7) + 68744) )
  {
    v11 = 1;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v11, 4LL, 0LL, 0LL, 0, 0);
    v4 = 1;
  }
  UpdateSessionPowerState(1, a1);
  if ( v4 )
  {
    v11 = 3;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v11, 4LL, 0LL, 0LL, 0, 0);
  }
  return EtwTracePowerOnMonitorEnd(0LL, v8, v9);
}
