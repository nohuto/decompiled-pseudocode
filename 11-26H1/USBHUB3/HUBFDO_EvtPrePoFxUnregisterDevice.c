/*
 * XREFs of HUBFDO_EvtPrePoFxUnregisterDevice @ 0x14000E070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     TUNNEL_UnregisterForPnPNotifications @ 0x1400938C0 (TUNNEL_UnregisterForPnPNotifications.c)
 */

__int64 __fastcall HUBFDO_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006D270);
  *(_QWORD *)(v1 + 2624) = 0LL;
  return TUNNEL_UnregisterForPnPNotifications(v1);
}
