/*
 * XREFs of ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x18017D8C0
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     powf @ 0x18009AB78 (powf.c)
 *     _o_sqrtf_0 @ 0x18009AB9C (_o_sqrtf_0.c)
 */

__int64 __fastcall ControllerProcessor::CalculatePanDelta(ControllerProcessor *this, float a2, float a3)
{
  __int32 v5; // xmm1_4
  float v6; // xmm9_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  unsigned __int32 v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm9_4

  COERCE_FLOAT(v5 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v6 = a3;
  if ( COERCE_FLOAT(LODWORD(a3) & v5) > 0.00000011920929 || COERCE_FLOAT(LODWORD(a2) & v5) > 0.00000011920929 )
  {
    v7 = powf(a2, 2.0);
    v8 = powf(a3, 2.0);
    v9 = o_sqrtf_0(v7 + v8);
    if ( v9 > 1.0 )
    {
      a2 = a2 / v9;
      v6 = a3 / v9;
    }
    v10 = a2 * -11.0;
    v11 = v6 * 11.0;
    v12 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    if ( v10 == 0.0
      || (LODWORD(v13) = COERCE_UNSIGNED_INT(v11 / v10) & v12, v11 == 0.0)
      || *(float *)&dword_180253F88 >= v13
      || v13 >= (float)(1.0 / *(float *)&dword_180253F88) )
    {
      if ( COERCE_FLOAT(LODWORD(v10) & v12) <= COERCE_FLOAT(LODWORD(v11) & v12) )
        v10 = 0.0;
      else
        v11 = 0.0;
    }
    v14 = v11 + *((float *)this + 108);
    *((float *)this + 107) = v10 + *((float *)this + 107);
    *((float *)this + 108) = v14;
  }
  return 0LL;
}
