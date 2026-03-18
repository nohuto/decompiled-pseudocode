/*
 * XREFs of ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800ADA94
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800AD8A8 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800AD990 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800CB0D0 (-GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CTreeData *__fastcall CVisual::GetUnusedTreeData(CVisual *this)
{
  _DWORD *v1; // r8
  struct CTreeData *result; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  result = 0LL;
  if ( (*v1 & 0x10000000) != 0 )
  {
    v3 = (unsigned int)v1[1];
    v4 = v1 + 2;
    v5 = 0LL;
    if ( (_DWORD)v3 )
    {
      while ( *v4 != 4 )
      {
        v5 = (unsigned int)(v5 + 1);
        ++v4;
        if ( (unsigned int)v5 >= (unsigned int)v3 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        return *(struct CTreeData **)result;
    }
    result = (struct CTreeData *)((char *)&v1[2 * v5] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    return *(struct CTreeData **)result;
  }
  return result;
}
