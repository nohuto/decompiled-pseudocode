/*
 * XREFs of ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18006AE74
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006AD38 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 */

void __fastcall RayStabilizer::PerformLowPassFilterStabilization(
        RayStabilizer *this,
        struct RayStabilizationResult *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // r14
  struct RayStabilizationResult *v5; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __m128 v9; // xmm1
  unsigned __int64 v10; // r9
  int v11; // ecx
  float v12; // xmm5_4
  __int64 v13; // rdx
  __int64 *v14; // rsi
  float v15; // xmm7_4
  unsigned int v16; // edi
  __int64 v17; // r15
  float v18; // xmm6_4
  float v19; // xmm10_4
  float v20; // xmm11_4
  float v21; // xmm9_4
  float v22; // xmm8_4
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  float v26; // xmm5_4
  int v27; // ecx
  __int64 v28; // r11
  __m128 v29; // xmm4
  float v30; // xmm3_4
  __m128 v31; // xmm4
  __int64 v32; // rax
  __m128 v33; // xmm3
  __m128 v34; // xmm1
  __m128 v35; // xmm2
  __m128 v36; // xmm3
  __m128 v37; // xmm2
  __m128 v38; // xmm1
  __m128 v39; // xmm3
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int128 v42; // [rsp+38h] [rbp-39h]
  float v43[28]; // [rsp+48h] [rbp-29h]
  __int64 v44; // [rsp+48h] [rbp-29h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v4 = *(unsigned int *)a2;
  v5 = a2;
  v7 = v4 - 1;
  if ( (unsigned __int64)(v4 - 1) >= 4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\raystabilizationresult.cpp",
      a4);
  v8 = *((_QWORD *)this + 4);
  v9 = *(__m128 *)((char *)a2 + 24 * v7 + 4);
  v10 = v8;
  *(_QWORD *)v43 = *(_QWORD *)((char *)a2 + 24 * v7 + 20);
  if ( v8 > 3 )
    v10 = 3LL;
  v11 = v10 + 1;
  if ( (__int64)(v10 + 1) < 0 )
  {
    v40 = v11 & 1 | ((v10 + 1) >> 1);
    v12 = (float)(int)v40 + (float)(int)v40;
  }
  else
  {
    v12 = (float)v11;
  }
  v13 = *((_QWORD *)this + 3);
  v14 = *(__int64 **)this;
  v15 = v12 * _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v16 = 0;
  v17 = v8 + v13;
  v18 = v12 * v9.m128_f32[0];
  v19 = v12 * v43[0];
  v20 = v12 * v43[1];
  v21 = v12 * _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  v22 = v12 * _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  while ( v13 != v17 && v16 < v10 )
  {
    if ( v14 )
      v23 = *v14;
    else
      v23 = 0LL;
    v24 = std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(v23, v13);
    v27 = v10 - v16;
    v29 = *(__m128 *)(v24 + 8 * v28 + 4);
    v44 = *(_QWORD *)(v24 + 8 * v28 + 20);
    if ( (__int64)(v10 - v16) < 0 )
    {
      v41 = v27 & 1 | ((v10 - v16) >> 1);
      v30 = (float)(int)v41 + (float)(int)v41;
    }
    else
    {
      v30 = (float)v27;
    }
    v12 = v26 + v30;
    v13 = v25 + 1;
    ++v16;
    v18 = v18 + (float)(v30 * v29.m128_f32[0]);
    v15 = v15 + (float)(v30 * _mm_shuffle_ps(v29, v29, 85).m128_f32[0]);
    v22 = v22 + (float)(v30 * _mm_shuffle_ps(v29, v29, 170).m128_f32[0]);
    v19 = v19 + (float)(v30 * *(float *)&v44);
    v20 = v20 + (float)(v30 * *((float *)&v44 + 1));
    v21 = v21 + (float)(v30 * _mm_shuffle_ps(v29, v29, 255).m128_f32[0]);
  }
  v31 = (__m128)LODWORD(FLOAT_1_0);
  v32 = 3 * v4;
  v33 = 0LL;
  v31.m128_f32[0] = 1.0 / v12;
  v34 = v31;
  v35 = v31;
  v34.m128_f32[0] = (float)(1.0 / v12) * v21;
  v35.m128_f32[0] = (float)(1.0 / v12) * v19;
  v33.m128_u64[0] = _mm_unpacklo_ps(v34, v35).m128_u64[0];
  v36 = _mm_movelh_ps(v33, (__m128)COERCE_UNSIGNED_INT((float)(1.0 / v12) * v20));
  v37 = _mm_mul_ps(v36, v36);
  v38 = _mm_shuffle_ps(v37, v37, 102);
  v37.m128_f32[0] = (float)(v37.m128_f32[0] + v38.m128_f32[0]) + _mm_shuffle_ps(v38, v38, 85).m128_f32[0];
  *((float *)&v42 + 1) = (float)(1.0 / v12) * v15;
  v39 = _mm_div_ps(v36, _mm_sqrt_ps(_mm_shuffle_ps(v37, v37, 0)));
  *(float *)&v42 = (float)(1.0 / v12) * v18;
  *((_QWORD *)&v42 + 1) = __PAIR64__(v39.m128_u32[0], (float)(1.0 / v12) * v22);
  *(_OWORD *)((char *)v5 + 8 * v32 + 4) = v42;
  *(_QWORD *)((char *)v5 + 8 * v32 + 20) = _mm_unpacklo_ps((__m128)v39.m128_u32[1], _mm_shuffle_ps(v39, v39, 170)).m128_u64[0];
  ++*(_DWORD *)v5;
}
