/*
 * XREFs of ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x140157EB0
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1401581C0 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x14005AB70 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140157700 (-ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

void __fastcall ndisPauseProtocolInner(struct _NDIS_OPEN_BLOCK *a1)
{
  struct _NET_PNP_EVENT_NOTIFICATION v2; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v3; // [rsp+D0h] [rbp-28h] BYREF
  int v4; // [rsp+D8h] [rbp-20h]

  memset(&v2, 0, sizeof(v2));
  v3 = 786816LL;
  v4 = 1;
  ndisInitializeNetPnPEvent(&v2, 0LL);
  v2.NetPnPEvent.NetEvent = NetEventPause;
  v2.NetPnPEvent.Buffer = &v3;
  v2.NetPnPEvent.BufferLength = 12;
  ndisPnPNotifyBindingUnlocked(a1, &v2);
}
