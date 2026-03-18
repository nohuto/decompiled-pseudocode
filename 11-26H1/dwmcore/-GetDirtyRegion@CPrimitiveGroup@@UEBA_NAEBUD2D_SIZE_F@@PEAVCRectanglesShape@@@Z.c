/*
 * XREFs of ?GetDirtyRegion@CPrimitiveGroup@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1801A90A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CRectanglesShape@@QEAAXAEBV1@@Z @ 0x1800BF6C0 (-Copy@CRectanglesShape@@QEAAXAEBV1@@Z.c)
 */

char __fastcall CPrimitiveGroup::GetDirtyRegion(
        CPrimitiveGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CRectanglesShape *a3)
{
  const struct CRectanglesShape *v3; // rdx

  v3 = (const struct CRectanglesShape *)*((_QWORD *)this + 41);
  if ( !v3 )
    return 0;
  CRectanglesShape::Copy(a3, v3);
  return 1;
}
