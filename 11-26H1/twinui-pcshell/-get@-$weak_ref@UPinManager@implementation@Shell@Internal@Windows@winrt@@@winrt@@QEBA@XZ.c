/*
 * XREFs of ?get@?$weak_ref@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1805ECD9C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805E8F60 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::PinManager>::get(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64, __int64 *, void **); // rbx
  void **v5; // rax
  struct IUnknownVtbl *v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v8 = 0LL;
    v4 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v8, a2);
    v4(v2, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::IPinManager>, v5);
    v6 = 0LL;
    if ( v8 )
    {
      v6 = (struct IUnknownVtbl *)(v8 - 8);
      v8 = 0LL;
    }
    a2->lpVtbl = v6;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  return a2;
}
