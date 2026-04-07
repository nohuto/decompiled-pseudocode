/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x1800D0560
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?ValidateVisual@CRectangleVisual@@UEAAJXZ @ 0x18000A2F0 (-ValidateVisual@CRectangleVisual@@UEAAJXZ.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(struct tagRECT *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v8) & this[2].left) != 0 )
  {
    v2 = CSurfaceBrush::ApplyViewportTransformForView((CSurfaceBrush *)&this[13].right, this + 16);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93,
        (int)"clientcore\\windows\\dwm\\udwm\\transitionwindowsnapshot.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    CRectangleVisual::SetRect((CRectangleVisual *)this, this + 16);
    this[2].left &= ~*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v8);
  }
  v5 = CRectangleVisual::ValidateVisual((CRectangleVisual *)this);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x99,
    (int)"clientcore\\windows\\dwm\\udwm\\transitionwindowsnapshot.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
