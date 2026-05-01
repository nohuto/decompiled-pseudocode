/*
 * XREFs of ?GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180549500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x1800456B0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BD538 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@V?$AgileHashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@$0A@@Internal@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180547F3C (--1-$com_ptr_t@V-$AgileHashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Coll.c)
 *     ?GetStartMenuShortcutName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18054A014 (-GetStartMenuShortcutName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEB.c)
 *     ?Make@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@SAJAEBU?$DefaultHash@PEAUHSTRING__@@@2345@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@2345@PEAPEAV12345@@Z @ 0x18054B0D0 (-Make@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundat.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18054B620 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IMap@PEA.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18054C6EC (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG_N@Z @ 0x18054DCF4 (-TryGetCertSubjectName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  void **v10; // r8
  unsigned int v11; // r8d
  __int64 v12; // r14
  void (__fastcall *v13)(__int64, PVOID, PVOID, _BYTE *); // rdi
  const WCHAR *v14; // rax
  PVOID Reserved1; // rbx
  unsigned int v16; // r8d
  HSTRING_HEADER *v17; // rax
  __int64 *v18; // rax
  bool v19; // si
  void **v20; // r8
  unsigned int v21; // r8d
  void (__fastcall *v22)(__int64, PVOID, PVOID, _BYTE *); // rdi
  const WCHAR *v23; // rax
  PVOID v24; // rbx
  unsigned int v25; // r8d
  HSTRING_HEADER *v26; // rax
  void **v27; // rdx
  unsigned int v28; // r8d
  void (__fastcall *v29)(__int64, PVOID, PVOID, _BYTE *); // rdi
  const WCHAR *v30; // rax
  PVOID v31; // rbx
  unsigned int v32; // r8d
  HSTRING_HEADER *v33; // rax
  unsigned int v34; // r8d
  void (__fastcall *v35)(__int64, PVOID, PVOID, _BYTE *); // rdi
  const WCHAR *v36; // rax
  PVOID v37; // rbx
  unsigned int v38; // r8d
  HSTRING_HEADER *v39; // rax
  int v41; // [rsp+20h] [rbp-128h]
  _BYTE v42[8]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v43; // [rsp+38h] [rbp-110h] BYREF
  const WCHAR *v44[2]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v45; // [rsp+50h] [rbp-F8h] BYREF
  HSTRING_HEADER v46; // [rsp+58h] [rbp-F0h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-D8h]
  void *v48[3]; // [rsp+78h] [rbp-D0h] BYREF
  unsigned __int64 v49; // [rsp+90h] [rbp-B8h]
  void *v50[3]; // [rsp+98h] [rbp-B0h] BYREF
  unsigned __int64 v51; // [rsp+B0h] [rbp-98h]
  HSTRING_HEADER v52; // [rsp+B8h] [rbp-90h] BYREF
  unsigned __int64 v53; // [rsp+D0h] [rbp-78h]
  HSTRING_HEADER v54; // [rsp+D8h] [rbp-70h] BYREF
  HSTRING_HEADER v55; // [rsp+F8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v50, StringRawBuffer);
  v45 = 0LL;
  v8 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Make(
         v7,
         v6,
         &v45);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB9,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)v8,
      v41);
  v43 = 0LL;
  v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Microsoft::WRL::FtmBase>::QueryInterface(
         v45,
         &GUID_f6d1f700_49c2_52ae_8154_826f9908773c,
         &v43);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBE,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)v9,
      v41);
  v42[0] = 0;
  v10 = v50;
  if ( v51 > 7 )
    v10 = (void **)v50[0];
  (*(void (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(a1 + 136) + 96LL))(*(_QWORD *)(a1 + 136), v48, v10);
  v12 = v43;
  v13 = *(void (__fastcall **)(__int64, PVOID, PVOID, _BYTE *))(*(_QWORD *)v43 + 80LL);
  v14 = (const WCHAR *)v48;
  if ( v49 > 7 )
    v14 = (const WCHAR *)v48[0];
  v44[0] = v14;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v52, v44, v11)[1].Reserved.Reserved1;
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, (const WCHAR **)off_180735A68, v16);
  v13(v12, v17[1].Reserved.Reserved1, Reserved1, v42);
  v18 = std::wstring::operator std::basic_string_view<unsigned short>(v50, v44);
  v19 = (unsigned __int64)v18[1] >= 0x10
     && !(unsigned int)std::_WChar_traits<unsigned short>::compare(*v18, L"win32:javaw.exe_", 16LL);
  if ( v19 )
  {
    v20 = v50;
    if ( v51 > 7 )
      v20 = (void **)v50[0];
    (*(void (__fastcall **)(_QWORD, HSTRING_HEADER *, void **))(**(_QWORD **)(a1 + 136) + 104LL))(
      *(_QWORD *)(a1 + 136),
      &v46,
      v20);
    v22 = *(void (__fastcall **)(__int64, PVOID, PVOID, _BYTE *))(*(_QWORD *)v12 + 80LL);
    v23 = (const WCHAR *)&v46;
    if ( v47 > 7 )
      v23 = (const WCHAR *)v46.Reserved.Reserved1;
    v44[0] = v23;
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v52, v44, v21)[1].Reserved.Reserved1;
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v54, (const WCHAR **)off_180735A60, v25);
    v22(v12, v26[1].Reserved.Reserved1, v24, v42);
    std::wstring::_Tidy_deallocate(&v46.Reserved.Reserved1);
  }
  if ( v48[2] && !v19 )
  {
    v27 = v48;
    if ( v49 > 7 )
      v27 = (void **)v48[0];
    TryGetCertSubjectName(&v52, v27, 0LL);
    v29 = *(void (__fastcall **)(__int64, PVOID, PVOID, _BYTE *))(*(_QWORD *)v12 + 80LL);
    v30 = (const WCHAR *)&v52;
    if ( v53 > 7 )
      v30 = (const WCHAR *)v52.Reserved.Reserved1;
    v44[0] = v30;
    v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v54, v44, v28)[1].Reserved.Reserved1;
    v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)off_180735A58, v32);
    v29(v12, v33[1].Reserved.Reserved1, v31, v42);
    GetStartMenuShortcutName(&v46, v48);
    v35 = *(void (__fastcall **)(__int64, PVOID, PVOID, _BYTE *))(*(_QWORD *)v12 + 80LL);
    v36 = (const WCHAR *)&v46;
    if ( v47 > 7 )
      v36 = (const WCHAR *)v46.Reserved.Reserved1;
    v44[0] = v36;
    v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, v44, v34)[1].Reserved.Reserved1;
    v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v54, (const WCHAR **)off_180735A50, v38);
    v35(v12, v39[1].Reserved.Reserved1, v37, v42);
    std::wstring::_Tidy_deallocate(&v46.Reserved.Reserved1);
    std::wstring::_Tidy_deallocate(&v52.Reserved.Reserved1);
  }
  v43 = 0LL;
  *a3 = v12;
  std::wstring::_Tidy_deallocate(v48);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
  wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>,wil::err_returncode_policy>(&v45);
  std::wstring::_Tidy_deallocate(v50);
  return 0LL;
}
