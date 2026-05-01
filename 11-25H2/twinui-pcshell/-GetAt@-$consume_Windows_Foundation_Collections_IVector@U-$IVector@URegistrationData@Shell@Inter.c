/*
 * XREFs of ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x18063B34C
 * Callers:
 *     ?GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x18063B3D8 (-GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA-AUhst.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x18063B49C (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800A9A80 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
        __int64 a1,
        winrt *a2,
        unsigned int a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, void **); // rbx
  void **v7; // rax
  int v8; // eax
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  winrt *v13; // [rsp+68h] [rbp+10h]

  v13 = a2;
  v12 = a1;
  *(_QWORD *)a2 = 0LL;
  v5 = winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData;
  v10 = 0;
  v11 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                          + 48LL);
  v7 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v8 = v6(v5, a3, v7);
  winrt::check_hresult((int *)&v12, v8, (__int64)&v10);
  return a2;
}
