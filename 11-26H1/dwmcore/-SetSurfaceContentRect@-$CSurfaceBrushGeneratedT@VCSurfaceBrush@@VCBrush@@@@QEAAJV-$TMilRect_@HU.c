/*
 * XREFs of ?SetSurfaceContentRect@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18021657C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800E2864 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802843F4 (-OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_P.c)
 */

__int64 __fastcall CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetSurfaceContentRect(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm6
  _OWORD *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  int v9[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *a2;
  v3 = (_OWORD *)(a1 + 108);
  *(_OWORD *)v9 = *a2;
  if ( operator!=(v9, (_DWORD *)(a1 + 108)) )
  {
    v6 = CSurfaceBrush::OnSurfaceContentRectChanging(v4, v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F81,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
    *v3 = v2;
  }
  return 0LL;
}
