/*
 * XREFs of ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x1801CE8F8
 * Callers:
 *     ?CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ @ 0x1801CE7D0 (-CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ.c)
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x1801CE830 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 * Callees:
 *     logf_0 @ 0x1802B9744 (logf_0.c)
 *     powf_0 @ 0x1802B975C (powf_0.c)
 */

float __fastcall CPositionMotion::UnboundedInertiaPanningAtTime(CPositionMotion *this, float a2)
{
  __int32 v2; // xmm3_4
  float v4; // xmm6_4

  COERCE_FLOAT(v2 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & v2) <= 0.0000011920929 )
    return a2 * *((float *)this + 18);
  if ( COERCE_FLOAT(*((_DWORD *)this + 14) & v2) < 0.0000011920929 || (*((_BYTE *)this + 100) & 1) == 0 )
    return 0.0;
  v4 = (float)(powf_0(*((float *)this + 14), a2) - 1.0) * *((float *)this + 18);
  return v4 / logf_0(*((float *)this + 14));
}
