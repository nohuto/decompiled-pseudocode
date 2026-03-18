/*
 * XREFs of ?SetSurface@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z @ 0x1801BB1AC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A3E0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z @ 0x1801BB220 (-OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetSurface(HLSURF *this, HLSURF a2)
{
  int v5; // eax
  unsigned int v6; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == this[10] )
    return 0LL;
  v5 = CGdiSpriteBitmap::OnSurfaceChanging((CGdiSpriteBitmap *)this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    this[10] = a2;
    *((_BYTE *)this + 153) = 1;
    CGdiSpriteBitmap::EnsureBitmapRealization((CGdiSpriteBitmap *)this);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5EB,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)(unsigned int)v5);
  return v6;
}
