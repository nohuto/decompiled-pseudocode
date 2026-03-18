/*
 * XREFs of ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x1801DBF50
 * Callers:
 *     <none>
 * Callees:
 *     powf_0 @ 0x1802B975C (powf_0.c)
 */

float __fastcall CScaleMotion::CurrentInertiaVelocity(CScaleMotion *this)
{
  float v1; // xmm1_4
  __int32 v2; // xmm3_4

  v1 = *((float *)this + 12);
  if ( v1 >= *((float *)this + 23) )
    return 0.0;
  COERCE_FLOAT(v2 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & v2) <= 0.0000011920929 )
    return *((float *)this + 18);
  if ( COERCE_FLOAT(*((_DWORD *)this + 14) & v2) >= 0.0000011920929 && (*((_BYTE *)this + 100) & 1) != 0 )
    return powf_0(*((float *)this + 14), v1) * *((float *)this + 18);
  else
    return 0.0;
}
