/*
 * XREFs of ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x18006A454
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180010470 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x18000BC4C (-CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z @ 0x180011C64 (-Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x18006AEE4 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetBorderRegion(
        CLegacyNonClientBackground *this,
        const struct tagRECT *a2)
{
  CRgnGeometryProxy **v2; // rbx
  struct CRgnGeometryProxy **v5; // rdx
  CCompositor *v6; // rcx
  int RgnGeometryProxy; // eax
  unsigned int v8; // edi
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CRgnGeometryProxy **)((char *)this + 272);
  if ( !*((_QWORD *)this + 34) )
  {
    v5 = (struct CRgnGeometryProxy **)((char *)this + 272);
    v6 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    *v2 = 0LL;
    RgnGeometryProxy = CCompositor::CreateRgnGeometryProxy(v6, v5);
    v8 = RgnGeometryProxy;
    if ( RgnGeometryProxy < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)RgnGeometryProxy,
        v12);
      return v8;
    }
    CLegacyNonClientBackground::DirtyForRebuild(this);
  }
  v10 = CRgnGeometryProxy::Update(*v2, a2, 1u);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x58,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)v10,
    v12);
  return v11;
}
