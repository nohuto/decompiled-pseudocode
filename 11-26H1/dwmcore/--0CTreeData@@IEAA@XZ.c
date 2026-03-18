/*
 * XREFs of ??0CTreeData@@IEAA@XZ @ 0x180260224
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180026DF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180082350 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180087C70 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18008C9A8 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A0850 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800CB0D0 (-GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D47B0 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

CTreeData *__fastcall CTreeData::CTreeData(CTreeData *this)
{
  CTreeData *result; // rax

  *((_DWORD *)this + 34) = 16843008;
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)this = &CTreeData::`vftable';
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = (char *)this + 40;
  *((_QWORD *)this + 4) = (char *)this + 72;
  *((_QWORD *)this + 18) = (char *)this + 168;
  *((_QWORD *)this + 19) = (char *)this + 168;
  *((_QWORD *)this + 20) = (char *)this + 176;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_QWORD *)this + 23) = (char *)this + 200;
  *((_QWORD *)this + 24) = (char *)this + 208;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 257;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  result = this;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *(_QWORD *)((char *)this + 340) = 1065353216LL;
  *((_QWORD *)this + 35) = 1065353216LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *(_QWORD *)((char *)this + 300) = 1065353216LL;
  *(_QWORD *)((char *)this + 308) = 0LL;
  *((_DWORD *)this + 79) = 0;
  *((_QWORD *)this + 40) = 1065353216LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_BYTE *)this + 345) &= 0xE9u;
  *((_BYTE *)this + 345) |= 0x29u;
  *((_BYTE *)this + 344) = -86;
  return result;
}
