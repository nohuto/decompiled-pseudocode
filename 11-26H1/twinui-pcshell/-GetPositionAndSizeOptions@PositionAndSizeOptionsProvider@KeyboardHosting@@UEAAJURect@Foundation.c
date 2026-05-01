/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180250A00
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800B9230 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800BCA90 (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ?Make@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@SAJAEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@PEAPEAV12345@@Z @ 0x18010E30C (-Make@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPo.c)
 *     ?GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA?AURect@Foundation@Windows@@XZ @ 0x18024E0C0 (-GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA-AURect@Foundation@Windows@@.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x180476314 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformationSnapshot@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18048737C (-AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURe.c)
 *     ?UnsafeAddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformation@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180488A2C (-UnsafeAddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
        __int64 a1,
        float *a2,
        float *a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // ebx
  HMONITOR *v13; // r13
  _OWORD *Snapshot; // rax
  _DWORD *DefaultKeyboardSize; // rax
  __int64 v16; // rdi
  _OWORD *v17; // rax
  __int64 *v18; // rax
  unsigned int ScaledCeiledMonitorRect; // eax
  unsigned int v20; // eax
  __m128i *v21; // rax
  __m128i v22; // xmm3
  _DWORD *v23; // rax
  __int64 v24; // rsi
  float *v25; // rdi
  float v26; // xmm6_4
  char IsEnabled; // al
  float v28; // xmm7_4
  float v29; // xmm8_4
  float v30; // xmm10_4
  float v31; // xmm11_4
  float v32; // xmm0_4
  float v33; // xmm9_4
  int v34; // eax
  float v35; // xmm2_4
  float v36; // xmm3_4
  __int128 v37; // xmm12
  __int128 v38; // xmm14
  __int128 v39; // xmm15
  __int64 v40; // xmm13_8
  int v41; // edi
  __int64 v42; // rdx
  char v43; // al
  float *v44; // rdi
  int v45; // ecx
  float v46; // xmm0_4
  int v47; // ebx
  char v48; // al
  float v49; // xmm0_4
  int v50; // eax
  float v51; // xmm2_4
  float v52; // xmm3_4
  __int128 v53; // xmm6
  __int128 v54; // xmm9
  unsigned __int64 v55; // r9
  int v56; // r8d
  __int32 v57; // ecx
  unsigned int v58; // eax
  __int32 v59; // eax
  __int32 v60; // eax
  float v61; // xmm6_4
  int v62; // edi
  float v63; // xmm9_4
  char v64; // al
  float v65; // xmm0_4
  float *v66; // rsi
  float *v67; // r14
  float v68; // xmm2_4
  float v69; // xmm3_4
  int v70; // eax
  int v71; // ebx
  char v72; // al
  float v73; // xmm0_4
  int v74; // eax
  float v75; // xmm2_4
  float v76; // xmm3_4
  __int128 v77; // xmm6
  __int128 v78; // xmm8
  __int128 v79; // xmm9
  __int64 v80; // xmm7_8
  float v81; // xmm0_4
  float v82; // xmm1_4
  char v83; // al
  int v84; // edi
  float v85; // xmm0_4
  float v86; // xmm1_4
  char v87; // al
  __int64 v89; // [rsp+48h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v90; // [rsp+50h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v91; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v92; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v93; // [rsp+78h] [rbp-90h] BYREF
  __m256i v94; // [rsp+88h] [rbp-80h]
  __int64 v95; // [rsp+A8h] [rbp-60h]
  __int128 v96; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v97; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v98[80]; // [rsp+E8h] [rbp-20h] BYREF
  float *v99; // [rsp+138h] [rbp+30h] BYREF
  __int64 v100; // [rsp+140h] [rbp+38h]
  float *v101; // [rsp+148h] [rbp+40h]
  _BYTE v102[80]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v103; // [rsp+1A8h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v100 = a4;
  v101 = a2;
  v103 = a6;
  v90 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v90);
  v9 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Make(
         v8,
         &v90);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 565LL;
    goto LABEL_35;
  }
  *(_QWORD *)v102 = 0LL;
  *(_DWORD *)&v102[8] = 100;
  memset(&v102[12], 0, 68);
  v12 = 0;
  v91 = 0LL;
  v13 = (HMONITOR *)(a1 + 376);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    Snapshot = (_OWORD *)KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 376, v98);
    *(_OWORD *)v102 = *Snapshot;
    *(_OWORD *)&v102[16] = Snapshot[1];
    *(_OWORD *)&v102[32] = Snapshot[2];
    *(_OWORD *)&v102[48] = Snapshot[3];
    *(_OWORD *)&v102[64] = Snapshot[4];
    LODWORD(v89) = (int)_mm_shuffle_ps(*(__m128 *)&v102[64], *(__m128 *)&v102[64], 85).m128_f32[0];
    HIDWORD(v89) = (int)_mm_shuffle_ps(*(__m128 *)&v102[64], *(__m128 *)&v102[64], 170).m128_f32[0];
    v12 = v89;
    v91 = (RTL_SRWLOCK *)v89;
    v97 = *(_OWORD *)&v102[28];
    DefaultKeyboardSize = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
                            (RTL_SRWLOCK *)(a1 + 16),
                            &v96,
                            *(HMONITOR *)v102,
                            (__int64)&v97,
                            _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v102, 8)),
                            *(_BYTE *)(a1 + 568),
                            *(double *)(a1 + 576),
                            (double *)(a1 + 560));
  }
  else
  {
    v97 = *(_OWORD *)(a1 + 384);
    DefaultKeyboardSize = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
                            (RTL_SRWLOCK *)(a1 + 16),
                            &v96,
                            *v13,
                            (__int64)&v97,
                            *(_DWORD *)(a1 + 416),
                            *(_BYTE *)(a1 + 568),
                            *(double *)(a1 + 576),
                            (double *)(a1 + 560));
  }
  v16 = *(_QWORD *)DefaultKeyboardSize;
  v99 = *(float **)DefaultKeyboardSize;
  *(_QWORD *)v98 = 0LL;
  *(_DWORD *)&v98[8] = 100;
  memset(&v98[12], 0, 68);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    v17 = (_OWORD *)KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 40, &v93);
    *(_OWORD *)v98 = *v17;
    *(_OWORD *)&v98[16] = v17[1];
    *(_OWORD *)&v98[32] = v17[2];
    *(_OWORD *)&v98[48] = v17[3];
    *(_OWORD *)&v98[64] = v17[4];
    v97 = *(_OWORD *)&v98[28];
    v18 = (__int64 *)KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
                       (RTL_SRWLOCK *)(a1 + 16),
                       &v96,
                       *(HMONITOR *)v98,
                       (__int64)&v97,
                       _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v98, 8)),
                       *(_BYTE *)(a1 + 568),
                       *(double *)(a1 + 576),
                       (double *)(a1 + 544));
  }
  else
  {
    v97 = *(_OWORD *)(a1 + 48);
    v18 = (__int64 *)KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
                       (RTL_SRWLOCK *)(a1 + 16),
                       &v96,
                       *(HMONITOR *)(a1 + 40),
                       (__int64)&v97,
                       *(_DWORD *)(a1 + 80),
                       *(_BYTE *)(a1 + 568),
                       *(double *)(a1 + 576),
                       (double *)(a1 + 544));
  }
  v89 = *v18;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    *(_QWORD *)&v92 = v90;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v92);
    AddOptionsRelativeToInside(1, (unsigned int)&v102[60], (unsigned int)v102, (unsigned int)&v99, 0, (__int64)&v92);
    *(_QWORD *)&v92 = v90;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v92);
    AddOptionsRelativeToInside(1, (unsigned int)&v98[60], (unsigned int)v98, (unsigned int)&v89, 1, (__int64)&v92);
  }
  else
  {
    *(_QWORD *)&v96 = &v92;
    *(_QWORD *)&v92 = v90;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v92);
    ScaledCeiledMonitorRect = (unsigned int)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(
                                              a1 + 376,
                                              &v97);
    UnsafeAddOptionsRelativeToInside(1, ScaledCeiledMonitorRect, a1 + 376, (unsigned int)&v99, 0, (__int64)&v92);
    *(_QWORD *)&v96 = &v92;
    *(_QWORD *)&v92 = v90;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v92);
    v20 = (unsigned int)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a1 + 40, &v97);
    UnsafeAddOptionsRelativeToInside(1, v20, a1 + 40, (unsigned int)&v89, 1, (__int64)&v92);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    LODWORD(v89) = (int)*((float *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a1 + 376, &v96) + 2);
    HIDWORD(v89) = (int)*((float *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a1 + 376, &v97) + 3);
    v12 = v89;
    v91 = (RTL_SRWLOCK *)v89;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    v21 = (__m128i *)KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 208, &v93);
    v22 = *v21;
    *(__m128i *)&v98[16] = v21[1];
    *(__m128i *)&v98[32] = v21[2];
    *(__m128i *)&v98[48] = v21[3];
    *(__m128i *)&v98[64] = v21[4];
    v89 = (unsigned int)(int)_mm_shuffle_ps(*(__m128 *)&v98[32], *(__m128 *)&v98[32], 85).m128_f32[0];
    *(_QWORD *)&v97 = (unsigned int)(int)_mm_shuffle_ps(*(__m128 *)&v98[32], *(__m128 *)&v98[32], 170).m128_f32[0];
    v92 = *(_OWORD *)&v98[28];
    v23 = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
            (RTL_SRWLOCK *)(a1 + 16),
            &v96,
            (HMONITOR)v22.m128i_i64[0],
            (__int64)&v92,
            _mm_cvtsi128_si32(_mm_srli_si128(v22, 8)),
            *(_BYTE *)(a1 + 568),
            *(double *)(a1 + 576),
            (double *)(a1 + 552));
  }
  else
  {
    v89 = (unsigned int)(int)*(float *)(a1 + 224);
    *(_QWORD *)&v97 = (unsigned int)(int)*(float *)(a1 + 228);
    v92 = *(_OWORD *)(a1 + 216);
    v23 = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
            (RTL_SRWLOCK *)(a1 + 16),
            &v96,
            *(HMONITOR *)(a1 + 208),
            (__int64)&v92,
            *(_DWORD *)(a1 + 248),
            *(_BYTE *)(a1 + 568),
            *(double *)(a1 + 576),
            (double *)(a1 + 552));
  }
  v24 = *(_QWORD *)v23;
  *(_QWORD *)&v96 = *(_QWORD *)v23;
  WORD5(v93) = 0;
  HIDWORD(v95) = 0;
  *(_QWORD *)&v93 = 0x200000002LL;
  v94.m256i_i32[0] = v12;
  HIDWORD(v93) = HIDWORD(v91);
  *(_OWORD *)((char *)v94.m256i_i64 + 4) = __PAIR64__(v16, HIDWORD(v99));
  v25 = v101;
  v26 = v101[1] + v101[3];
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
  v28 = *(float *)&v102[40];
  v29 = *(float *)&v102[36];
  v30 = *(float *)&v102[32];
  v31 = *(float *)&v102[28];
  v32 = *v25;
  v33 = (float)v12;
  if ( IsEnabled )
  {
    v94.m256i_i32[5] = (int)fminf(v32 - *(float *)&v102[28], v33);
    v94.m256i_i32[6] = (int)fminf(v26 - *(float *)&v102[32], (float)SHIDWORD(v91));
    v94.m256i_i32[7] = (int)fminf((float)(*(float *)&v102[36] + *(float *)&v102[28]) - *v25, v33);
    v34 = (int)fminf((float)(*(float *)&v102[40] + *(float *)&v102[32]) - v26, (float)SHIDWORD(v91));
  }
  else
  {
    v35 = *(float *)(a1 + 384);
    v94.m256i_i32[5] = (int)fminf(v32 - v35, v33);
    v36 = *(float *)(a1 + 388);
    v94.m256i_i32[6] = (int)fminf(v26 - v36, (float)SHIDWORD(v91));
    v94.m256i_i32[7] = (int)fminf((float)(v35 + *(float *)(a1 + 392)) - *v25, v33);
    v34 = (int)fminf((float)(v36 + *(float *)(a1 + 396)) - v26, (float)SHIDWORD(v91));
  }
  LODWORD(v95) = v34;
  WORD4(v93) = 0;
  v37 = v93;
  *(_OWORD *)v98 = v93;
  v38 = *(_OWORD *)v94.m256i_i8;
  *(__m256i *)&v98[16] = v94;
  v39 = *(_OWORD *)&v94.m256i_u64[2];
  v40 = v95;
  *(_QWORD *)&v98[48] = v95;
  v41 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v90->Ptr + 13))(v90, v98);
  if ( v41 >= 0 )
  {
    *(_OWORD *)v98 = v37;
    *(_DWORD *)&v98[4] = 1;
    *(_OWORD *)&v98[16] = v38;
    *(_OWORD *)&v98[32] = v39;
    *(_QWORD *)&v98[48] = v40;
    v41 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v90->Ptr + 13))(v90, v98);
    if ( v41 >= 0 )
    {
      *(_OWORD *)v98 = v37;
      *(_DWORD *)v98 = 6;
      *(_OWORD *)&v98[16] = v38;
      *(_OWORD *)&v98[32] = v39;
      *(_QWORD *)&v98[48] = v40;
      v41 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v90->Ptr + 13))(v90, v98);
      if ( v41 >= 0 )
      {
        v43 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
        v44 = (float *)(a1 + 392);
        v99 = (float *)(a1 + 392);
        *(_QWORD *)&v92 = a1 + 396;
        if ( v43 )
        {
          v45 = (int)v28;
          v46 = v29;
        }
        else
        {
          v45 = (int)*(float *)(a1 + 396);
          v46 = *v44;
        }
        v93 = v37;
        v94.m256i_i32[3] = HIDWORD(v38);
        *(_OWORD *)&v94.m256i_u64[2] = v39;
        v95 = v40;
        v94.m256i_i64[0] = __PAIR64__(v45, v12);
        v47 = HIDWORD(v91);
        HIDWORD(v93) = HIDWORD(v91);
        v94.m256i_i32[2] = (int)(float)(v46 * 0.5);
        v48 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
        v49 = *v101;
        if ( v48 )
        {
          v94.m256i_i32[5] = (int)fminf(v49 - v31, v33);
          v94.m256i_i32[6] = (int)fminf(v101[1] - v30, (float)v47);
          v94.m256i_i32[7] = (int)fminf((float)(v29 + v31) - *v101, v33);
          v50 = (int)fminf((float)(v28 + v30) - v101[1], (float)v47);
        }
        else
        {
          v51 = *(float *)(a1 + 384);
          v94.m256i_i32[5] = (int)fminf(v49 - v51, v33);
          v52 = *(float *)(a1 + 388);
          v94.m256i_i32[6] = (int)fminf(v101[1] - v52, (float)v47);
          v94.m256i_i32[7] = (int)fminf((float)(v51 + *v44) - *v101, v33);
          v50 = (int)fminf((float)(v52 + *(float *)(a1 + 396)) - v101[1], (float)v47);
        }
        LODWORD(v95) = v50;
        v53 = v93;
        *(_OWORD *)v98 = v93;
        v54 = *(_OWORD *)v94.m256i_i8;
        *(_DWORD *)&v98[4] = 4;
        *(__m256i *)&v98[16] = v94;
        *(_QWORD *)&v98[48] = v95;
        v9 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v90->Ptr + 13))(v90, v98);
        v10 = v9;
        if ( v9 >= 0 )
        {
          *(_OWORD *)v98 = v53;
          *(_DWORD *)&v98[4] = 8;
          *(_OWORD *)&v98[16] = v54;
          *(_OWORD *)&v98[32] = *(_OWORD *)&v94.m256i_u64[2];
          *(_QWORD *)&v98[48] = v95;
          v9 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v90->Ptr + 13))(v90, v98);
          v10 = v9;
          if ( v9 >= 0 )
          {
            DWORD2(v93) = 0;
            *(_OWORD *)&v94.m256i_u64[2] = 0LL;
            v95 = 0LL;
            *(_QWORD *)&v93 = 0x200000002LL;
            v94.m256i_i64[0] = __PAIR64__(DWORD1(v96), v89);
            v56 = v97;
            HIDWORD(v93) = v97;
            v94.m256i_i64[1] = (unsigned int)v24;
            v57 = v89;
            v58 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
            if ( v58 < (unsigned int)v89 )
              v57 = v58;
            v94.m256i_i32[5] = v57;
            v59 = v97;
            if ( v94.m256i_i32[6] < (unsigned int)v97 )
              v59 = v94.m256i_i32[6];
            v94.m256i_i32[6] = v59;
            v60 = v89;
            if ( v94.m256i_i32[7] < (unsigned int)v89 )
              v60 = v94.m256i_i32[7];
            v94.m256i_i32[7] = v60;
            if ( (_DWORD)v97 )
              v56 = 0;
            LODWORD(v95) = v56;
            WORD4(v93) = 257;
            *(_OWORD *)v98 = v93;
            *(__m256i *)&v98[16] = v94;
            *(_QWORD *)&v98[48] = v95;
            v9 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v90->Ptr + 13))(v90, v98);
            v10 = v9;
            if ( v9 >= 0 )
            {
              if ( a5 )
              {
                v93 = v37;
                *(_OWORD *)v94.m256i_i8 = v38;
                *(_OWORD *)&v94.m256i_u64[2] = v39;
                v95 = v40;
                v61 = a3[3] + a3[1];
                DWORD1(v93) = 6;
                v62 = (int)a3[2];
                v94.m256i_i32[2] = v62;
                v94.m256i_i32[0] = v62;
                v94.m256i_i32[4] = v62;
                v63 = (float)v62;
                v64 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
                v65 = *a3;
                if ( v64 )
                {
                  v94.m256i_i32[5] = (int)fminf(v65 - v31, v63);
                  v94.m256i_i32[6] = (int)fminf(v61 - v30, (float)SHIDWORD(v93));
                  v94.m256i_i32[7] = (int)fminf((float)(v29 + v31) - *a3, v63);
                  LODWORD(v95) = (int)fminf((float)(v28 + v30) - v61, (float)SHIDWORD(v93));
                  *(_QWORD *)&v96 = a1 + 384;
                  *(_QWORD *)&v97 = a1 + 388;
                  v66 = v99;
                  v67 = (float *)v92;
                }
                else
                {
                  *(_QWORD *)&v96 = a1 + 384;
                  v68 = *(float *)(a1 + 384);
                  v94.m256i_i32[5] = (int)fminf(v65 - v68, v63);
                  *(_QWORD *)&v97 = a1 + 388;
                  v69 = *(float *)(a1 + 388);
                  v94.m256i_i32[6] = (int)fminf(v61 - v69, (float)SHIDWORD(v93));
                  v66 = (float *)(a1 + 392);
                  v94.m256i_i32[7] = (int)fminf((float)(v68 + *(float *)(a1 + 392)) - *a3, v63);
                  v67 = (float *)v92;
                  LODWORD(v95) = (int)fminf((float)(v69 + *(float *)v92) - v61, (float)SHIDWORD(v93));
                }
                *(_OWORD *)v98 = v93;
                *(__m256i *)&v98[16] = v94;
                *(_QWORD *)&v98[48] = v95;
                v70 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v90->Ptr + 13))(v90, v98);
                v10 = v70;
                if ( v70 < 0 )
                {
                  v55 = (unsigned int)v70;
                  v11 = 822LL;
                  goto LABEL_36;
                }
                v93 = v37;
                *(_OWORD *)v94.m256i_i8 = v38;
                *(_OWORD *)&v94.m256i_u64[2] = v39;
                v95 = v40;
                DWORD1(v93) = 6;
                v94.m256i_i32[2] = v62;
                v71 = v89;
                v94.m256i_i32[0] = v89;
                v72 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
                v73 = *a3;
                if ( v72 )
                {
                  v94.m256i_i32[5] = (int)fminf(v73 - v31, (float)v71);
                  v94.m256i_i32[6] = (int)fminf(v61 - v30, (float)SHIDWORD(v93));
                  v94.m256i_i32[7] = (int)fminf((float)(v29 + v31) - *a3, (float)v71);
                  v74 = (int)fminf((float)(v28 + v30) - v61, (float)SHIDWORD(v93));
                }
                else
                {
                  v75 = *(float *)v96;
                  v94.m256i_i32[5] = (int)fminf(v73 - *(float *)v96, (float)v71);
                  v76 = *(float *)v97;
                  v94.m256i_i32[6] = (int)fminf(v61 - *(float *)v97, (float)SHIDWORD(v93));
                  v94.m256i_i32[7] = (int)fminf((float)(v75 + *v66) - *a3, (float)v71);
                  v74 = (int)fminf((float)(v76 + *v67) - v61, (float)SHIDWORD(v93));
                }
                LODWORD(v95) = v74;
                v77 = v93;
                *(_OWORD *)v98 = v93;
                v78 = *(_OWORD *)v94.m256i_i8;
                *(__m256i *)&v98[16] = v94;
                v79 = *(_OWORD *)&v94.m256i_u64[2];
                v80 = v95;
                *(_QWORD *)&v98[48] = v95;
                v9 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v90->Ptr + 13))(v90, v98);
                v10 = v9;
                if ( v9 < 0 )
                {
                  v11 = 844LL;
                  goto LABEL_35;
                }
                *(_OWORD *)v98 = v77;
                *(_WORD *)&v98[8] = 257;
                *(_OWORD *)&v98[16] = v78;
                *(_OWORD *)&v98[32] = v79;
                *(_QWORD *)&v98[48] = v80;
                v9 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v90->Ptr + 13))(v90, v98);
                v10 = v9;
                if ( v9 < 0 )
                {
                  v11 = 851LL;
                  goto LABEL_35;
                }
              }
              v81 = a3[2];
              if ( v81 > 0.0 )
              {
                v82 = a3[3];
                if ( v82 > 0.0 )
                {
                  LODWORD(v91) = (int)v81;
                  HIDWORD(v91) = (int)v82;
                  v83 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
                  v89 = (__int64)v90;
                  if ( v83 )
                  {
                    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v89);
                    AddOptionsRelativeToInside(3, (_DWORD)a3, (unsigned int)v102, (unsigned int)&v91, 0, (__int64)&v89);
                    v89 = (__int64)v90;
                    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v89);
                    AddOptionsRelativeToInside(3, (_DWORD)a3, (unsigned int)v102, (unsigned int)&v91, 1, (__int64)&v89);
                  }
                  else
                  {
                    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v89);
                    UnsafeAddOptionsRelativeToInside(3, (_DWORD)a3, (_DWORD)v13, (unsigned int)&v91, 0, (__int64)&v89);
                    v89 = (__int64)v90;
                    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v89);
                    UnsafeAddOptionsRelativeToInside(3, (_DWORD)a3, (_DWORD)v13, (unsigned int)&v91, 1, (__int64)&v89);
                  }
                }
              }
              v84 = v100;
              v85 = *(float *)(v100 + 8);
              if ( v85 > 0.0 )
              {
                v86 = *(float *)(v100 + 12);
                if ( v86 > 0.0 )
                {
                  LODWORD(v91) = (int)v85;
                  HIDWORD(v91) = (int)v86;
                  v87 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
                  v89 = (__int64)v90;
                  if ( v87 )
                  {
                    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v89);
                    AddOptionsRelativeToInside(5, v84, (unsigned int)v102, (unsigned int)&v91, 0, (__int64)&v89);
                    v89 = (__int64)v90;
                    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v89);
                    AddOptionsRelativeToInside(5, v84, (unsigned int)v102, (unsigned int)&v91, 1, (__int64)&v89);
                  }
                  else
                  {
                    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v89);
                    UnsafeAddOptionsRelativeToInside(5, v84, (_DWORD)v13, (unsigned int)&v91, 0, (__int64)&v89);
                    v89 = (__int64)v90;
                    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v89);
                    UnsafeAddOptionsRelativeToInside(5, v84, (_DWORD)v13, (unsigned int)&v91, 1, (__int64)&v89);
                  }
                }
              }
              v9 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64))v90->Ptr + 8))(v90, v103);
              v10 = v9;
              if ( v9 >= 0 )
              {
                v10 = 0;
                goto LABEL_75;
              }
              v11 = 886LL;
              goto LABEL_35;
            }
            v11 = 795LL;
          }
          else
          {
            v11 = 779LL;
          }
        }
        else
        {
          v11 = 775LL;
        }
LABEL_35:
        v55 = (unsigned int)v9;
LABEL_36:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
          (const char *)v55);
        goto LABEL_75;
      }
      v42 = 736LL;
    }
    else
    {
      v42 = 729LL;
    }
  }
  else
  {
    v42 = 707LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v42,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)(unsigned int)v41);
  v10 = v41;
LABEL_75:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v90);
  return v10;
}
