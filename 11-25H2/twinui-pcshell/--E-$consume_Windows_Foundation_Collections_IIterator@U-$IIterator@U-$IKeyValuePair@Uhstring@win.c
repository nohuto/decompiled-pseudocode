/*
 * XREFs of ??E?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@2345@@impl@winrt@@QEAA@XZ @ 0x180341D64
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180348DF0 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     ?ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18034DD40 (-ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@W.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>::operator++(
        __int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  _BYTE v8[8]; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0;
  v8[0] = 0;
  v2 = *a1;
  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v2 + 64LL))(v2, v8);
  winrt::check_hresult((int *)&v5, v3, (__int64)&v6);
  if ( !v8[0] )
  {
    v5 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1, &v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  }
  return a1;
}
