/*
 * XREFs of ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180050D10
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180050A30 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleGeometryData::HasIntersectingCorners(CRoundedRectangleGeometryData *this)
{
  float v1; // xmm1_4
  float v2; // xmm2_4
  float v3; // xmm0_4

  if ( *((_BYTE *)this + 52) )
  {
    if ( (float)(*((float *)this + 4) + *((float *)this + 4)) > (float)((float)(*(float *)this + *((float *)this + 2))
                                                                      - *(float *)this) )
      return 1;
    v2 = (float)(*((float *)this + 1) + *((float *)this + 3)) - *((float *)this + 1);
    v3 = *((float *)this + 5) + *((float *)this + 5);
  }
  else
  {
    v1 = *((float *)this + 2) - *(float *)this;
    if ( (float)(*((float *)this + 6) + *((float *)this + 4)) > v1 )
      return 1;
    if ( (float)(*((float *)this + 10) + *((float *)this + 8)) > v1 )
      return 1;
    v2 = *((float *)this + 3) - *((float *)this + 1);
    if ( (float)(*((float *)this + 11) + *((float *)this + 5)) > v2 )
      return 1;
    v3 = *((float *)this + 9) + *((float *)this + 7);
  }
  return v3 > v2;
}
