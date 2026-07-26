/*
 * XREFs of PktMonClientNblDropNdis @ 0x14002F9F0
 * Callers:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007930 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140009300 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14002A520 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140031270 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1400325E0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400339F0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisSendNetBufferLists @ 0x140037160 (NdisSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140038E40 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039C00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003E480 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14009C960 (-ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14009CA40 (-ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisMonitorReceiveDrop @ 0x1400BCC00 (NdisMonitorReceiveDrop.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C63CC (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisStatusToDropReason @ 0x14002F7E0 (NdisStatusToDropReason.c)
 *     PktMonClientNblDrop @ 0x14002F8C0 (PktMonClientNblDrop.c)
 */

void __fastcall PktMonClientNblDropNdis(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // [rsp+20h] [rbp-28h]

  if ( byte_14011F740 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 2) != 0 )
    {
      v6 = NdisStatusToDropReason(a5);
      PktMonClientNblDrop(v8, v9, *(_DWORD *)(v8 + 52), v7, v10, v7, v6, a6);
    }
  }
}
