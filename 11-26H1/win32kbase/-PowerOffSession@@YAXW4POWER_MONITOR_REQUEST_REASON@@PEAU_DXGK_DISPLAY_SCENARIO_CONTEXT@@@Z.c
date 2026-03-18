/*
 * XREFs of ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5704
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?PowerOffSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401D57C4 (-PowerOffSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401D5B48 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

void __fastcall PowerOffSession(enum POWER_MONITOR_REQUEST_REASON a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  v3 = 0;
  InputTraceLogging::Power::PowerOffSession(a1);
  if ( !*(_WORD *)(W32GetUserSessionState(v5, v4, v6) + 68744) )
  {
    LODWORD(v7) = 2;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v7, 4LL, 0LL, 0LL, 0, 0);
    v3 = 1;
  }
  UpdateSessionPowerState(0, a1);
  if ( v3 )
  {
    LODWORD(v7) = 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v7, 4LL, 0LL, 0LL, 0, 0);
  }
}
