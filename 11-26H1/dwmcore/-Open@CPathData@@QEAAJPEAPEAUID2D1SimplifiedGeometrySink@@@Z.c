/*
 * XREFs of ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18020AA8C
 * Callers:
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18015DC80 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18027AA20 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x180294100 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Reset@CPathData@@AEAAXXZ @ 0x18020AAD4 (-Reset@CPathData@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathData::Open(CPathData *this, struct ID2D1SimplifiedGeometrySink **a2)
{
  __int64 v4; // rax

  CPathData::Reset(this);
  v4 = *(_QWORD *)this;
  *((_WORD *)this + 32) = 0;
  (*(void (__fastcall **)(CPathData *))(v4 + 8))(this);
  *((_BYTE *)this + 66) = 1;
  *a2 = this;
  return 0LL;
}
