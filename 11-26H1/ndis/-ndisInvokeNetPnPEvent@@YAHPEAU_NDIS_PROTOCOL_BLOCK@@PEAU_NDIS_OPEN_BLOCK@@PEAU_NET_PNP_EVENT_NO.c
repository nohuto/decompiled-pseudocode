/*
 * XREFs of ?ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140155B40
 * Callers:
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140155960 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisInvokeNetPnPEvent(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct _NET_PNP_EVENT_NOTIFICATION *a3)
{
  _NET_PNP_EVENT_CODE NetEvent; // ebp
  void *ProtocolBindingContext; // rcx
  __int64 result; // rax
  unsigned int v9; // edi

  NetEvent = a3->NetPnPEvent.NetEvent;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x66u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      (char)a2,
      a3->NetPnPEvent.NetEvent);
  if ( a2 )
    ProtocolBindingContext = a2->ProtocolBindingContext;
  else
    ProtocolBindingContext = 0LL;
  result = ((__int64 (__fastcall *)(void *, struct _NET_PNP_EVENT_NOTIFICATION *))a1->PnPEventHandler)(
             ProtocolBindingContext,
             a3);
  v9 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x67u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      (char)a2,
      NetEvent,
      result);
    return v9;
  }
  return result;
}
