/*
 * XREFs of _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1805E56A4
 * Callers:
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x1805E580C (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800F5760 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C05B0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?reset@?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802E7DA4 (-reset@-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@det.c)
 *     _anonymous_namespace_::TryGetFilePublisher @ 0x1805EB00C (_anonymous_namespace_--TryGetFilePublisher.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1805EB748 (_anonymous_namespace_--TryGetProcessPublisher.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall anonymous_namespace_::DoRequestorAndForegroundPublisherMatch(_QWORD *a1)
{
  HWND ForegroundWindow; // rax
  HANDLE v3; // rax
  const wchar_t *v4; // r8
  const wchar_t *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v8; // rcx
  void *v9[2]; // [rsp+20h] [rbp-29h] BYREF
  __int128 v10; // [rsp+30h] [rbp-19h] BYREF
  DWORD dwProcessId[4]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v12; // [rsp+50h] [rbp+7h] BYREF
  __int64 v13; // [rsp+60h] [rbp+17h]
  unsigned __int64 v14; // [rsp+68h] [rbp+1Fh]
  _QWORD v15[2]; // [rsp+70h] [rbp+27h] BYREF
  size_t v16; // [rsp+80h] [rbp+37h]
  unsigned __int64 v17; // [rsp+88h] [rbp+3Fh]

  v9[1] = a1;
  dwProcessId[0] = 0;
  ForegroundWindow = GetForegroundWindow();
  GetWindowThreadProcessId(ForegroundWindow, dwProcessId);
  v9[0] = 0LL;
  v3 = OpenProcess(0x1000u, 0, dwProcessId[0]);
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v9,
    v3);
  if ( v9[0] )
  {
    v12 = *PinRequestContext::RequestorImagePath(*a1, &v10);
    anonymous_namespace_::TryGetFilePublisher(v15, &v12);
    anonymous_namespace_::TryGetProcessPublisher(&v12);
    if ( v16 )
    {
      v4 = (const wchar_t *)&v12;
      if ( v14 > 7 )
        v4 = (const wchar_t *)v12;
      v5 = (const wchar_t *)v15;
      if ( v17 > 7 )
        v5 = (const wchar_t *)v15[0];
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(v5, v16, v4, v13) )
      {
        std::wstring::_Tidy_deallocate(&v12);
        std::wstring::_Tidy_deallocate(v15);
        wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v9);
        v6 = (std::_Ref_count_base *)a1[1];
        if ( v6 )
          std::_Ref_count_base::_Decref(v6);
        return 1;
      }
    }
    std::wstring::_Tidy_deallocate(&v12);
    std::wstring::_Tidy_deallocate(v15);
  }
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v9);
  v8 = (std::_Ref_count_base *)a1[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return 0;
}
