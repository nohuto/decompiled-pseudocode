/*
 * XREFs of ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1401B0460
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     EtwTracePowerOnMonitorEnd @ 0x140080144 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x14008016C (EtwTracPowerOnMonitoreBegin.c)
 *     ?PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x1401B0538 (-PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B0834 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

NTSTATUS __fastcall PowerOnSession(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v4 = 0;
  EtwTracPowerOnMonitoreBegin(0LL, a2, a3);
  InputTraceLogging::Power::PowerOnSession((unsigned int)a1);
  if ( !*(_WORD *)(W32GetUserSessionState(v6, v5) + 68752) )
  {
    v10 = 1;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v10, 4LL, 0LL, 0LL);
    v4 = 1;
  }
  UpdateSessionPowerState(1, a1);
  if ( v4 )
  {
    v10 = 3;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v10, 4LL, 0LL, 0LL);
  }
  return EtwTracePowerOnMonitorEnd(0LL, v7, v8);
}
