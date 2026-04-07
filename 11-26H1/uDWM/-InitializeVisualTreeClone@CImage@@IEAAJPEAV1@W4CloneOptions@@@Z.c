/*
 * XREFs of ?InitializeVisualTreeClone@CImage@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B6CD8
 * Callers:
 *     ?CloneVisualTree@CImage@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B6C30 (-CloneVisualTree@CImage@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?InitializeVisualTreeClone@CNineGridVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18004F058 (-InitializeVisualTreeClone@CNineGridVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CImage::InitializeVisualTreeClone(__int64 a1, CImage *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CNineGridVisual::InitializeVisualTreeClone(a1, (__int64)a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    CImage::SetBitmapSource(a2, *(struct CBitmapSource **)(a1 + 232));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
