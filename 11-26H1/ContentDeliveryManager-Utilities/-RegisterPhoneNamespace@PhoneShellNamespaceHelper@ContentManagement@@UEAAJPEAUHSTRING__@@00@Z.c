/*
 * XREFs of ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180037D40
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x180027420 (--$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ??0_lambda_12abaff33ac527a70ddc02944390cf89_@@QEAA@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAVPhoneShellNamespaceHelper@ContentManagement@@AEAPEAUHSTRING__@@@Z @ 0x180028124 (--0_lambda_12abaff33ac527a70ddc02944390cf89_@@QEAA@AEAV-$unique_any_t@V-$unique_storage@U-$resou.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x18002DC94 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x18002E9B4 (-EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033BA0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x18003538C (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18003B71C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003DAC8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FF78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::RegisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v8; // rax
  ContentManagement::PhoneShellNamespaceHelper *v9; // rcx
  int PhoneLink; // eax
  unsigned int v11; // ebx
  __m128i *v12; // rax
  PCWSTR v13; // rax
  int v14; // eax
  ContentManagement::PhoneShellNamespaceHelper *v15; // rcx
  bool *v16; // r8
  unsigned __int64 v17; // xmm0_8
  CreativeFramework::ContentDeliveryManagerSettings *v18; // rbx
  int v19; // eax
  int v20; // edi
  unsigned __int64 v21; // xmm0_8
  int v22; // eax
  unsigned __int64 v23; // xmm0_8
  int v24; // eax
  unsigned __int64 v25; // xmm0_8
  int v26; // eax
  unsigned __int64 v27; // xmm0_8
  PCWSTR v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r9
  int v31; // eax
  unsigned __int64 v32; // xmm0_8
  int v33; // eax
  unsigned __int64 v34; // xmm0_8
  int v35; // eax
  ContentManagement::PhoneShellNamespaceHelper *v36; // rcx
  bool *v37; // r8
  unsigned __int64 v38; // xmm0_8
  int v39; // eax
  unsigned __int64 v40; // xmm0_8
  int v41; // eax
  unsigned __int64 v42; // xmm0_8
  int v43; // eax
  ContentManagement::PhoneShellNamespaceHelper *v44; // rcx
  bool *v45; // r8
  unsigned __int64 v46; // xmm0_8
  CreativeFramework::ContentDeliveryManagerSettings *v47; // rdi
  int v48; // eax
  int v49; // r14d
  unsigned __int64 v50; // xmm0_8
  int v51; // eax
  unsigned __int64 v52; // xmm0_8
  int v53; // eax
  unsigned __int64 v54; // xmm0_8
  int v55; // eax
  ContentManagement::PhoneShellNamespaceHelper *v56; // rcx
  bool *v57; // r8
  unsigned __int64 v58; // xmm0_8
  CreativeFramework::ContentDeliveryManagerSettings *v59; // rdi
  int v60; // eax
  unsigned __int64 v61; // xmm0_8
  int v62; // eax
  unsigned __int64 v63; // xmm0_8
  int v64; // eax
  ContentManagement::PhoneShellNamespaceHelper *v65; // rcx
  bool *v66; // r8
  unsigned __int64 v67; // xmm0_8
  CreativeFramework::ContentDeliveryManagerSettings *v68; // rdi
  int v69; // eax
  unsigned __int64 v70; // xmm0_8
  int v71; // eax
  int v72; // esi
  unsigned __int64 v73; // xmm0_8
  int v74; // eax
  unsigned __int64 v75; // xmm0_8
  int v76; // eax
  ContentManagement::PhoneShellNamespaceHelper *v77; // rcx
  bool *v78; // r8
  unsigned __int64 v79; // xmm0_8
  const WCHAR *v80; // rbx
  int v81; // eax
  unsigned __int64 v82; // xmm0_8
  int v83; // eax
  unsigned __int64 v84; // xmm0_8
  int v85; // eax
  unsigned __int64 v86; // xmm0_8
  PCWSTR v87; // rax
  int v88; // eax
  ContentManagement::PhoneShellNamespaceHelper *v89; // rcx
  bool *v90; // r8
  unsigned __int64 v91; // xmm0_8
  int v92; // eax
  unsigned __int64 v93; // xmm0_8
  int v94; // eax
  ContentManagement::PhoneShellNamespaceHelper *v95; // rcx
  bool *v96; // r8
  unsigned __int64 v97; // xmm0_8
  int v98; // eax
  unsigned __int64 v99; // xmm0_8
  const WCHAR *v100; // rax
  int v101; // eax
  unsigned __int64 v102; // xmm0_8
  const unsigned __int16 *v103; // rax
  ContentManagement::PhoneShellNamespaceHelper *v104; // rcx
  int v105; // eax
  int v107; // [rsp+28h] [rbp-A9h]
  __m128i v108; // [rsp+28h] [rbp-A9h]
  CreativeFramework::ContentDeliveryManagerSettings *v109[3]; // [rsp+38h] [rbp-99h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v110[3]; // [rsp+50h] [rbp-81h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v111[5]; // [rsp+68h] [rbp-69h] BYREF
  _QWORD *v112; // [rsp+90h] [rbp-41h]
  CreativeFramework::ContentDeliveryManagerSettings *v113[3]; // [rsp+A0h] [rbp-31h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v114[3]; // [rsp+B8h] [rbp-19h] BYREF
  char *v115[3]; // [rsp+D0h] [rbp-1h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v116[4]; // [rsp+E8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]
  LPCVOID lpData; // [rsp+138h] [rbp+67h] BYREF
  HSTRING string; // [rsp+140h] [rbp+6Fh] BYREF

  string = a2;
  lpData = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &lpData,
    0LL);
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v8 = WindowsGetStringRawBuffer(a3, 0LL);
  PhoneLink = ContentManagement::PhoneShellNamespaceHelper::CreatePhoneLink(v9, v8, StringRawBuffer, (LPCWSTR *)&lpData);
  v11 = PhoneLink;
  if ( PhoneLink < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37C,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)PhoneLink,
      v107);
    goto LABEL_71;
  }
  v12 = (__m128i *)_lambda_12abaff33ac527a70ddc02944390cf89_::_lambda_12abaff33ac527a70ddc02944390cf89_(
                     v116,
                     (__int64)&lpData,
                     (__int64)this - 48,
                     (__int64)&string);
  v108 = *v12;
  v112 = (_QWORD *)v12[1].m128i_i64[0];
  memset(v109, 0, sizeof(v109));
  v13 = WindowsGetStringRawBuffer(string, 0LL);
  v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v109,
          L"%ws\\%ws",
          L"Software\\Classes\\CLSID",
          v13);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x386,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v14,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v17 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v17 + 48) + 56LL))(v17 + 48, *v112);
    goto LABEL_71;
  }
  v18 = v109[0];
  v19 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v15, (const unsigned __int16 *)v109[0], v16);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x387,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v19,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v21 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v21 + 48) + 56LL))(v21 + 48, *v112);
LABEL_7:
    v11 = v20;
    goto LABEL_71;
  }
  v22 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v18,
          &Src,
          L"Your Phone",
          (const unsigned __int16 *)0xA,
          v108.m128i_u32[0]);
  v20 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38F,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v22,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v23 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v23 + 48) + 56LL))(v23 + 48, *v112);
    goto LABEL_7;
  }
  v24 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          (const WCHAR *)v18,
          L"System.IsPinnedToNameSpaceTree",
          1);
  v20 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x390,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v24,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v25 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v25 + 48) + 56LL))(v25 + 48, *v112);
    goto LABEL_7;
  }
  v26 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          (const WCHAR *)v18,
          L"DescriptionID",
          3);
  v20 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x391,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v26,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v27 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v27 + 48) + 56LL))(v27 + 48, *v112);
    goto LABEL_7;
  }
  v28 = WindowsGetStringRawBuffer(a3, 0LL);
  v29 = -1LL;
  v30 = -1LL;
  do
    ++v30;
  while ( v28[v30] );
  v31 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v18,
          L"LocalizedString",
          v28,
          (const unsigned __int16 *)v30,
          v108.m128i_u32[0]);
  v20 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x392,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v31,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v32 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v32 + 48) + 56LL))(v32 + 48, *v112);
    goto LABEL_7;
  }
  v33 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          (const WCHAR *)v18,
          L"SortOrderIndex",
          64);
  v20 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x393,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v33,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v34 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v34 + 48) + 56LL))(v34 + 48, *v112);
    goto LABEL_7;
  }
  memset(v110, 0, sizeof(v110));
  v35 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v110,
          L"%ws\\%ws",
          v18,
          L"DefaultIcon");
  v20 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v35,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v38 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v38 + 48) + 56LL))(v38 + 48, *v112);
    goto LABEL_7;
  }
  v39 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v36, (const unsigned __int16 *)v110[0], v37);
  v20 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x399,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v39,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v40 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v40 + 48) + 56LL))(v40 + 48, *v112);
    goto LABEL_7;
  }
  v41 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v110[0],
          &Src,
          L"%SystemRoot%\\system32\\ContentDeliveryManager.Utilities.dll,-10",
          (const unsigned __int16 *)0x3E,
          v108.m128i_u32[0]);
  v20 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39A,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v41,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v42 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v42 + 48) + 56LL))(v42 + 48, *v112);
    goto LABEL_7;
  }
  memset(v111, 0, 24);
  v43 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v111,
          L"%ws\\%ws",
          v18,
          L"InProcServer32");
  v20 = v43;
  if ( v43 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A0,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v43,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v46 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v46 + 48) + 56LL))(v46 + 48, *v112);
    goto LABEL_7;
  }
  v47 = v111[0];
  v48 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v44, (const unsigned __int16 *)v111[0], v45);
  v49 = v48;
  if ( v48 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A1,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v48,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v50 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v50 + 48) + 56LL))(v50 + 48, *v112);
LABEL_30:
    v11 = v49;
    goto LABEL_71;
  }
  v51 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v47,
          &Src,
          L"%SystemRoot%\\system32\\shell32.dll",
          (const unsigned __int16 *)0x21,
          v108.m128i_u32[0]);
  v49 = v51;
  if ( v51 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A2,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v51,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v52 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v52 + 48) + 56LL))(v52 + 48, *v112);
    goto LABEL_30;
  }
  v53 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v47,
          L"ThreadingModel",
          L"Both",
          (const unsigned __int16 *)4,
          v108.m128i_u32[0]);
  v20 = v53;
  if ( v53 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A3,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v53,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v54 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v54 + 48) + 56LL))(v54 + 48, *v112);
    goto LABEL_7;
  }
  memset(v113, 0, sizeof(v113));
  v55 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v113,
          L"%ws\\%ws",
          v18,
          L"Instance");
  v20 = v55;
  if ( v55 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A8,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v55,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v58 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v58 + 48) + 56LL))(v58 + 48, *v112);
    goto LABEL_7;
  }
  v59 = v113[0];
  v60 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v56, (const unsigned __int16 *)v113[0], v57);
  v49 = v60;
  if ( v60 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A9,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v60,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v61 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v61 + 48) + 56LL))(v61 + 48, *v112);
    goto LABEL_30;
  }
  v62 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v59,
          L"CLSID",
          L"{0E5AAE11-A475-4c5b-AB00-C66DE400274E}",
          (const unsigned __int16 *)0x26,
          v108.m128i_u32[0]);
  v49 = v62;
  if ( v62 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AA,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v62,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v63 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v63 + 48) + 56LL))(v63 + 48, *v112);
    goto LABEL_30;
  }
  memset(v114, 0, sizeof(v114));
  v64 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v114,
          L"%ws\\%ws",
          v59,
          L"InitPropertyBag");
  v20 = v64;
  if ( v64 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B0,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v64,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v67 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v67 + 48) + 56LL))(v67 + 48, *v112);
    goto LABEL_7;
  }
  v68 = v114[0];
  v69 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v65, (const unsigned __int16 *)v114[0], v66);
  v49 = v69;
  if ( v69 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v69,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v70 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v70 + 48) + 56LL))(v70 + 48, *v112);
    goto LABEL_30;
  }
  do
    ++v29;
  while ( *((_WORD *)lpData + v29) );
  v71 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v68,
          L"TargetFolderPath",
          lpData,
          (const unsigned __int16 *)(unsigned int)v29,
          v108.m128i_u32[0]);
  v72 = v71;
  if ( v71 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B2,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v71,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v73 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v73 + 48) + 56LL))(v73 + 48, *v112);
    v11 = v72;
    goto LABEL_71;
  }
  v74 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          (const WCHAR *)v68,
          L"Attributes",
          17);
  v20 = v74;
  if ( v74 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B3,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v74,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v75 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v75 + 48) + 56LL))(v75 + 48, *v112);
    goto LABEL_7;
  }
  memset(v115, 0, sizeof(v115));
  v76 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v115,
          L"%ws\\%ws",
          v18,
          L"ShellFolder");
  v11 = v76;
  if ( v76 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B9,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v76,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v79 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v79 + 48) + 56LL))(v79 + 48, *v112);
    goto LABEL_71;
  }
  v80 = (const WCHAR *)v115[0];
  v81 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v77, (const unsigned __int16 *)v115[0], v78);
  v20 = v81;
  if ( v81 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BA,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v81,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v82 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v82 + 48) + 56LL))(v82 + 48, *v112);
    goto LABEL_7;
  }
  v83 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          v80,
          L"Attributes",
          805568517);
  v20 = v83;
  if ( v83 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BB,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v83,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v84 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v84 + 48) + 56LL))(v84 + 48, *v112);
    goto LABEL_7;
  }
  v85 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          v80,
          L"FolderValueFlags",
          1064);
  v11 = v85;
  if ( v85 >= 0 )
  {
    memset(v116, 0, 24);
    v87 = WindowsGetStringRawBuffer(string, 0LL);
    v88 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)v116,
            L"%ws\\%ws",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
            v87);
    v11 = v88;
    if ( v88 >= 0 )
    {
      v92 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
              v89,
              (const unsigned __int16 *)v116[0],
              v90);
      v11 = v92;
      if ( v92 >= 0 )
      {
        v94 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                v116[0],
                &Src,
                L"Your Phone",
                (const unsigned __int16 *)0xA,
                v108.m128i_u32[0]);
        v11 = v94;
        if ( v94 >= 0 )
        {
          v98 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
                  v95,
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                  v96);
          v11 = v98;
          if ( v98 >= 0 )
          {
            v100 = WindowsGetStringRawBuffer(string, 0LL);
            v101 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                     v100,
                     1);
            v11 = v101;
            if ( v101 >= 0 )
            {
              v103 = WindowsGetStringRawBuffer(string, 0LL);
              v105 = ContentManagement::PhoneShellNamespaceHelper::NotifyShell(v104, 8, v103);
              v11 = v105;
              if ( v105 >= 0 )
              {
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v116);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
                v11 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x3CC,
                  (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                  (const char *)(unsigned int)v105,
                  v108.m128i_i32[0]);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v116);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3C6,
                (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)(unsigned int)v101,
                v108.m128i_i32[0]);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v116);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
              RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
              v102 = _mm_srli_si128(v108, 8).m128i_u64[0];
              (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v102 + 48) + 56LL))(v102 + 48, *v112);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3C5,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v98,
              v108.m128i_i32[0]);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v116);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
            RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
            v99 = _mm_srli_si128(v108, 8).m128i_u64[0];
            (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v99 + 48) + 56LL))(v99 + 48, *v112);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3C2,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v94,
            v108.m128i_i32[0]);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v116);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
          RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
          v97 = _mm_srli_si128(v108, 8).m128i_u64[0];
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v97 + 48) + 56LL))(v97 + 48, *v112);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C1,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v92,
          v108.m128i_i32[0]);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v116);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
        RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
        v93 = _mm_srli_si128(v108, 8).m128i_u64[0];
        (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v93 + 48) + 56LL))(v93 + 48, *v112);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C0,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v88,
        v108.m128i_i32[0]);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v116);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
      RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
      v91 = _mm_srli_si128(v108, 8).m128i_u64[0];
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v91 + 48) + 56LL))(v91 + 48, *v112);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BC,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v85,
      v108.m128i_i32[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v115);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v114);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v113);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v111);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v110);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v109);
    RemoveDirectoryW(*(LPCWSTR *)v108.m128i_i64[0]);
    v86 = _mm_srli_si128(v108, 8).m128i_u64[0];
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(v86 + 48) + 56LL))(v86 + 48, *v112);
  }
LABEL_71:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpData);
  return v11;
}
