/*
 * XREFs of ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x18018E18C
 * Callers:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800416D0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CMILMatrix::RoundOffsets(CMILMatrix *this, __int64 a2, double a3)
{
  __m128i v3; // xmm0
  int v5; // ecx
  __m128i v6; // xmm0
  int v7; // ecx
  __m128i v8; // xmm0
  int v9; // ecx
  float v10; // [rsp+8h] [rbp+8h]
  float v11; // [rsp+8h] [rbp+8h]
  float v12; // [rsp+8h] [rbp+8h]

  v3 = (__m128i)*((unsigned int *)this + 12);
  if ( (_mm_cvtsi128_si32(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v3.m128i_i32 - *(float *)v3.m128i_i32;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v5 = (int)*(float *)v3.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
  }
  else
  {
    v10 = *(float *)v3.m128i_i32 + 6291456.25;
    v5 = (int)(LODWORD(v10) << 10) >> 11;
  }
  *((float *)this + 12) = (float)v5;
  v6 = (__m128i)*((unsigned int *)this + 13);
  if ( (_mm_cvtsi128_si32(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v6.m128i_i32 - *(float *)v6.m128i_i32;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v7 = (int)*(float *)v6.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
  }
  else
  {
    v11 = *(float *)v6.m128i_i32 + 6291456.25;
    v7 = (int)(LODWORD(v11) << 10) >> 11;
  }
  *((float *)this + 13) = (float)v7;
  v8 = (__m128i)*((unsigned int *)this + 14);
  if ( (_mm_cvtsi128_si32(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v8.m128i_i32 - *(float *)v8.m128i_i32;
    v9 = (int)*(float *)v8.m128i_i32
       - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v12 = *(float *)v8.m128i_i32 + 6291456.25;
    v9 = (int)(LODWORD(v12) << 10) >> 11;
  }
  *((_BYTE *)this + 64) &= 0xFCu;
  *((float *)this + 14) = (float)v9;
}
