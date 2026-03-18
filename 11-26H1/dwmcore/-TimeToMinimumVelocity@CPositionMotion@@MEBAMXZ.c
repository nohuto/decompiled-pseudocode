/*
 * XREFs of ?TimeToMinimumVelocity@CPositionMotion@@MEBAMXZ @ 0x1801E3170
 * Callers:
 *     <none>
 * Callees:
 *     logf_0 @ 0x1802B9744 (logf_0.c)
 */

float __fastcall CPositionMotion::TimeToMinimumVelocity(CPositionMotion *this)
{
  __int32 v2; // xmm1_4
  float v3; // xmm6_4
  int v4; // xmm7_4
  float v5; // xmm0_4
  float v6; // xmm6_4

  COERCE_FLOAT(v2 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v3 = 0.0;
  v4 = *((_DWORD *)this + 18) & v2;
  if ( *(float *)&v4 > *((float *)this + 20) )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & v2) > 0.0000011920929 )
    {
      if ( COERCE_FLOAT(*((_DWORD *)this + 14) & v2) >= 0.0000011920929 && (*((_BYTE *)this + 100) & 1) != 0 )
      {
        v5 = logf_0(*((float *)this + 20));
        v6 = v5 - logf_0(*(float *)&v4);
        return v6 / logf_0(*((float *)this + 14));
      }
    }
    else
    {
      return fmaxf(
               0.0,
               ((float)((float)(*((float *)this + 18) > 0.0) * 3.4028235e38) - *((float *)this + 17))
             / *((float *)this + 18));
    }
  }
  return v3;
}
