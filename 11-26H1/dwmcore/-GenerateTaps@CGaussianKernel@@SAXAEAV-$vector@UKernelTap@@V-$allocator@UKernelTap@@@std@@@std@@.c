/*
 * XREFs of ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x18015C098
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x18015B51C (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ?reserve@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAX_K@Z @ 0x18015C2EC (-reserve@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAX_K@Z.c)
 *     ??$emplace_back@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKernelTap@@AEAM$$QEAM0@Z @ 0x1802B715C (--$emplace_back@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKern.c)
 *     ??$emplace_back@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKernelTap@@$$QEAMAEAM1@Z @ 0x1802B71B0 (--$emplace_back@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKern.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     expf_0 @ 0x1802B96F0 (expf_0.c)
 */

__int64 __fastcall CGaussianKernel::GenerateTaps(__int64 *a1, char a2, float a3, float a4)
{
  float v6; // xmm1_4
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rbx
  float v11; // xmm7_4
  int v12; // edi
  float v13; // xmm8_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  _DWORD v22[16]; // [rsp+20h] [rbp-60h] BYREF
  float v23; // [rsp+C0h] [rbp+40h] BYREF
  float v24; // [rsp+C8h] [rbp+48h] BYREF

  v6 = fmaxf(1.0, ceilf_0(a3 * a4));
  v7 = (unsigned int)(int)ceilf_0((float)(int)v6 * 0.5);
  v8 = v7;
  result = std::vector<KernelTap>::reserve(a1, (unsigned int)v7);
  v10 = 0LL;
  v11 = 0.0;
  v12 = 0;
  if ( !(_DWORD)v7 )
    goto LABEL_6;
  v22[0] = 0;
  v13 = (float)(a3 * a3) + (float)(a3 * a3);
  if ( !a2 )
  {
    do
    {
      v14 = (float)v12 + (float)v12;
      v15 = expf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 * v14) ^ _xmm) / v13);
      v16 = expf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v14 + 1.0) * (float)(v14 + 1.0)) ^ _xmm) / v13);
      if ( !v12 )
        v15 = v15 * 0.5;
      v23 = v16 + v15;
      v24 = (float)(v16 / (float)(v16 + v15)) + v14;
      result = ((__int64 (__fastcall *)(__int64 *, float *, _DWORD *, float *))std::vector<KernelTap>::emplace_back<float &,float,float &>)(
                 a1,
                 &v24,
                 v22,
                 &v23);
      v11 = v11 + v23;
      ++v12;
    }
    while ( v12 < (unsigned int)v7 );
LABEL_6:
    v17 = v11 + v11;
    if ( !(_DWORD)v7 )
      return result;
    goto LABEL_12;
  }
  do
  {
    v18 = (float)v12 + (float)v12;
    v19 = expf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 * v18) ^ _xmm) / v13);
    v20 = expf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v18 + 1.0) * (float)(v18 + 1.0)) ^ _xmm) / v13);
    if ( !v12 )
      v19 = v19 * 0.5;
    v23 = v20 + v19;
    v24 = (float)(v20 / (float)(v20 + v19)) + v18;
    ((void (__fastcall *)(__int64 *, _DWORD *, float *, float *))std::vector<KernelTap>::emplace_back<float,float &,float &>)(
      a1,
      v22,
      &v24,
      &v23);
    v11 = v11 + v23;
    ++v12;
  }
  while ( v12 < (unsigned int)v7 );
  v17 = v11 + v11;
LABEL_12:
  result = *a1;
  do
  {
    v21 = *(float *)(v10 + result + 8);
    v10 += 12LL;
    *(float *)(v10 + result - 4) = v21 / v17;
    --v8;
  }
  while ( v8 );
  return result;
}
