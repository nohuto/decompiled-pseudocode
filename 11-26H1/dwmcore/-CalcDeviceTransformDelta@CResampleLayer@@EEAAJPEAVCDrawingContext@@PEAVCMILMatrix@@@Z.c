/*
 * XREFs of ?CalcDeviceTransformDelta@CResampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801BEF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 */

__int64 __fastcall CResampleLayer::CalcDeviceTransformDelta(
        CResampleLayer *this,
        struct CDrawingContext *a2,
        __m128i *a3)
{
  unsigned int v4; // eax
  __m128i v5; // xmm2
  int v6; // eax
  __int64 v7; // r11
  __m128i v8; // xmm1
  int v9; // eax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v13; // [rsp+20h] [rbp-50h] BYREF
  __m128i si128; // [rsp+30h] [rbp-40h]
  __m128i v15; // [rsp+40h] [rbp-30h]
  __m128i v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-10h]

  v17 = 10496;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v4 = -*((_DWORD *)this + 5);
  v16 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = _mm_load_si128((const __m128i *)&_xmm);
  v15 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = _mm_cvtsi32_si128(v4);
  v6 = *((_DWORD *)this + 4);
  LOBYTE(v17) = -86;
  CMILMatrix::Translate((CMILMatrix *)&v13, (float)-v6, _mm_cvtepi32_ps(v5).m128_f32[0]);
  CMILMatrix::Scale((CMILMatrix *)&v13, 1.0 / *(float *)(v7 + 136), 1.0 / *(float *)(v7 + 140), 1.0);
  v8 = si128;
  v9 = v17;
  *a3 = v13;
  v10 = v15;
  a3[1] = v8;
  v11 = v16;
  a3[2] = v10;
  a3[3] = v11;
  a3[4].m128i_i32[0] = v9;
  return 0LL;
}
