/*
 * XREFs of ?ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ @ 0x180053310
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x180053380 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 */

char __fastcall CRoundedRectangleShape::ContainsOnlyPolygons(CRoundedRectangleShape *this)
{
  __int64 v1; // r8
  char v2; // dl
  const struct D2D_VECTOR_2F *v3; // rcx
  const struct D2D_VECTOR_2F *v4; // r8
  const struct D2D_VECTOR_2F *v5; // r8

  v1 = *((_QWORD *)this + 2);
  if ( *(float *)(v1 + 64) > 0.0 )
    return 1;
  v2 = 0;
  v3 = (const struct D2D_VECTOR_2F *)(v1 + 32);
  if ( *(_BYTE *)(v1 + 68) )
  {
LABEL_8:
    if ( CRoundedRectangleGeometryData::IsRoundedCorner(v3) )
      return v2;
    return 1;
  }
  if ( (v3->x <= 0.0 || *(float *)(v1 + 36) <= 0.0)
    && !CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v1 + 40))
    && !CRoundedRectangleGeometryData::IsRoundedCorner(v4 + 6) )
  {
    v3 = v5 + 7;
    goto LABEL_8;
  }
  return v2;
}
