/*
 * XREFs of ?GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA?AUPropertyDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UPropertySet@Collections@Foundation@Windows@winrt@@@Z @ 0x18062641C
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801BCD78 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x180214ABC (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?HasKey@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1803614D0 (-HasKey@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windo.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180361694 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windo.c)
 *     ??$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA?AUhstring@0@AEBUIInspectable@Foundation@Windows@0@AEBU1param@0@@Z @ 0x1804AB1C8 (--$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA-AUhstring@0@AEBUIInspectable@Foundation@Windows.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CopilotHotkeyManager::GetTargetAppExtensionHelper(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a4)
{
  void (__fastcall ***v7)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rcx
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // rdi
  winrt *v9; // rax
  winrt::hstring *v10; // rax
  const unsigned __int16 *v11; // rax
  wchar_t *v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  winrt *v15; // rax
  winrt::hstring *v16; // rax
  unsigned __int16 *v17; // rax
  __int64 (__fastcall ***v19)(_QWORD, void *, __int64 *); // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  volatile signed __int32 *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v23[5]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v25[5]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v26[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-28h]
  wchar_t String[16]; // [rsp+E0h] [rbp-20h] BYREF

  v21 = (volatile signed __int32 *)a2;
  v25[4] = a3;
  v23[4] = a4;
  v26[0] = 0LL;
  v26[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v26[0]) = 0;
  v27 = 0LL;
  winrt::param::hstring::hstring((__int64)String, a3);
  if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::HasKey(
         (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a4,
         String) )
  {
    winrt::param::hstring::hstring((__int64)v25, a3);
    v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::Lookup((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a4, (winrt *)v22, v25);
    v19 = 0LL;
    if ( v7 )
    {
      (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v19);
      v8 = v19;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v22[0] )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v22);
    if ( v8 )
    {
      winrt::param::hstring::hstring((winrt::param::hstring *)String, L"@MessageWParam");
      if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::HasKey(
             &v19,
             String) )
      {
        LOBYTE(v27) = 1;
        winrt::param::hstring::hstring((winrt::param::hstring *)v23, L"0");
        winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"@MessageWParam");
        v9 = winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::Lookup(
               &v19,
               (winrt *)&v20,
               v24);
        v10 = winrt::unbox_value_or<winrt::hstring,0>(
                (winrt::hstring *)&v21,
                (void (__fastcall ****)(_QWORD, void *, __int64 *))v9,
                (const struct winrt::hstring *)v23);
        v11 = winrt::hstring::c_str(v10);
        std::wstring::wstring((__int64)String, (__int64)v11);
        std::stoi(String, v12, v13);
        HIDWORD(v27) = v14;
        std::wstring::_Tidy_deallocate(String);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
        if ( v20 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
      }
      winrt::param::hstring::hstring((winrt::param::hstring *)v23, L"#text");
      if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::HasKey(
             &v19,
             v23) )
      {
        winrt::param::hstring::hstring((winrt::param::hstring *)v24, &pvData);
        winrt::param::hstring::hstring((winrt::param::hstring *)v23, L"#text");
        v15 = winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::Lookup(
                &v19,
                (winrt *)&v20,
                v23);
        v16 = winrt::unbox_value_or<winrt::hstring,0>(
                (winrt::hstring *)&v21,
                (void (__fastcall ****)(_QWORD, void *, __int64 *))v15,
                (const struct winrt::hstring *)v24);
        v17 = (unsigned __int16 *)winrt::hstring::c_str(v16);
        std::wstring::operator=((char *)v26, v17);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
        if ( v20 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
      }
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  }
  std::wstring::wstring(a2, (__int64)v26);
  *(_BYTE *)(a2 + 32) = v27;
  *(_DWORD *)(a2 + 36) = HIDWORD(v27);
  std::wstring::_Tidy_deallocate(v26);
  std::wstring::_Tidy_deallocate(a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a4);
  return a2;
}
