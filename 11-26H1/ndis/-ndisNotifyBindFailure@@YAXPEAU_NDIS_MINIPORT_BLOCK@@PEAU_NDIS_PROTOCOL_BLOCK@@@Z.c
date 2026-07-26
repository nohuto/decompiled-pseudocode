/*
 * XREFs of ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140079A70
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140168E20 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x14005AB70 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140155960 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140156F10 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140156F50 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

void __fastcall ndisNotifyBindFailure(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  struct _KEVENT v4; // [rsp+40h] [rbp-108h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v5; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD v6[2]; // [rsp+110h] [rbp-38h] BYREF

  memset(&v5, 0, sizeof(v5));
  HIDWORD(v6[0]) = 0;
  memset(&v4, 0, sizeof(v4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      6u,
      0x59u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      a2);
  if ( a2->MajorNdisVersion > 6u || a2->MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
  {
    ndisInitializeNetPnPEvent(&v5, &v4);
    v6[1] = a1->NetLuid.Value;
    v5.NetPnPEvent.NetEvent = NetEventBindFailed;
    v5.NetPnPEvent.BufferLength = 16;
    v5.NetPnPEvent.Buffer = v6;
    v6[0] = 1048960LL;
    WAIT_FOR_PROTO_MUTEX(a2);
    ndisDeliverNetPnPEventSynchronously(a2, 0LL, &v5);
    RELEASE_PROT_MUTEX(a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        6u,
        0x5Au,
        (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
        (char)a1,
        a2);
  }
}
