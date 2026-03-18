/*
 * XREFs of ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x18012F694
 * Callers:
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800588A0 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180193F90 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x1800E9694 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x18012F7A4 (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

CShapePtr *__fastcall CGdiSpriteBitmap::GetAccumShape(_BYTE *a1, CShapePtr *a2, char a3)
{
  CShape *v3; // rsi
  _DWORD **v4; // rdi
  int v9; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CShape *v11; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  v3 = (CShape *)(a1 + 248);
  *((_BYTE *)a2 + 8) = 0;
  v4 = (_DWORD **)(a1 + 176);
  if ( a1[154] )
  {
    CRegionShape::BuildFromCRegion((CRegionShape *)(a1 + 248), (const struct CRegion *)(a1 + 176));
    a1[154] = 0;
  }
  if ( a3 )
  {
    v11 = 0LL;
    v9 = CShape::CopyShape(v3, 0LL, &v11);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT(v9, retaddr);
    CShapePtr::~CShapePtr(a2);
    *(_QWORD *)a2 = v11;
    *((_BYTE *)a2 + 8) = 1;
    **v4 = 0;
    CRegionShape::SetEmpty(v3);
  }
  else
  {
    CShapePtr::~CShapePtr(a2);
    *(_QWORD *)a2 = v3;
    *((_BYTE *)a2 + 8) = 0;
  }
  return a2;
}
