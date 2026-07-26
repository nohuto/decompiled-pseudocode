/*
 * XREFs of ?ndisInvokeCloseAdapterComplete@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140164B30
 * Callers:
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x140164990 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeCloseAdapterComplete(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rdi

  ProtocolHandle = a1->ProtocolHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x64u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)ProtocolHandle,
      a1);
  ProtocolHandle->CloseAdapterCompleteHandlerEx(a1->ProtocolBindingContext);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x65u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)ProtocolHandle,
      a1);
}
