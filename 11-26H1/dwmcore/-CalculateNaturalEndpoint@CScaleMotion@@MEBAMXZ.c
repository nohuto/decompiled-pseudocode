/*
 * XREFs of ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x1801DC920
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180209C20 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScaleMotion::CalculateNaturalEndpoint(CScaleMotion *this)
{
  __int32 v2; // xmm2_4
  float v3; // xmm0_4
  float v5; // xmm0_4

  COERCE_FLOAT(v2 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & v2) > 0.0000011920929 )
  {
    if ( COERCE_FLOAT(*((_DWORD *)this + 14) & v2) >= 0.0000011920929 && (*((_BYTE *)this + 100) & 1) != 0 )
    {
      v5 = (*(float (__fastcall **)(CScaleMotion *))(*(_QWORD *)this + 40LL))(this);
      return fmaxf(0.001, CScaleMotion::UnboundedValueAtTime(this, v5));
    }
  }
  else
  {
    v3 = *((float *)this + 18);
    if ( v3 < 0.0 )
      return FLOAT_0_001;
    if ( v3 != 0.0 )
      return FLOAT_3_4028235e38;
  }
  return *((float *)this + 17);
}
