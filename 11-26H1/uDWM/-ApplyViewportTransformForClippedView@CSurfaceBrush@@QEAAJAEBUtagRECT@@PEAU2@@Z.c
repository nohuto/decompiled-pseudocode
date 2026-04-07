/*
 * XREFs of ?ApplyViewportTransformForClippedView@CSurfaceBrush@@QEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18009B228
 * Callers:
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096DCC (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?InferViewportTransform@CSurfaceBrush@@IEAAJAEBUtagRECT@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180083834 (-InferViewportTransform@CSurfaceBrush@@IEAAJAEBUtagRECT@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009BC60 (-SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::ApplyViewportTransformForClippedView(
        CSurfaceBrush *this,
        const struct tagRECT *a2,
        struct tagRECT *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  struct D2D_MATRIX_3X2_F v7; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  memset(&v7, 0, sizeof(v7));
  v4 = CSurfaceBrush::InferViewportTransform(this, a2, a3, &v7);
  if ( v4 < 0 )
  {
    v5 = 44LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CSurfaceBrush::SetViewportTransform(this, &v7);
  if ( v4 < 0 )
  {
    v5 = 45LL;
    goto LABEL_3;
  }
  return 0LL;
}
