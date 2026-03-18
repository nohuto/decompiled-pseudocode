/*
 * XREFs of ??$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@PEAV2@@Z @ 0x1800D2D90
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180082350 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1800D4500 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CVisualTreeIterator::Walk<CDrawingContext>(
        __int64 a1,
        CVisualTree *a2,
        __int64 a3,
        CDrawingContext *a4,
        __int64 a5,
        struct CVisual *a6)
{
  __int64 v6; // rbx
  int v10; // eax
  unsigned int v11; // r14d
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (__int64)a6;
  *(_QWORD *)(a1 + 56) = a2;
  if ( a6 )
  {
    if ( a6 != *((struct CVisual **)a2 + 9) )
    {
      v10 = CVisualTree::EnsureVisualTransform(a2, a6);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA2,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\engine\\TreeIterator.h",
          (const char *)(unsigned int)v10);
        return v11;
      }
    }
  }
  else
  {
    v6 = *((_QWORD *)a2 + 9);
  }
  return CVisualTreeIterator::WalkSubtree<CDrawingContext>(a1, v6, a3, a4, 3);
}
