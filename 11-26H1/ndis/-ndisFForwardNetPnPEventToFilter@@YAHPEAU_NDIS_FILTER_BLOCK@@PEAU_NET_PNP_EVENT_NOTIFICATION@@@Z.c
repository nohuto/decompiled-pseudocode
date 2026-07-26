/*
 * XREFs of ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14000D9E0
 * Callers:
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14000A5B0 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x14000D6B0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140071190 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisFNetPnPEvent @ 0x14000DB00 (NdisFNetPnPEvent.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x140155860 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1401564C0 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x1401632B0 (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 *     ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401644D0 (-ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

NDIS_STATUS __fastcall ndisFForwardNetPnPEventToFilter(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  __int64 v4; // r9
  USHORT v5; // ax
  int v6; // ebx
  struct NDISWATCHDOG__ *v8; // [rsp+30h] [rbp-D8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v9; // [rsp+40h] [rbp-C8h] BYREF

  memset(&v9, 0, sizeof(v9));
  if ( !a1->FilterDriver->DefaultFilterCharacteristics.NetPnPEventHandler )
    return NdisFNetPnPEvent(a1, a2);
  ndisShallowCopyNetPnPEvent(&v9, a2);
  if ( *(_BYTE *)(v4 + 100) > 6u || *(_BYTE *)(v4 + 100) == 6 && *(_BYTE *)(v4 + 101) >= 0x32u )
  {
    v9.Header.Revision = 2;
    v5 = 172;
  }
  else
  {
    v9.Flags |= 4u;
    v5 = 164;
    v9.Header.Revision = 1;
  }
  v9.Header.Size = v5;
  ndisMakeWatchdog(
    (unsigned int)&v8,
    (_DWORD)a1,
    18,
    *(_QWORD *)(v4 + 280),
    ndisWatchdogPnPTimeout,
    v9.NetPnPEvent.NetEvent);
  v6 = ndisFInvokeNetPnPEvent(a1, &v9);
  if ( v8 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v8);
  return v6;
}
