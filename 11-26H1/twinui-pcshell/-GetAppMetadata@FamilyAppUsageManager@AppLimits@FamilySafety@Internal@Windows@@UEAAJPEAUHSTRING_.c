/*
 * XREFs of ?GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18056D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180033BD0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801B5C88 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@V?$AgileHashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@$0A@@Internal@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18056BFC8 (--1-$com_ptr_t@V-$AgileHashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Coll.c)
 *     ?GetStartMenuShortcutName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18056E0C8 (-GetStartMenuShortcutName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEB.c)
 *     ?Make@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@SAJAEBU?$DefaultHash@PEAUHSTRING__@@@2345@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@2345@PEAPEAV12345@@Z @ 0x18056F1C0 (-Make@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundat.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18056F740 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IMap@PEA.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18057088C (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG_N@Z @ 0x180571EBC (-TryGetCertSubjectName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppMetadata(
        __int64 a1,
        HSTRING a2,
        __int64 *a3)
{
  PCWSTR StringRawBuffer; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // r8
  unsigned int v11; // r8d
  __int64 v12; // r14
  void (__fastcall *v13)(__int64, PVOID, PVOID, _BYTE *); // rdi
  const WCHAR *v14; // rax
  PVOID Reserved1; // rbx
  unsigned int v16; // r8d
  HSTRING_HEADER *v17; // rax
  const wchar_t **v18; // rax
  size_t v19; // r8
  char v20; // si
  _QWORD *v21; // r8
  unsigned int v22; // r8d
  void (__fastcall *v23)(__int64, PVOID, PVOID, _BYTE *); // rdi
  const WCHAR *v24; // rax
  PVOID v25; // rbx
  unsigned int v26; // r8d
  HSTRING_HEADER *v27; // rax
  _QWORD *v28; // rdx
  unsigned int v29; // r8d
  void (__fastcall *v30)(__int64, PVOID, PVOID, _BYTE *); // rdi
  const WCHAR *v31; // rax
  PVOID v32; // rbx
  unsigned int v33; // r8d
  HSTRING_HEADER *v34; // rax
  unsigned int v35; // r8d
  void (__fastcall *v36)(__int64, PVOID, PVOID, _BYTE *); // rdi
  const WCHAR *v37; // rax
  PVOID v38; // rbx
  unsigned int v39; // r8d
  HSTRING_HEADER *v40; // rax
  int v42; // [rsp+20h] [rbp-128h]
  _BYTE v43[8]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v44; // [rsp+38h] [rbp-110h] BYREF
  const WCHAR *v45[2]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v46; // [rsp+50h] [rbp-F8h] BYREF
  HSTRING_HEADER v47; // [rsp+58h] [rbp-F0h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp-D8h]
  _QWORD v49[3]; // [rsp+78h] [rbp-D0h] BYREF
  unsigned __int64 v50; // [rsp+90h] [rbp-B8h]
  _QWORD v51[3]; // [rsp+98h] [rbp-B0h] BYREF
  unsigned __int64 v52; // [rsp+B0h] [rbp-98h]
  HSTRING_HEADER v53; // [rsp+B8h] [rbp-90h] BYREF
  unsigned __int64 v54; // [rsp+D0h] [rbp-78h]
  HSTRING_HEADER v55; // [rsp+D8h] [rbp-70h] BYREF
  HSTRING_HEADER v56; // [rsp+F8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v51, StringRawBuffer);
  v46 = 0LL;
  v8 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Make(
         v7,
         v6,
         &v46);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB9,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)v8,
      v42);
  v44 = 0LL;
  v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Microsoft::WRL::FtmBase>::QueryInterface(
         v46,
         &GUID_f6d1f700_49c2_52ae_8154_826f9908773c,
         &v44);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBE,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)v9,
      v42);
  v43[0] = 0;
  v10 = v51;
  if ( v52 > 7 )
    v10 = (_QWORD *)v51[0];
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD *))(**(_QWORD **)(a1 + 136) + 96LL))(*(_QWORD *)(a1 + 136), v49, v10);
  v12 = v44;
  v13 = *(void (__fastcall **)(__int64, PVOID, PVOID, _BYTE *))(*(_QWORD *)v44 + 80LL);
  v14 = (const WCHAR *)v49;
  if ( v50 > 7 )
    v14 = (const WCHAR *)v49[0];
  v45[0] = v14;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v53, v45, v11)[1].Reserved.Reserved1;
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v47, (const WCHAR **)off_1807604B8, v16);
  v13(v12, v17[1].Reserved.Reserved1, Reserved1, v43);
  std::_WChar_traits<wchar_t>::length((__int64)L"win32:javaw.exe_");
  v18 = (const wchar_t **)std::wstring::operator std::basic_string_view<unsigned short>(v51, v45);
  if ( (unsigned __int64)v18[1] < v19 || std::_WChar_traits<unsigned short>::compare(*v18, L"win32:javaw.exe_", v19) )
  {
    v20 = 0;
  }
  else
  {
    v20 = 1;
    v21 = v51;
    if ( v52 > 7 )
      v21 = (_QWORD *)v51[0];
    (*(void (__fastcall **)(_QWORD, HSTRING_HEADER *, _QWORD *))(**(_QWORD **)(a1 + 136) + 104LL))(
      *(_QWORD *)(a1 + 136),
      &v47,
      v21);
    v23 = *(void (__fastcall **)(__int64, PVOID, PVOID, _BYTE *))(*(_QWORD *)v12 + 80LL);
    v24 = (const WCHAR *)&v47;
    if ( v48 > 7 )
      v24 = (const WCHAR *)v47.Reserved.Reserved1;
    v45[0] = v24;
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v53, v45, v22)[1].Reserved.Reserved1;
    v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)off_1807604B0, v26);
    v23(v12, v27[1].Reserved.Reserved1, v25, v43);
    std::wstring::_Tidy_deallocate(&v47);
  }
  if ( v49[2] && !v20 )
  {
    v28 = v49;
    if ( v50 > 7 )
      v28 = (_QWORD *)v49[0];
    TryGetCertSubjectName(&v53, v28, 0LL);
    v30 = *(void (__fastcall **)(__int64, PVOID, PVOID, _BYTE *))(*(_QWORD *)v12 + 80LL);
    v31 = (const WCHAR *)&v53;
    if ( v54 > 7 )
      v31 = (const WCHAR *)v53.Reserved.Reserved1;
    v45[0] = v31;
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, v45, v29)[1].Reserved.Reserved1;
    v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, (const WCHAR **)off_1807604C8, v33);
    v30(v12, v34[1].Reserved.Reserved1, v32, v43);
    GetStartMenuShortcutName(&v47, v49);
    v36 = *(void (__fastcall **)(__int64, PVOID, PVOID, _BYTE *))(*(_QWORD *)v12 + 80LL);
    v37 = (const WCHAR *)&v47;
    if ( v48 > 7 )
      v37 = (const WCHAR *)v47.Reserved.Reserved1;
    v45[0] = v37;
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, v45, v35)[1].Reserved.Reserved1;
    v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)off_1807604C0, v39);
    v36(v12, v40[1].Reserved.Reserved1, v38, v43);
    std::wstring::_Tidy_deallocate(&v47);
    std::wstring::_Tidy_deallocate(&v53);
  }
  v44 = 0LL;
  *a3 = v12;
  std::wstring::_Tidy_deallocate(v49);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
  wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>,wil::err_returncode_policy>(&v46);
  std::wstring::_Tidy_deallocate(v51);
  return 0LL;
}
