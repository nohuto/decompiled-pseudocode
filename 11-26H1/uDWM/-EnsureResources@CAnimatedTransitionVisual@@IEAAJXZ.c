/*
 * XREFs of ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180082594
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000A220 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x1800694E0 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800824B8 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180095EB0 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800965FC (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18004F9A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800960C4 (-Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096180 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009B69C (-Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EnsureResources(CAnimatedTransitionVisual *this)
{
  struct CBitmapSource *v1; // rdx
  CBitmapBrush *v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct CBitmapSource *)*((_QWORD *)this + 68);
  if ( v1 )
  {
    v3 = (CAnimatedTransitionVisual *)((char *)this + 536);
    if ( !*(_QWORD *)v3 )
    {
      v4 = CBitmapBrush::Reset(v3, v1);
      if ( v4 < 0 )
      {
        v5 = 896LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
          (const char *)(unsigned int)v4,
          v9);
        return (unsigned int)v4;
      }
    }
  }
  if ( *((_BYTE *)this + 911) )
  {
LABEL_13:
    if ( !*((_BYTE *)this + 912) )
      return 0LL;
    goto LABEL_14;
  }
  if ( !*((_BYTE *)this + 912) )
  {
    if ( *((_BYTE *)this + 920) )
    {
      v4 = CAnimatedTransitionVisual::Ensure3DResources(this);
      if ( v4 < 0 )
      {
        v5 = 906LL;
        goto LABEL_5;
      }
    }
    else
    {
      v4 = CAnimatedTransitionVisual::Ensure2DResources(this);
      if ( v4 < 0 )
      {
        v5 = 910LL;
        goto LABEL_5;
      }
    }
    goto LABEL_13;
  }
LABEL_14:
  v7 = CAnimatedTransitionVisual::_EnsureDCompResources((struct CEffectGroupProxy **)this);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x396,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v7,
      v9);
    return v8;
  }
  return 0LL;
}
