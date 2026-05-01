/*
 * XREFs of ??$unbox_value_type@GAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAGAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1806482A8
 * Callers:
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18064449C (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180450014 (--0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@G@Foundation@Windows@winrt@@G@impl@winrt@@QEBA@XZ @ 0x180652920 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@G@Foundation@Windows@winrt@@G@impl@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::unbox_value_type<unsigned short,winrt::Windows::Foundation::IInspectable const &>(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  int v2; // eax
  unsigned __int16 v3; // bx
  const struct winrt::impl::slim_source_location *v5; // rax
  int pExceptionObject; // [rsp+20h] [rbp-30h] BYREF
  __int128 v7; // [rsp+28h] [rbp-28h]
  _BYTE v8[24]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+18h] BYREF

  v1 = *a1;
  if ( !v1 )
  {
    v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v8);
    winrt::hresult_no_interface::hresult_no_interface((winrt::hresult_no_interface *)&pExceptionObject, v5);
    throw (winrt::hresult_no_interface *)&pExceptionObject;
  }
  v10 = 0LL;
  pExceptionObject = 0;
  v7 = 0LL;
  v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<unsigned short>>, &v10);
  winrt::check_hresult((int *)&v9, v2, (__int64)&pExceptionObject);
  v9 = v10;
  v3 = winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<unsigned short>,unsigned short>::Value(&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return v3;
}
