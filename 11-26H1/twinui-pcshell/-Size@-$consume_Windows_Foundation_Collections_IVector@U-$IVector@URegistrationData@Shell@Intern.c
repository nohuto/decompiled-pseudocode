/*
 * XREFs of ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180660EC4
 * Callers:
 *     ?GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180660E58 (-GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA-AUhst.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180660F20 (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::Size(
        __int64 a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = HIDWORD(a1);
  v5 = 0;
  v3 = 0;
  v4 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                          + 56LL))(
         winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
         &v5);
  winrt::check_hresult(&v7, v1, (__int64)&v3);
  return v5;
}
