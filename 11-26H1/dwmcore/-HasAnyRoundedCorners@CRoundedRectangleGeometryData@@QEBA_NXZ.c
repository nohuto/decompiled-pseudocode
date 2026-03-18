/*
 * XREFs of ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180052C00
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x180050DB0 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleGeometryData::HasAnyRoundedCorners(CRoundedRectangleGeometryData *this)
{
  float v1; // xmm0_4
  float v3; // xmm0_4

  v1 = *((float *)this + 4);
  if ( *((_BYTE *)this + 52) )
  {
    if ( v1 > 0.0 )
    {
      v3 = *((float *)this + 5);
      return v3 > 0.0;
    }
  }
  else
  {
    if ( v1 > 0.0 && *((float *)this + 5) > 0.0
      || *((float *)this + 6) > 0.0 && *((float *)this + 7) > 0.0
      || *((float *)this + 8) > 0.0 && *((float *)this + 9) > 0.0 )
    {
      return 1;
    }
    if ( *((float *)this + 10) > 0.0 )
    {
      v3 = *((float *)this + 11);
      return v3 > 0.0;
    }
  }
  return 0;
}
