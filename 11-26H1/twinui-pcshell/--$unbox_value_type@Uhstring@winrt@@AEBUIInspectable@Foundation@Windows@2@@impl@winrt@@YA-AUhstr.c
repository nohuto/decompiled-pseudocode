/*
 * XREFs of ??$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA?AUhstring@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18064834C
 * Callers:
 *     ??$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAUhstring@winrt@@@Z @ 0x18064471C (--$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_stri.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA@XZ @ 0x18034C160 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@Uhstring@winrt@@@Foundation@Windows.c)
 *     ??0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180450014 (--0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall winrt::impl::unbox_value_type<winrt::hstring,winrt::Windows::Foundation::IInspectable const &>(
        volatile signed __int32 **a1,
        __int64 (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  const struct winrt::impl::slim_source_location *v6; // rax
  int pExceptionObject; // [rsp+28h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h]
  _BYTE v9[32]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF

  v3 = *a2;
  if ( !*a2 )
  {
    v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v9);
    winrt::hresult_no_interface::hresult_no_interface((winrt::hresult_no_interface *)&pExceptionObject, v6);
    throw (winrt::hresult_no_interface *)&pExceptionObject;
  }
  v11 = 0LL;
  pExceptionObject = 0;
  v8 = 0LL;
  v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<winrt::hstring>>, &v11);
  winrt::check_hresult((int *)&v10, v4, (__int64)&pExceptionObject);
  v10 = v11;
  winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::hstring>::Value(
    &v10,
    a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a1;
}
