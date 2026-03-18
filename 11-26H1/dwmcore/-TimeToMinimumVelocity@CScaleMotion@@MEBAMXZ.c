/*
 * XREFs of ?TimeToMinimumVelocity@CScaleMotion@@MEBAMXZ @ 0x1801E34B0
 * Callers:
 *     <none>
 * Callees:
 *     logf_0 @ 0x1802B9744 (logf_0.c)
 */

float __fastcall CScaleMotion::TimeToMinimumVelocity(CScaleMotion *this)
{
  float v1; // xmm2_4
  __int32 v3; // xmm4_4
  float v4; // xmm1_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm0_4

  v1 = *((float *)this + 18);
  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v4 = *((float *)this + 20);
  v5 = 0.0;
  if ( COERCE_FLOAT(LODWORD(v1) & v3) > v4 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & v3) > 0.0000011920929 )
    {
      if ( COERCE_FLOAT(*((_DWORD *)this + 14) & v3) >= 0.0000011920929 && (*((_BYTE *)this + 100) & 1) != 0 )
      {
        v7 = logf_0(v4 / COERCE_FLOAT(LODWORD(v1) & v3));
        return v7 / logf_0(*((float *)this + 14));
      }
    }
    else
    {
      if ( (float)(v1 > 0.0) <= 0.0 )
        v6 = 0.0;
      else
        v6 = FLOAT_3_4028235e38;
      return fmaxf(0.0, (float)(v6 - *((float *)this + 17)) / v1);
    }
  }
  return v5;
}
