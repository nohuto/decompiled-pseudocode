/*
 * XREFs of ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180052C74
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x180050DB0 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CRoundedRectangleGeometryData::IsEllipse(CRoundedRectangleGeometryData *this)
{
  float v1; // xmm3_4
  unsigned int v2; // edx
  float v3; // xmm2_4
  float result; // xmm0_4

  v1 = *(float *)this;
  if ( *((_BYTE *)this + 52) )
  {
    v3 = v1 + *((float *)this + 2);
  }
  else
  {
    v2 = 1;
    v3 = *((float *)this + 2);
    while ( v2 < 4 )
    {
      result = *((float *)this + 4);
      if ( result != *((float *)this + 2 * v2 + 4) )
        return result;
      result = *((float *)this + 5);
      if ( result != *((float *)this + 2 * v2 + 5) )
        return result;
      ++v2;
    }
  }
  result = *((float *)this + 4) + *((float *)this + 4);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v3 - v1) - result) & _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0]) <= 0.0000011920929 )
    return *((float *)this + 5) + *((float *)this + 5);
  return result;
}
