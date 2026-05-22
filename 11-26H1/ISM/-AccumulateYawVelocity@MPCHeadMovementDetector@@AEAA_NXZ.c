/*
 * XREFs of ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x180072878
 * Callers:
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x180072788 (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18006755C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800969A4 (-EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?XMScalarACos@DirectX@@YAMM@Z @ 0x1800D0C54 (-XMScalarACos@DirectX@@YAMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
bool __fastcall MPCHeadMovementDetector::AccumulateYawVelocity(__int64 **this, float a2)
{
  bool result; // al
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  const char *v7; // r9
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  const char *v11; // r9
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __m128 v18; // xmm6
  float v19; // xmm3_4
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  __m128 v25; // xmm6
  int v26; // [rsp+28h] [rbp-49h]
  __int64 v27; // [rsp+38h] [rbp-39h] BYREF
  __int64 v28; // [rsp+40h] [rbp-31h] BYREF
  __int64 v29; // [rsp+48h] [rbp-29h] BYREF
  float v30[4]; // [rsp+50h] [rbp-21h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-11h] BYREF
  float v32[4]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v33; // [rsp+78h] [rbp+7h] BYREF
  __m128 v34; // [rsp+88h] [rbp+17h] BYREF
  __int128 v35; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  result = MPCHeadMovementDetector::EnsureFrameOfReference((MPCHeadMovementDetector *)this);
  if ( result )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v28 = 0LL;
    v4 = this[12];
    v5 = *v4;
    v28 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, LARGE_INTEGER, __int64 *))(v5 + 56))(v4, PerformanceCount, &v28);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v6,
        v26);
    if ( !v28 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xD4,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v7);
    v29 = 0LL;
    v8 = this[11];
    v9 = *v8;
    v29 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v9 + 88))(v8, v28, &v29);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xDA,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v10,
        v26);
    if ( !v29 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xDB,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v11);
    v27 = 0LL;
    v12 = this[10];
    v13 = *v12;
    v27 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v13 + 88))(v12, v28, v29, &v27);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xDE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v14,
        v26);
    v15 = v27;
    if ( v27 )
    {
      v35 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v27 + 56LL))(v27, &v35);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE4,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)(unsigned int)v16,
          v26);
      v33 = v35;
      v30[0] = 0.0;
      *(_QWORD *)&v30[1] = 1065353216LL;
      Windows::Foundation::Numerics::transform(v32, v30, (float *)&v33);
      v17 = (*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v27 + 80LL))(v27, &v34);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE9,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)(unsigned int)v17,
          v26);
      v18 = v34;
      v19 = DirectX::XMScalarACos(retaddr, a2);
      v20 = _mm_mul_ps(v18, v18);
      v21 = _mm_shuffle_ps(v20, v20, 153);
      v20.m128_f32[0] = (float)(v20.m128_f32[0] + v21.m128_f32[0]) + _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      v22 = _mm_shuffle_ps(v20, v20, 0);
      v23 = _mm_sqrt_ps(v22);
      v24 = _mm_cmpneq_ps(v22, DirectX::g_XMInfinity);
      v25 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(v18, v23), _mm_cmpneq_ps(v23, (__m128)0LL)), v24),
              _mm_andnot_ps(v24, DirectX::g_XMQNaN));
      *(_QWORD *)v30 = v25.m128_u64[0];
      *((float *)this + 26) = (float)((float)((float)(_mm_shuffle_ps(v25, v25, 170).m128_f32[0] * v32[2])
                                            + (float)((float)(v25.m128_f32[1] * v32[1])
                                                    + (float)(v25.m128_f32[0] * v32[0])))
                                    * (float)(v19 + v19))
                            + *((float *)this + 26);
      ++*((_DWORD *)this + 27);
      v15 = v27;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    return 1;
  }
  return result;
}
