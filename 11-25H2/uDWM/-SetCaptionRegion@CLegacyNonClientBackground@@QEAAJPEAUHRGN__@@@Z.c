/*
 * XREFs of ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x180011960
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180010470 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x18000BC4C (-CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x180011A18 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x18006AEE4 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetCaptionRegion(CLegacyNonClientBackground *this, HRGN hrgn)
{
  struct CRgnGeometryProxy **v2; // rbx
  struct CRgnGeometryProxy **v5; // rdx
  CCompositor *v6; // rcx
  int RgnGeometryProxy; // eax
  unsigned int v8; // edi
  int GeometryFromHRGN; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct CRgnGeometryProxy **)((char *)this + 264);
  if ( !*((_QWORD *)this + 33) )
  {
    v5 = (struct CRgnGeometryProxy **)((char *)this + 264);
    v6 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    *v2 = 0LL;
    RgnGeometryProxy = CCompositor::CreateRgnGeometryProxy(v6, v5);
    v8 = RgnGeometryProxy;
    if ( RgnGeometryProxy < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)RgnGeometryProxy,
        v12);
      return v8;
    }
    CLegacyNonClientBackground::DirtyForRebuild(this);
  }
  GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(hrgn, v2);
  v10 = GeometryFromHRGN;
  if ( GeometryFromHRGN >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)GeometryFromHRGN,
    v12);
  return v10;
}
