/*
 * XREFs of ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18000F71C
 * Callers:
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000FF48 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DD3F4 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18000B550 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18000FC00 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180063F18 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::EnableBorder(CVisual **this, char a2)
{
  struct CVisual **v2; // rdi
  int BorderStructure; // eax
  unsigned int v6; // ebx
  CBaseObject *v7; // rcx
  CVisual *v8; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 26;
  if ( !a2 )
  {
    if ( *v2 )
    {
      CContainerVisual::RemoveChild((CContainerVisual *)this, *v2);
      if ( this[28] )
      {
        v8 = this[27];
        if ( v8 )
        {
          CVisualProxy::SetClip(*((CVisualProxy **)v8 + 2), 0LL);
          CVisual::SetIgnoreClipForHitTest(this[27], 0);
        }
      }
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v2);
      v7 = this[28];
      this[28] = 0LL;
      if ( v7 )
        CBaseObject::Release(v7);
      CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)this);
    }
    return 0LL;
  }
  if ( *v2 )
    return 0LL;
  BorderStructure = CWindowBorder::CreateBorderStructure((CWindowBorder *)this);
  v6 = BorderStructure;
  if ( BorderStructure >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC3,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)BorderStructure,
    v9);
  return v6;
}
