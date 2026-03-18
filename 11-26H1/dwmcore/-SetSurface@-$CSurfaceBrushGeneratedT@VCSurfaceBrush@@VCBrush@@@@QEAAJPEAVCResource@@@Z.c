/*
 * XREFs of ?SetSurface@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCResource@@@Z @ 0x18024EAD0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSurfaceChanged@CSurfaceBrush@@QEAAXXZ @ 0x1802841D8 (-OnSurfaceChanged@CSurfaceBrush@@QEAAXXZ.c)
 *     ?OnSurfaceChanging@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x1802842FC (-OnSurfaceChanging@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetSurface(
        struct CResource **this,
        struct CResource *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != this[18] )
  {
    v4 = CSurfaceBrush::OnSurfaceChanging((CSurfaceBrush *)this, a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F61,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)v4);
      return v5;
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
    this[18] = a2;
    CResource::RegisterNotifier((CResource *)this, a2);
    CSurfaceBrush::OnSurfaceChanged((CSurfaceBrush *)this);
  }
  return 0LL;
}
