/*
 * XREFs of ?SetTimespanProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUTimeSpan@@@Z @ 0x18027C310
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027C010 (-SetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801E2E9C (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::SetTimespanProperty(__int64 a1, int a2, float *a3)
{
  __m128 v3; // xmm2
  unsigned int v4; // edi
  float *v7; // rbx
  void (__fastcall *v8)(float *); // rax
  float v9; // xmm1_4
  float v10; // xmm2_4
  __m128i v11; // xmm0
  int v12; // eax
  __m128 v13; // rt1
  float v15; // [rsp+48h] [rbp+10h]

  v4 = 0;
  if ( a2 == 16 )
  {
    v11 = (__m128i)*(unsigned int *)a3;
    if ( (_mm_cvtsi128_si32(v11) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v3.m128_f32[0] = (float)(int)*(float *)v11.m128i_i32 - *(float *)v11.m128i_i32;
      v13.m128_f32[0] = FLOAT_N0_5;
      v12 = (int)*(float *)v11.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v3, v13));
    }
    else
    {
      v15 = *(float *)v11.m128i_i32 + 6291456.25;
      v12 = (int)(LODWORD(v15) << 10) >> 11;
    }
    *(_DWORD *)(a1 + 360) = v12;
  }
  else if ( a2 == 50 )
  {
    CNaturalAnimation::EnsureAccelerator(a1, 2);
    v7 = *(float **)(a1 + 392);
    if ( v7 )
      (**(void (__fastcall ***)(float *))v7)(v7);
    v8 = *(void (__fastcall **)(float *))(*(_QWORD *)v7 + 8LL);
    v9 = v7[7];
    v10 = 1.0 / (float)(*a3 / 1000.0);
    v7[8] = v10;
    v7[5] = v10 * v10;
    v7[6] = (float)(v9 + v9) * v10;
    v8(v7);
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x448u, 0LL);
  }
  return v4;
}
