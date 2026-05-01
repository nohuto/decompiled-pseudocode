/*
 * XREFs of ?GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA?AUPropertyDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UPropertySet@Collections@Foundation@Windows@winrt@@@Z @ 0x180600DF4
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180600690 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801C5FB4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x1802236C0 (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?HasKey@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18035AB74 (-HasKey@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windo.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18035AD24 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windo.c)
 *     ??$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA?AUhstring@0@AEBUIInspectable@Foundation@Windows@0@AEBU1param@0@@Z @ 0x18049A13C (--$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA-AUhstring@0@AEBUIInspectable@Foundation@Windows.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__m128i *__fastcall CopilotHotkeyManager::GetTargetAppExtensionHelper(
        __int64 a1,
        __m128i *a2,
        void **a3,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a4)
{
  void (__fastcall ***v7)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rcx
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // rdi
  winrt *v9; // rax
  winrt::hstring *v10; // rax
  unsigned __int16 *v11; // rax
  wchar_t *v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  winrt *v15; // rax
  winrt::hstring *v16; // rax
  unsigned __int16 *v17; // rax
  __int64 (__fastcall ***v19)(_QWORD, void *, __int64 *); // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  __m128i *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v25[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v26[5]; // [rsp+98h] [rbp-68h] BYREF
  __m128i v27; // [rsp+C0h] [rbp-40h] BYREF
  __m128i si128; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-20h]
  wchar_t String[16]; // [rsp+E8h] [rbp-18h] BYREF

  v21 = a2;
  v26[4] = a3;
  v23[2] = (__int64)a4;
  v27 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v27.m128i_i16[0] = 0;
  v29 = 0LL;
  winrt::param::hstring::hstring((__int64)String, a3);
  if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::HasKey(
         (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a4,
         String) )
  {
    winrt::param::hstring::hstring((__int64)v26, a3);
    v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::Lookup((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a4, (winrt *)v23, v26);
    if ( v7 )
    {
      v22 = 0LL;
      (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v22);
      v8 = v22;
      v19 = v22;
    }
    else
    {
      v19 = 0LL;
      v8 = 0LL;
    }
    if ( v23[0] )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v23);
    if ( v8 )
    {
      winrt::param::hstring::hstring((winrt::param::hstring *)String, L"@MessageWParam");
      if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::HasKey(
             &v19,
             String) )
      {
        LOBYTE(v29) = 1;
        winrt::param::hstring::hstring((winrt::param::hstring *)v25, L"0");
        winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"@MessageWParam");
        v9 = winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::Lookup(
               &v19,
               (winrt *)&v20,
               v24);
        v10 = winrt::unbox_value_or<winrt::hstring,0>(
                (winrt::hstring *)&v21,
                (void (__fastcall ****)(_QWORD, void *, __int64 *))v9,
                (const struct winrt::hstring *)v25);
        v11 = (unsigned __int16 *)winrt::hstring::c_str(v10);
        std::wstring::wstring((char **)String, v11);
        std::stoi(String, v12, v13);
        HIDWORD(v29) = v14;
        std::wstring::_Tidy_deallocate((void **)String);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v21);
        if ( v20 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
      }
      winrt::param::hstring::hstring((winrt::param::hstring *)v25, L"#text");
      if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::HasKey(
             &v19,
             v25) )
      {
        winrt::param::hstring::hstring((winrt::param::hstring *)String, &LocaleName);
        winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"#text");
        v15 = winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::Lookup(
                &v19,
                (winrt *)&v20,
                v24);
        v16 = winrt::unbox_value_or<winrt::hstring,0>(
                (winrt::hstring *)&v21,
                (void (__fastcall ****)(_QWORD, void *, __int64 *))v15,
                (const struct winrt::hstring *)String);
        v17 = (unsigned __int16 *)winrt::hstring::c_str(v16);
        std::wstring::operator=((void **)&v27, v17);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v21);
        if ( v20 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
      }
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  }
  *a2 = v27;
  a2[1] = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v27.m128i_i16[0] = 0;
  a2[2].m128i_i8[0] = v29;
  a2[2].m128i_i32[1] = HIDWORD(v29);
  std::wstring::_Tidy_deallocate((void **)&v27);
  std::wstring::_Tidy_deallocate(a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a4);
  return a2;
}
