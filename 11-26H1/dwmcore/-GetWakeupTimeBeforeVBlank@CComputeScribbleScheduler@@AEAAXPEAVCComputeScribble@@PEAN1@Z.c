/*
 * XREFs of ?GetWakeupTimeBeforeVBlank@CComputeScribbleScheduler@@AEAAXPEAVCComputeScribble@@PEAN1@Z @ 0x180132E78
 * Callers:
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x180132BD4 (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCCom.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComputeScribbleScheduler::GetWakeupTimeBeforeVBlank(
        CComputeScribbleScheduler *this,
        struct CComputeScribble *a2,
        double *a3,
        double *a4)
{
  double v4; // xmm1_8
  double v5; // xmm6_8
  void (__fastcall *v9)(struct CComputeScribble *, struct CComputeScribble *, __int128 *, float *); // rax
  double v10; // xmm7_8
  __m128i v11; // xmm0
  int v12; // eax
  double v13; // xmm3_8
  float v14; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+38h] [rbp-50h] BYREF

  v4 = *((double *)this + 6);
  v5 = v4 - *((double *)this + 7);
  v14 = 0.0;
  v9 = *(void (__fastcall **)(struct CComputeScribble *, struct CComputeScribble *, __int128 *, float *))(*(_QWORD *)a2 + 32LL);
  v10 = fminf((float)CCommonRegistryData::SuperWetTiming::RefreshRatePercentage / 100.0, 0.5) * v4;
  v15 = 0LL;
  v9(a2, a2, &v15, &v14);
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 11));
  v12 = DWORD1(v15);
  if ( SDWORD1(v15) < 0 )
    v12 = 0;
  v13 = v14;
  *a3 = (1.0 - (double)v12 / _mm_cvtepi32_pd(v11).m128d_f64[0]) * v5
      + v10
      + v14
      + *((double *)this + 7)
      + *(double *)this;
  *a4 = v13 + *(double *)this;
}
