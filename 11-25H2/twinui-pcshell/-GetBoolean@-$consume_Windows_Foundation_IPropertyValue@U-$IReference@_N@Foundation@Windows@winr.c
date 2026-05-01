/*
 * XREFs of ?GetBoolean@?$consume_Windows_Foundation_IPropertyValue@U?$IReference@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805C1BD0
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805C4640 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IReference<bool>>::GetBoolean(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+38h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v11[8]; // [rsp+50h] [rbp-10h] BYREF

  v11[0] = 0;
  v1 = *a1;
  if ( v1 )
  {
    v10 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Windows::Foundation::IPropertyValue>, &v10);
    v3 = v10;
    v7 = v10;
  }
  else
  {
    v2 = 0;
    v7 = 0LL;
    v3 = 0LL;
  }
  v8 = 0;
  v9 = 0LL;
  winrt::check_hresult(&v6, v2, (__int64)&v8);
  v8 = 0;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 144LL))(v3, v11);
  winrt::check_hresult(&v6, v4, (__int64)&v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  return v11[0];
}
