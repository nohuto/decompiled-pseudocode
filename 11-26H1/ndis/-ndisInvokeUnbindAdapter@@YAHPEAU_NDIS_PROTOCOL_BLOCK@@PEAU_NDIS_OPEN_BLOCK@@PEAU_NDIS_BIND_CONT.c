/*
 * XREFs of ?ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONTEXT@@@Z @ 0x1401674F0
 * Callers:
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140186160 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisInvokeUnbindAdapter(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct _NDIS_BIND_CONTEXT *a3)
{
  __int64 result; // rax
  unsigned int v7; // esi
  char v8[4]; // [rsp+38h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x60u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      a2);
  result = ((__int64 (__fastcall *)(struct _NDIS_BIND_CONTEXT *, void *))a1->UnbindAdapterHandlerEx)(
             a3,
             a2->ProtocolBindingContext);
  v7 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = result;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x61u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v8);
    return v7;
  }
  return result;
}
