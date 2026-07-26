/*
 * XREFs of NdisReEnumerateProtocolBindings @ 0x1400BBE70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14005B870 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x14005C6F0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140094C9C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     _lambda_4e297ad311dc1a3d34a346ff598c8a24_::operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__) @ 0x1400BA7A8 (_lambda_4e297ad311dc1a3d34a346ff598c8a24_--operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__).c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1400BB184 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015C000 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14015C390 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?BeginBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14016A660 (-BeginBindOperation@BindEngine@Ndis@@SAXXZ.c)
 */

void __stdcall NdisReEnumerateProtocolBindings(NDIS_HANDLE NdisProtocolHandle)
{
  __int64 v2; // rcx
  void (*v3)(struct NDIS_BIND_LINK_BASE *); // rax
  int v4; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      35,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)NdisProtocolHandle);
  if ( (*((_DWORD *)NdisProtocolHandle + 16) & 0x20000000) != 0 )
    ndisCheckForNdisTestBindingsOnAllMiniports();
  if ( ndisReferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 0xAu) )
  {
    *(_BYTE *)(*((_QWORD *)NdisProtocolHandle + 103) + 1LL) = 1;
    Ndis::BindEngine::BeginBindOperation();
    v3 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_4e297ad311dc1a3d34a346ff598c8a24_::operator_void____cdecl___NDIS_BIND_LINK_BASE___();
    NDIS_BIND_DRIVER_BASE::ForEachLink(*((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 103), v3);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
      NDIS_BIND_DRIVER_BASE::ForEachLink(
        *((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 103),
        (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_);
    Ndis::BindEngine::EndBindOperation();
    ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 0, 0xAu, v4);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        13,
        37,
        (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
        (char)NdisProtocolHandle);
    if ( byte_14011D042 < 0 )
      McTemplateK0qqq_EtwWriteTransfer(
        v2,
        &ReferenceProtocolFailed,
        (const GUID *)&NDIS_PROVIDER_ID,
        0,
        1,
        (char)NdisProtocolHandle);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      38,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)NdisProtocolHandle);
}
