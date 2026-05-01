/*
 * XREFs of ?UnsafeAddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformation@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180488A2C
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180250A00 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA?AURect@Foundation@Windows@@XZ @ 0x18024E0C0 (-GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA-AURect@Foundation@Windows@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UnsafeAddOptionsRelativeToInside(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        char a5,
        __int64 *a6)
{
  const char *v10; // r9
  int v11; // r15d
  int v12; // r14d
  unsigned int v13; // edi
  unsigned int v14; // esi
  int v15; // ebx
  __int128 v16; // xmm6
  __int128 v17; // xmm8
  __int128 v18; // xmm9
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  _OWORD v39[3]; // [rsp+28h] [rbp-A9h] BYREF
  __int64 v40; // [rsp+58h] [rbp-79h]
  __int128 v41; // [rsp+68h] [rbp-69h] BYREF
  __m256i v42; // [rsp+78h] [rbp-59h]
  __int64 v43; // [rsp+98h] [rbp-39h]
  _OWORD v44[5]; // [rsp+A8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+4Fh]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      v10);
  v11 = (int)*(float *)(a2 + 8);
  v12 = (int)*(float *)(a2 + 12);
  v13 = *a4;
  v14 = a4[1];
  v15 = (int)*((float *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a3, v44) + 2);
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  LODWORD(v39[0]) = a1;
  BYTE8(v39[0]) = a5;
  BYTE9(v39[0]) = a5;
  HIDWORD(v39[0]) = (int)*((float *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a3, v44) + 3);
  LODWORD(v39[1]) = v15;
  *(_OWORD *)((char *)&v39[1] + 4) = __PAIR64__(v13, v14);
  v16 = v39[0];
  v41 = v39[0];
  v17 = v39[1];
  v18 = v39[2];
  DWORD1(v41) = 5;
  v19 = *a6;
  v39[0] = v41;
  v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v19 + 104LL))(v19, v39);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 61LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a6);
    return v21;
  }
  v41 = v16;
  DWORD1(v41) = 1;
  v23 = *a6;
  v39[0] = v41;
  v39[1] = v17;
  v39[2] = v18;
  v40 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v23 + 104LL))(v23, v39);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 65LL;
    goto LABEL_34;
  }
  v41 = v16;
  DWORD1(v41) = 9;
  v24 = *a6;
  v39[0] = v41;
  v39[1] = v17;
  v39[2] = v18;
  v40 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v24 + 104LL))(v24, v39);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 69LL;
    goto LABEL_34;
  }
  v41 = v16;
  DWORD1(v41) = 4;
  v25 = *a6;
  v39[0] = v41;
  v39[1] = v17;
  v39[2] = v18;
  v40 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v25 + 104LL))(v25, v39);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 73LL;
    goto LABEL_34;
  }
  v41 = v16;
  DWORD1(v41) = 0;
  v26 = *a6;
  v39[0] = v41;
  v39[1] = v17;
  v39[2] = v18;
  v40 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v26 + 104LL))(v26, v39);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 77LL;
    goto LABEL_34;
  }
  v41 = v16;
  DWORD1(v41) = 8;
  v27 = *a6;
  v39[0] = v41;
  v39[1] = v17;
  v39[2] = v18;
  v40 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v27 + 104LL))(v27, v39);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 81LL;
    goto LABEL_34;
  }
  v41 = v16;
  DWORD1(v41) = 6;
  v28 = *a6;
  v39[0] = v41;
  v39[1] = v17;
  v39[2] = v18;
  v40 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v28 + 104LL))(v28, v39);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 85LL;
    goto LABEL_34;
  }
  v41 = v16;
  DWORD1(v41) = 2;
  v29 = *a6;
  v39[0] = v41;
  v39[1] = v17;
  v39[2] = v18;
  v40 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v29 + 104LL))(v29, v39);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 89LL;
    goto LABEL_34;
  }
  v41 = v16;
  DWORD1(v41) = 10;
  v30 = *a6;
  v39[0] = v41;
  v39[1] = v17;
  v39[2] = v18;
  v40 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v30 + 104LL))(v30, v39);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 93LL;
    goto LABEL_34;
  }
  v39[0] = v16;
  v39[1] = v17;
  DWORD1(v39[0]) = 7;
  HIDWORD(v39[0]) = v12;
  HIDWORD(v39[1]) = v12;
  v31 = *a6;
  v41 = v39[0];
  *(_OWORD *)v42.m256i_i8 = v39[1];
  *(_OWORD *)&v42.m256i_u64[2] = v18;
  v43 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v31 + 104LL))(v31, &v41);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 108LL;
    goto LABEL_34;
  }
  v39[0] = v16;
  v39[1] = v17;
  DWORD1(v39[0]) = 3;
  HIDWORD(v39[0]) = v12;
  HIDWORD(v39[1]) = v12;
  v32 = *a6;
  v41 = v39[0];
  *(_OWORD *)v42.m256i_i8 = v39[1];
  *(_OWORD *)&v42.m256i_u64[2] = v18;
  v43 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v32 + 104LL))(v32, &v41);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 114LL;
    goto LABEL_34;
  }
  v39[0] = v16;
  v39[1] = v17;
  DWORD1(v39[0]) = 11;
  HIDWORD(v39[0]) = v12;
  HIDWORD(v39[1]) = v12;
  v33 = *a6;
  v41 = v39[0];
  *(_OWORD *)v42.m256i_i8 = v39[1];
  *(_OWORD *)&v42.m256i_u64[2] = v18;
  v43 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v33 + 104LL))(v33, &v41);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 120LL;
    goto LABEL_34;
  }
  v39[0] = v16;
  v39[1] = v17;
  DWORD1(v39[0]) = 13;
  LODWORD(v39[1]) = v11;
  v34 = *a6;
  v41 = v39[0];
  *(_OWORD *)v42.m256i_i8 = v39[1];
  *(_OWORD *)&v42.m256i_u64[2] = v18;
  v43 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v34 + 104LL))(v34, &v41);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 134LL;
    goto LABEL_34;
  }
  v39[0] = v16;
  v39[1] = v17;
  DWORD1(v39[0]) = 3;
  LODWORD(v39[1]) = v11;
  v35 = *a6;
  v41 = v39[0];
  *(_OWORD *)v42.m256i_i8 = v39[1];
  *(_OWORD *)&v42.m256i_u64[2] = v18;
  v43 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v35 + 104LL))(v35, &v41);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 139LL;
    goto LABEL_34;
  }
  v39[0] = v16;
  v39[1] = v17;
  DWORD1(v39[0]) = 14;
  LODWORD(v39[1]) = v11;
  v36 = *a6;
  v41 = v39[0];
  *(_OWORD *)v42.m256i_i8 = v39[1];
  *(_OWORD *)&v42.m256i_u64[2] = v18;
  v43 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v36 + 104LL))(v36, &v41);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 144LL;
    goto LABEL_34;
  }
  v39[0] = v16;
  v39[1] = v17;
  v39[2] = v18;
  DWORD1(v39[0]) = 15;
  HIDWORD(v39[0]) = v12;
  LODWORD(v39[1]) = v11;
  *(_QWORD *)((char *)&v39[1] + 12) = __PAIR64__(v11, v12);
  v37 = *a6;
  v41 = v39[0];
  v42 = *(__m256i *)&v39[1];
  v43 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v37 + 104LL))(v37, &v41);
  v21 = v20;
  if ( v20 < 0 )
  {
    v22 = 161LL;
    goto LABEL_34;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a6);
  return 0LL;
}
