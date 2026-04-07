/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089284
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000A220 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x1800093C8 (--$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompo.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@04$00@@YA?AVDirtyFlags@@XZ @ 0x1800164EC (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@04$00@@YA-AVDirtyFlags@@XZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  _DWORD *v2; // rax
  int v3; // edx
  _DWORD *v4; // rax
  int v5; // edx
  __int64 v6; // r8
  struct tagPOINT *v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _DWORD *v12; // rax
  __int64 v13; // rbx
  _DWORD *v15; // rax
  int v16; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct tagPOINT v18; // [rsp+40h] [rbp+20h] BYREF
  __int64 v19; // [rsp+48h] [rbp+28h] BYREF

  if ( (*((_DWORD *)this + 10) & *___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v18)) == 0 )
  {
    v2 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v18);
    if ( (v3 & *v2) == 0 )
    {
      v4 = ___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__04_00__YA_AVDirtyFlags__XZ(&v18);
      if ( (v5 & *v4) == 0 )
        return 0LL;
    }
  }
  if ( *((_BYTE *)this + 911) )
  {
    v18.x = *((_DWORD *)this + 198);
    v6 = *((unsigned int *)this + 199);
    v18.y = *((_DWORD *)this + 199);
    v7 = **(struct tagPOINT ***)(*((_QWORD *)this + 83) + 144LL);
    if ( v7[7].x != v18.x || v7[7].y != (_DWORD)v6 )
      CVisual::SetOffset(v7, &v18, v6);
    goto LABEL_19;
  }
  v19 = 0LL;
  v8 = *((_QWORD *)this + 83);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset(&v19);
  v9 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionSurfaceBrush>(v8, &v19);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1216LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v9);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v19);
    return v10;
  }
  v12 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v18);
  v13 = v19;
  if ( (*v12 & *((_DWORD *)this + 10)) != 0 || !v19 )
  {
    CRectangleVisual::SetRect(*((CRectangleVisual **)this + 83), (const struct tagRECT *)((char *)this + 792));
    if ( !v13 )
    {
      v9 = CSurfaceBrush::ApplyViewportTransformForView(
             (CAnimatedTransitionVisual *)((char *)this + 520),
             (const struct tagRECT *)((char *)this + 792));
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 1222LL;
        goto LABEL_17;
      }
      v9 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
             *((_QWORD *)this + 83),
             *((_QWORD *)this + 65));
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 1223LL;
        goto LABEL_17;
      }
    }
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v19);
LABEL_19:
  *((_DWORD *)this + 10) &= ~*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v18);
  *((_DWORD *)this + 10) &= ~*___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v18);
  v15 = ___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__04_00__YA_AVDirtyFlags__XZ(&v18);
  *((_DWORD *)this + 10) = v16 & ~*v15;
  return 0LL;
}
