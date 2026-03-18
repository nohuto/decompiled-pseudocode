/*
 * XREFs of ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401B0780
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B0834 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 * Callees:
 *     ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x140099010 (-GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z.c)
 *     ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x14010B580 (-ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall UpdateAdaptiveSessionState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int128 OutputBuffer; // [rsp+38h] [rbp-50h] BYREF
  _OWORD InputBuffer[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v5; // [rsp+68h] [rbp-20h]

  memset(InputBuffer, 0, sizeof(InputBuffer));
  LODWORD(InputBuffer[0]) = 81;
  OutputBuffer = 0LL;
  v5 = 0LL;
  GetAdaptiveSessionContext((struct _PO_ADAPTIVE_SESSION_CONTEXT *)((char *)InputBuffer + 8), a2);
  if ( ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x28u, &OutputBuffer, 0x10u) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2992);
  ApplyAdaptiveSessionState((struct _PO_ADAPTIVE_SESSION_STATE *)&OutputBuffer, v2);
}
