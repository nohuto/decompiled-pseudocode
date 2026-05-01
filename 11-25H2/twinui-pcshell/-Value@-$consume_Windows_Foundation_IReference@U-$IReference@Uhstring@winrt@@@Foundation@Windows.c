/*
 * XREFs of ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA@XZ @ 0x180348A74
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180348DF0 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     ?ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18034DD40 (-ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@W.c)
 *     ??$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA?AUhstring@0@AEBUIInspectable@Foundation@Windows@0@AEBU1param@0@@Z @ 0x18049A13C (--$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA-AUhstring@0@AEBUIInspectable@Foundation@Windows.c)
 *     ??$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA?AUhstring@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1806228BC (--$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA-AUhstr.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::hstring>::Value(
        __int64 *a1,
        volatile signed __int32 **a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, volatile signed __int32 **); // rbx
  int v5; // eax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 **v10; // [rsp+58h] [rbp+10h]

  v10 = a2;
  *a2 = 0LL;
  v3 = *a1;
  v7 = 0;
  v8 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v3 + 48LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  v5 = v4(v3, a2);
  winrt::check_hresult(&v9, v5, (__int64)&v7);
  return a2;
}
