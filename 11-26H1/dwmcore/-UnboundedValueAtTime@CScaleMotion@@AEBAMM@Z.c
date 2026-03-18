/*
 * XREFs of ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180209C20
 * Callers:
 *     ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x1801DC920 (-CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ.c)
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x180209BF0 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 * Callees:
 *     logf_0 @ 0x1802B9744 (logf_0.c)
 *     powf_0 @ 0x1802B975C (powf_0.c)
 */

float __fastcall CScaleMotion::UnboundedValueAtTime(CScaleMotion *this, float a2)
{
  __int32 v3; // xmm2_4
  float v5; // xmm6_4

  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & v3) <= 0.0000011920929 )
    return (float)(a2 * *((float *)this + 18)) + *((float *)this + 17);
  if ( COERCE_FLOAT(*((_DWORD *)this + 14) & v3) < 0.0000011920929 || (*((_BYTE *)this + 100) & 1) == 0 )
    return *((float *)this + 17);
  v5 = (float)(powf_0(*((float *)this + 14), a2) - 1.0) * *((float *)this + 18);
  return (float)(v5 / logf_0(*((float *)this + 14))) + *((float *)this + 17);
}
