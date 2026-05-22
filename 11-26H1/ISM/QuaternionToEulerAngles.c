/*
 * XREFs of QuaternionToEulerAngles @ 0x180047790
 * Callers:
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAULegacyInputInfo@@@Z @ 0x18004740C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 * Callees:
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x180047974 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_asinf_0 @ 0x18009AB0C (_o_asinf_0.c)
 *     _o_atan2f_0 @ 0x18009AB24 (_o_atan2f_0.c)
 */

__int64 __fastcall QuaternionToEulerAngles(__m128 *a1, float *a2, _DWORD *a3, _DWORD *a4)
{
  __m128 v7; // xmm0
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm2
  __m128 v13; // xmm11
  int v14; // xmm8_4
  int v15; // xmm9_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  double v18; // xmm0_8
  __int64 result; // rax
  double v20; // xmm0_8
  double v21; // xmm0_8
  double v22; // xmm0_8
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  if ( !a2 )
  {
    v23 = 99LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)0x80004003LL,
      v24);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v23 = 100LL;
    goto LABEL_12;
  }
  if ( !a4 )
  {
    v23 = 101LL;
    goto LABEL_12;
  }
  *a2 = 0.0;
  *a3 = 0;
  *a4 = 0;
  v7 = _mm_mul_ps(*a1, *a1);
  v8 = _mm_shuffle_ps(v7, v7, 238);
  v9 = _mm_add_ps(v8, v7);
  v10 = _mm_shuffle_ps(v9, v9, 64);
  v11 = _mm_add_ps(_mm_shuffle_ps(v8, v10, 240), v10);
  v12 = _mm_shuffle_ps(v11, v11, 170);
  DirectX::XMMatrixRotationQuaternion();
  v13 = _mm_shuffle_ps(
          _mm_cmpneq_ps(_mm_sqrt_ps(v12), (__m128)0LL),
          _mm_andnot_ps(_mm_cmpneq_ps(v12, DirectX::g_XMInfinity), DirectX::g_XMQNaN),
          73);
  v14 = 0;
  v15 = 0;
  v16 = o_asinf_0(_mm_shuffle_ps(v13, v13, 85).m128_f32[0] * -1.0);
  v17 = v16;
  if ( v16 < 1.5707964 )
  {
    if ( v16 <= -1.5707964 )
    {
      v22 = o_atan2f_0();
      v17 = *(float *)&v22 * -1.0;
    }
    else
    {
      v20 = o_atan2f_0();
      v15 = LODWORD(v20);
      v21 = o_atan2f_0();
      v14 = LODWORD(v21);
    }
  }
  else
  {
    v18 = o_atan2f_0();
    v15 = LODWORD(v18);
  }
  *a2 = v17;
  result = 0LL;
  *a3 = v15;
  *a4 = v14;
  return result;
}
