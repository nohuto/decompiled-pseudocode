/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180035E80
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800354E4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IVector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@U?$IIterable@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@567@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180037260 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$IVector@UCoreKeyboard.c)
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800372A8 (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformation@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18010D9B8 (-AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURe.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
        __int64 a1,
        float *a2,
        float *a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  int v10; // esi
  void *v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // esi
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm6_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  __int64 v24; // rax
  __int128 v25; // xmm8
  __int128 v26; // xmm10
  __int128 v27; // xmm11
  __int64 v28; // xmm9_8
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm4_4
  float v35; // xmm0_4
  float v36; // xmm3_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  __int128 v40; // xmm6
  __int128 v41; // xmm7
  __int128 v42; // xmm12
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  int v46; // r12d
  int v47; // edx
  __int32 v48; // ecx
  unsigned int v49; // eax
  __int32 v50; // eax
  __int32 v51; // eax
  __int64 v52; // rax
  int v53; // eax
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm1_4
  int v58; // eax
  __int64 v59; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  float v64; // xmm6_4
  int v65; // ebx
  float v66; // xmm1_4
  float v67; // xmm0_4
  float v68; // xmm0_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm0_4
  __int64 v72; // rax
  int v73; // eax
  unsigned int v74; // esi
  float v75; // xmm1_4
  float v76; // xmm0_4
  float v77; // xmm0_4
  float v78; // xmm2_4
  float v79; // xmm1_4
  float v80; // xmm0_4
  __int64 v81; // rax
  __int128 v82; // xmm6
  __int128 v83; // xmm8
  __int128 v84; // xmm9
  __int64 v85; // xmm7_8
  __int64 v86; // rax
  int v87; // eax
  __int64 v88; // rcx
  unsigned __int64 v89; // r9
  __int64 v90; // rdx
  int v91; // [rsp+30h] [rbp-D8h]
  int v92; // [rsp+30h] [rbp-D8h]
  __int64 *v93; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v94; // [rsp+50h] [rbp-B8h] BYREF
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 pAptType; // [rsp+60h] [rbp-A8h] BYREF
  APTTYPE pAptType_8[4]; // [rsp+68h] [rbp-A0h]
  __m256i v98; // [rsp+78h] [rbp-90h]
  __int64 v99; // [rsp+98h] [rbp-70h]
  __int128 v100; // [rsp+A8h] [rbp-60h] BYREF
  __m256i v101; // [rsp+B8h] [rbp-50h]
  __int64 v102; // [rsp+D8h] [rbp-30h]
  __int64 v103; // [rsp+E8h] [rbp-20h]
  __int64 v104; // [rsp+F0h] [rbp-18h]
  __int128 v105; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v106; // [rsp+108h] [rbp+0h] BYREF
  __int128 v107; // [rsp+118h] [rbp+10h]
  __m256i v108; // [rsp+128h] [rbp+20h]
  __int64 v109; // [rsp+148h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v104 = a6;
  v93 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v93);
  v93 = 0LL;
  v10 = 0;
  v11 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = (__int64)v11;
  if ( v11 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>(v11);
    *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::`vftable'{for `Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>'};
    *(_QWORD *)(v12 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>'};
    *(_QWORD *)(v12 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>'};
    *(_QWORD *)(v12 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v12 = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>'};
    *(_QWORD *)(v12 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>'};
    *(_QWORD *)(v12 + 16) = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>'};
    *(_QWORD *)(v12 + 24) = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>'};
    *(_QWORD *)(v12 + 48) = 0LL;
    *(_QWORD *)(v12 + 64) = 0LL;
    LODWORD(pAptType) = 0;
    pAptQualifier[0] = APTTYPEQUALIFIER_NONE;
    if ( CoGetApartmentType((APTTYPE *)&pAptType, pAptQualifier) >= 0 )
    {
      v13 = pAptType;
    }
    else
    {
      v13 = 1;
      LODWORD(pAptType) = 1;
    }
    if ( v13 != 3 && v13 )
    {
      *(_DWORD *)(v12 + 80) = 0;
      InitializeSRWLock((PSRWLOCK)(v12 + 88));
    }
    else
    {
      *(_DWORD *)(v12 + 80) = 1;
      *(_DWORD *)(v12 + 88) = 0;
    }
    *(_DWORD *)(v12 + 96) = 0;
    *(_DWORD *)(v12 + 104) = 0;
    v93 = (__int64 *)v12;
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v10);
    v63 = (__int64)v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
    }
    return (unsigned int)v10;
  }
  v106 = *(_OWORD *)(a1 + 208);
  KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
    a1 + 16,
    pAptQualifier,
    *(_QWORD *)(a1 + 200),
    &v106,
    *(_DWORD *)(a1 + 240),
    *(_BYTE *)(a1 + 304),
    *(_QWORD *)(a1 + 312),
    a1 + 296);
  v106 = *(_OWORD *)(a1 + 48);
  LOBYTE(v91) = *(_BYTE *)(a1 + 304);
  KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
    a1 + 16,
    &v94,
    *(_QWORD *)(a1 + 40),
    &v106,
    *(_DWORD *)(a1 + 80),
    v91,
    *(_QWORD *)(a1 + 312),
    a1 + 280);
  pAptType = (__int64)v93;
  if ( v93 )
    (*(void (__fastcall **)(__int64 *))(*v93 + 8))(v93);
  v106 = *(_OWORD *)(a1 + 260);
  AddOptionsRelativeToInside(1, (unsigned int)&v106, a1 + 200, (unsigned int)pAptQualifier, 0, (__int64)&pAptType);
  pAptType = (__int64)v93;
  if ( v93 )
    (*(void (__fastcall **)(__int64 *))(*v93 + 8))(v93);
  v106 = *(_OWORD *)(a1 + 100);
  AddOptionsRelativeToInside(1, (unsigned int)&v106, a1 + 40, (unsigned int)&v94, 1, (__int64)&pAptType);
  pAptType = (unsigned int)(int)*(float *)(a1 + 268);
  v14 = (int)*(float *)(a1 + 272);
  v103 = (unsigned int)(int)*(float *)(a1 + 136);
  *(_QWORD *)&v106 = (unsigned int)(int)*(float *)(a1 + 140);
  v105 = *(_OWORD *)(a1 + 128);
  LOBYTE(v92) = *(_BYTE *)(a1 + 304);
  KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
    a1 + 16,
    &v94,
    *(_QWORD *)(a1 + 120),
    &v105,
    *(_DWORD *)(a1 + 160),
    v92,
    *(_QWORD *)(a1 + 312),
    a1 + 288);
  HIWORD(pAptType_8[2]) = 0;
  *(__int64 *)((char *)&v98.m256i_i64[1] + 4) = 0LL;
  HIDWORD(v99) = 0;
  *(_QWORD *)pAptType_8 = 0x200000002LL;
  v98.m256i_i32[0] = pAptType;
  pAptType_8[3] = v14;
  *(__int64 *)((char *)v98.m256i_i64 + 4) = __PAIR64__(pAptQualifier[0], pAptQualifier[1]);
  v15 = a2[1] + a2[3];
  v16 = *(float *)(a1 + 208);
  v17 = *a2 - v16;
  v18 = (float)(int)pAptType;
  if ( (float)(int)pAptType <= v17 )
    v17 = (float)(int)pAptType;
  v98.m256i_i32[5] = (int)v17;
  v19 = *(float *)(a1 + 212);
  v20 = v15 - v19;
  v21 = (float)v14;
  if ( (float)v14 <= (float)(v15 - v19) )
    v20 = (float)v14;
  v98.m256i_i32[6] = (int)v20;
  v22 = (float)(v16 + *(float *)(a1 + 216)) - *a2;
  if ( v18 <= v22 )
    v22 = (float)(int)pAptType;
  v98.m256i_i32[7] = (int)v22;
  v23 = (float)(v19 + *(float *)(a1 + 220)) - v15;
  if ( v21 <= v23 )
    v23 = (float)v14;
  LODWORD(v99) = (int)v23;
  LOWORD(pAptType_8[2]) = 0;
  v24 = *v93;
  v25 = *(_OWORD *)pAptType_8;
  v100 = *(_OWORD *)pAptType_8;
  v26 = *(_OWORD *)v98.m256i_i8;
  v101 = v98;
  v27 = *(_OWORD *)&v98.m256i_u64[2];
  v28 = v99;
  v102 = v99;
  v29 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v24 + 104))(v93, &v100);
  if ( (v29 & 0x80000000) != 0 )
  {
    v89 = v29;
    v90 = 373LL;
LABEL_106:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v90,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)v89);
    goto LABEL_107;
  }
  v100 = v25;
  DWORD1(v100) = 1;
  v30 = *v93;
  *(_OWORD *)v101.m256i_i8 = v26;
  *(_OWORD *)&v101.m256i_u64[2] = v27;
  v102 = v28;
  v29 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v30 + 104))(v93, &v100);
  if ( (v29 & 0x80000000) != 0 )
  {
    v89 = v29;
    v90 = 387LL;
    goto LABEL_106;
  }
  v100 = v25;
  LODWORD(v100) = 6;
  v31 = *v93;
  *(_OWORD *)v101.m256i_i8 = v26;
  *(_OWORD *)&v101.m256i_u64[2] = v27;
  v102 = v28;
  v29 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v31 + 104))(v93, &v100);
  if ( (v29 & 0x80000000) != 0 )
  {
    v89 = v29;
    v90 = 394LL;
    goto LABEL_106;
  }
  v32 = *(float *)(a1 + 216);
  v33 = *(float *)(a1 + 220);
  *(_OWORD *)pAptType_8 = v25;
  v98.m256i_i32[3] = HIDWORD(v26);
  *(_OWORD *)&v98.m256i_u64[2] = v27;
  v99 = v28;
  v98.m256i_i32[0] = pAptType;
  pAptType_8[3] = v14;
  v98.m256i_i32[2] = (int)(float)(v32 * 0.5);
  v98.m256i_i32[1] = (int)v33;
  v34 = *(float *)(a1 + 208);
  v35 = *a2 - v34;
  if ( v18 <= v35 )
    v35 = v18;
  v98.m256i_i32[5] = (int)v35;
  v36 = *(float *)(a1 + 212);
  v37 = a2[1] - v36;
  if ( v21 <= v37 )
    v37 = (float)v14;
  v98.m256i_i32[6] = (int)v37;
  v38 = (float)(v32 + v34) - *a2;
  if ( v18 <= v38 )
    v38 = v18;
  v98.m256i_i32[7] = (int)v38;
  v39 = (float)(v33 + v36) - a2[1];
  if ( v21 <= v39 )
    v39 = (float)v14;
  LODWORD(v99) = (int)v39;
  v40 = *(_OWORD *)pAptType_8;
  v100 = *(_OWORD *)pAptType_8;
  v41 = *(_OWORD *)v98.m256i_i8;
  v42 = *(_OWORD *)&v98.m256i_u64[2];
  DWORD1(v100) = 4;
  v43 = *v93;
  v101 = v98;
  v102 = v99;
  v44 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v43 + 104))(v93, &v100);
  v29 = v44;
  if ( v44 < 0 )
  {
    v90 = 413LL;
LABEL_105:
    v89 = (unsigned int)v44;
    goto LABEL_106;
  }
  v100 = v40;
  DWORD1(v100) = 8;
  v45 = *v93;
  *(_OWORD *)v101.m256i_i8 = v41;
  *(_OWORD *)&v101.m256i_u64[2] = v42;
  v102 = v99;
  v44 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v45 + 104))(v93, &v100);
  v29 = v44;
  if ( v44 < 0 )
  {
    v90 = 417LL;
    goto LABEL_105;
  }
  *(_OWORD *)&v108.m256i_u64[2] = 0LL;
  v109 = 0LL;
  LODWORD(v107) = 2;
  *(_QWORD *)((char *)&v107 + 4) = 2LL;
  v46 = v103;
  v108.m256i_i64[0] = __PAIR64__(HIDWORD(v94), v103);
  v47 = v106;
  HIDWORD(v107) = v106;
  v108.m256i_i64[1] = (unsigned int)v94;
  v48 = v103;
  v49 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
  if ( v49 < (unsigned int)v103 )
    v48 = v49;
  v108.m256i_i32[5] = v48;
  v50 = v106;
  if ( v108.m256i_i32[6] < (unsigned int)v106 )
    v50 = v108.m256i_i32[6];
  v108.m256i_i32[6] = v50;
  v51 = v103;
  if ( v108.m256i_i32[7] < (unsigned int)v103 )
    v51 = v108.m256i_i32[7];
  v108.m256i_i32[7] = v51;
  if ( (_DWORD)v106 )
    v47 = 0;
  LODWORD(v109) = v47;
  WORD4(v107) = 257;
  v52 = *v93;
  v100 = v107;
  v101 = v108;
  v102 = v109;
  v53 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v52 + 104))(v93, &v100);
  v29 = v53;
  if ( v53 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v53);
    v62 = (__int64)v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
    return v29;
  }
  if ( a5 )
  {
    *(_OWORD *)pAptType_8 = v25;
    *(_OWORD *)v98.m256i_i8 = v26;
    *(_OWORD *)&v98.m256i_u64[2] = v27;
    v99 = v28;
    v64 = a3[3] + a3[1];
    pAptType_8[1] = 6;
    v65 = (int)a3[2];
    v98.m256i_i32[2] = v65;
    v98.m256i_i32[0] = v65;
    v98.m256i_i32[4] = v65;
    v66 = *(float *)(a1 + 208);
    v67 = *a3 - v66;
    if ( (float)v65 <= v67 )
      v67 = (float)v65;
    v98.m256i_i32[5] = (int)v67;
    v68 = *(float *)(a1 + 212);
    v69 = v64 - v68;
    if ( (float)pAptType_8[3] <= (float)(v64 - v68) )
      v69 = (float)pAptType_8[3];
    v98.m256i_i32[6] = (int)v69;
    v70 = (float)(v66 + *(float *)(a1 + 216)) - *a3;
    if ( (float)v65 <= v70 )
      v70 = (float)v65;
    v98.m256i_i32[7] = (int)v70;
    v71 = (float)(v68 + *(float *)(a1 + 220)) - v64;
    if ( (float)pAptType_8[3] <= v71 )
      v71 = (float)pAptType_8[3];
    LODWORD(v99) = (int)v71;
    v72 = *v93;
    v100 = *(_OWORD *)pAptType_8;
    v101 = v98;
    v102 = v99;
    v73 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v72 + 104))(v93, &v100);
    v74 = v73;
    if ( v73 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C2,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
        (const char *)(unsigned int)v73);
      v29 = v74;
LABEL_107:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v93);
      return v29;
    }
    *(_OWORD *)pAptType_8 = v25;
    *(_OWORD *)v98.m256i_i8 = v26;
    *(_OWORD *)&v98.m256i_u64[2] = v27;
    v99 = v28;
    pAptType_8[1] = 6;
    v98.m256i_i32[2] = v65;
    v98.m256i_i32[0] = v46;
    v75 = *(float *)(a1 + 208);
    v76 = *a3 - v75;
    if ( (float)v46 <= v76 )
      v76 = (float)v46;
    v98.m256i_i32[5] = (int)v76;
    v77 = *(float *)(a1 + 212);
    v78 = v64 - v77;
    if ( (float)pAptType_8[3] <= (float)(v64 - v77) )
      v78 = (float)pAptType_8[3];
    v98.m256i_i32[6] = (int)v78;
    v79 = (float)(v75 + *(float *)(a1 + 216)) - *a3;
    if ( (float)v46 <= v79 )
      v79 = (float)v46;
    v98.m256i_i32[7] = (int)v79;
    v80 = (float)(v77 + *(float *)(a1 + 220)) - v64;
    if ( (float)pAptType_8[3] <= v80 )
      v80 = (float)pAptType_8[3];
    LODWORD(v99) = (int)v80;
    v81 = *v93;
    v82 = *(_OWORD *)pAptType_8;
    v100 = *(_OWORD *)pAptType_8;
    v83 = *(_OWORD *)v98.m256i_i8;
    v101 = v98;
    v84 = *(_OWORD *)&v98.m256i_u64[2];
    v85 = v99;
    v102 = v99;
    v44 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v81 + 104))(v93, &v100);
    v29 = v44;
    if ( v44 >= 0 )
    {
      v100 = v82;
      WORD4(v100) = 257;
      v86 = *v93;
      *(_OWORD *)v101.m256i_i8 = v83;
      *(_OWORD *)&v101.m256i_u64[2] = v84;
      v102 = v85;
      v87 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v86 + 104))(v93, &v100);
      v29 = v87;
      if ( v87 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D5,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
          (const char *)(unsigned int)v87);
        v88 = (__int64)v93;
        if ( v93 )
        {
          v93 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
        }
        return v29;
      }
      goto LABEL_46;
    }
    v90 = 462LL;
    goto LABEL_105;
  }
LABEL_46:
  v54 = a3[2];
  if ( v54 > 0.0 )
  {
    v55 = a3[3];
    if ( v55 > 0.0 )
    {
      pAptQualifier[0] = (int)v54;
      pAptQualifier[1] = (int)v55;
      v94 = (__int64)v93;
      if ( v93 )
        (*(void (__fastcall **)(__int64 *))(*v93 + 8))(v93);
      AddOptionsRelativeToInside(3, (_DWORD)a3, a1 + 200, (unsigned int)pAptQualifier, 0, (__int64)&v94);
      v94 = (__int64)v93;
      if ( v93 )
        (*(void (__fastcall **)(__int64 *))(*v93 + 8))(v93);
      AddOptionsRelativeToInside(3, (_DWORD)a3, a1 + 200, (unsigned int)pAptQualifier, 1, (__int64)&v94);
    }
  }
  v56 = *(float *)(a4 + 8);
  if ( v56 > 0.0 )
  {
    v57 = *(float *)(a4 + 12);
    if ( v57 > 0.0 )
    {
      pAptQualifier[0] = (int)v56;
      pAptQualifier[1] = (int)v57;
      v94 = (__int64)v93;
      if ( v93 )
        (*(void (__fastcall **)(__int64 *))(*v93 + 8))(v93);
      AddOptionsRelativeToInside(5, a4, a1 + 200, (unsigned int)pAptQualifier, 0, (__int64)&v94);
      v94 = (__int64)v93;
      if ( v93 )
        (*(void (__fastcall **)(__int64 *))(*v93 + 8))(v93);
      AddOptionsRelativeToInside(5, a4, a1 + 200, (unsigned int)pAptQualifier, 1, (__int64)&v94);
    }
  }
  v58 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v93 + 64))(v93, v104);
  v29 = v58;
  if ( v58 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v58);
    v59 = (__int64)v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    }
    return v29;
  }
  v61 = (__int64)v93;
  if ( v93 )
  {
    v93 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
  return 0LL;
}
