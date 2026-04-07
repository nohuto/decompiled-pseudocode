/*
 * XREFs of ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18000FAD4
 * Callers:
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180022DC0 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DD3F4 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18000FC00 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180063F18 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::SetContent(struct CVisual **this, CVisualProxy **a2, bool a3)
{
  int v5; // esi
  struct CBaseGeometryProxy *v6; // rdx
  struct CVisual *v7; // rdx
  CBaseObject *v8; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == (CVisualProxy **)this[27] )
    return 0LL;
  if ( a2 )
  {
    v5 = CContainerVisual::AddChild((CContainerVisual *)this, (struct CVisual *)a2, a3);
    if ( v5 < 0 )
    {
      v10 = 702LL;
      goto LABEL_13;
    }
    v6 = this[28];
    if ( v6 )
    {
      v5 = CVisualProxy::SetClip(a2[2], v6);
      if ( v5 < 0 )
      {
        v10 = 706LL;
        goto LABEL_13;
      }
      v5 = CVisual::SetIgnoreClipForHitTest((CVisual *)a2, 1);
      if ( v5 < 0 )
      {
        v10 = 707LL;
        goto LABEL_13;
      }
    }
  }
  v7 = this[27];
  if ( !v7 )
  {
LABEL_6:
    v8 = this[27];
    this[27] = (struct CVisual *)a2;
    if ( a2 )
      CBaseObject::AddRef((CBaseObject *)a2);
    if ( v8 )
      CBaseObject::Release(v8);
    CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)this);
    return 0LL;
  }
  CContainerVisual::RemoveChild((CContainerVisual *)this, v7);
  v5 = CVisualProxy::SetClip(*((CVisualProxy **)this[27] + 2), 0LL);
  if ( v5 >= 0 )
  {
    v5 = CVisual::SetIgnoreClipForHitTest(this[27], 0);
    if ( v5 >= 0 )
      goto LABEL_6;
    v10 = 716LL;
  }
  else
  {
    v10 = 715LL;
  }
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v5,
    v11);
  return (unsigned int)v5;
}
