/*
 * XREFs of ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x1800C25EC
 * Callers:
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800C3820 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18000ED1C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_sqrtf_0 @ 0x18009AB9C (_o_sqrtf_0.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x1800C4584 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 *__fastcall MPCSpatialGestureRecognizerHandler::CalculatePathingDelta(
        MPCSpatialGestureRecognizerHandler *a1,
        unsigned __int64 *a2,
        __int64 a3)
{
  int v6; // eax
  int v7; // ebx
  int updated; // eax
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  float v12; // xmm0_4
  struct MPCHolographicInputManager *Instance; // rax
  float *v14; // rax
  __int64 v15; // rcx
  float v16; // xmm0_4
  __m128 v17; // xmm6
  __m128 v18; // xmm3
  __m128 v19; // xmm1
  __m128 v20; // xmm6
  float v21; // xmm6_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v25[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  char v27[80]; // [rsp+48h] [rbp-C0h] BYREF
  float v28[808]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D50h] [rbp+C48h]
  __int64 v30; // [rsp+D68h] [rbp+C60h] BYREF
  int v31; // [rsp+D70h] [rbp+C68h] BYREF

  *a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v31 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v31);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x238,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6,
      SLODWORD(v25[0]));
  v7 = v31;
  if ( v31 == 1 )
  {
    updated = MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(a1, *((_QWORD *)a1 + 20));
    if ( updated < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x23C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)updated,
        SLODWORD(v25[0]));
    v30 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
    v10 = v9(a3, *((_QWORD *)a1 + 16), &v30);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x23F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v10,
        SLODWORD(v25[0]));
    if ( v30 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v30 + 48LL))(v30, a2);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x242,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v11,
          SLODWORD(v25[0]));
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  }
  else
  {
    if ( v31 != 3 )
      goto LABEL_20;
    v26 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a3)(a3, &GUID_dbedfb55_5c2b_443b_a82d_10a749076fc8, &v26) >= 0 )
    {
      LOBYTE(v30) = 0;
      *(_QWORD *)v25 = 0LL;
      if ( (*(int (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, v25, &v30) >= 0 )
      {
        if ( (_BYTE)v30 )
        {
          v12 = v25[0] * 0.0174532925199433;
          *(float *)a2 = v12;
          *(unsigned __int64 *)((char *)a2 + 4) = COERCE_UNSIGNED_INT(v25[1] * 0.0174532925199433);
        }
      }
    }
    Instance = MPCHolographicInputManager::GetInstance();
    memcpy_0(v27, Instance, 0xCD0uLL);
    v14 = Windows::Foundation::Numerics::transform(v25, (float *)a2, v28);
    *a2 = *(_QWORD *)v14;
    *((float *)a2 + 2) = v14[2];
    v15 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v7 = v31;
LABEL_20:
  v16 = o_sqrtf_0(
          (float)((float)(*((float *)a2 + 1) * *((float *)a2 + 1)) + (float)(*(float *)a2 * *(float *)a2))
        + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)));
  if ( v16 > 0.037999999 )
  {
    v17 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
    v18 = _mm_mul_ps(v17, v17);
    v19 = _mm_shuffle_ps(v18, v18, 102);
    v18.m128_f32[0] = (float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
    v20 = _mm_div_ps(v17, _mm_sqrt_ps(_mm_shuffle_ps(v18, v18, 0)));
    *(_QWORD *)v25 = v20.m128_u64[0];
    LODWORD(v21) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    v22 = v25[1] * 0.037999999;
    if ( v7 == 3 )
      v23 = FLOAT_0_5;
    else
      v23 = FLOAT_2_1500001;
    *(float *)a2 = (float)((float)((float)(v16 - 0.037999999) * v25[0]) * v23) + (float)(v25[0] * 0.037999999);
    *((float *)a2 + 1) = (float)((float)((float)(v16 - 0.037999999) * v25[1]) * v23) + v22;
    *((float *)a2 + 2) = (float)((float)((float)(v16 - 0.037999999) * v21) * v23) + (float)(v21 * 0.037999999);
  }
  return a2;
}
