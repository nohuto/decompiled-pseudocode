/*
 * XREFs of ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180151FF0
 * Callers:
 *     ?ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOMETRY@@@Z @ 0x180151F08 (-ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOM.c)
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x180152A18 (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x18021A4B0 (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWB.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // r9d
  __int64 result; // rax
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rdi

  v6 = (*(_DWORD *)(a1 + 40) | 1) ^ ((*(_BYTE *)(a1 + 40) | 1) ^ (unsigned __int8)((*(_BYTE *)(a1 + 40) | 1) + 4)) & 0xC;
  *(_DWORD *)(a1 + 40) = v6;
  if ( (v6 & 0xC) == 4 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 184LL))(a1) )
  {
    v8 = (_QWORD *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)(a1 + 32));
    v9 = detail::pointer_buffer_impl<CResource *,0>::last((__int64 *)(a1 + 32));
    while ( v8 != (_QWORD *)v9 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 88LL))(a1, *v8++, a2, a3);
  }
  result = (*(_DWORD *)(a1 + 40) ^ (4 * (*(_DWORD *)(a1 + 40) >> 2) - 4)) & 0xC;
  *(_DWORD *)(a1 + 40) ^= result;
  return result;
}
