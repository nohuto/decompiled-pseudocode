/*
 * XREFs of TUNNEL_UnregisterForPnPNotifications @ 0x1400938C0
 * Callers:
 *     HUBFDO_EvtPrePoFxUnregisterDevice @ 0x14000E070 (HUBFDO_EvtPrePoFxUnregisterDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TUNNEL_UnregisterForPnPNotifications(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  v2 = *(void **)(a1 + 2768);
  if ( v2 )
  {
    result = IoUnregisterPlugPlayNotificationEx(v2);
    *(_QWORD *)(a1 + 2768) = 0LL;
  }
  return result;
}
