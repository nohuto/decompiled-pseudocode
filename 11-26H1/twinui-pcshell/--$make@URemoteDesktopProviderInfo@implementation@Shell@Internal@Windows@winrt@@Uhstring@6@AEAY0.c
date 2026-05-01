/*
 * XREFs of ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAY00$$CBG@winrt@@YA?A_P$$QEAUhstring@0@AEAY00$$CBG@Z @ 0x180656F5C
 * Callers:
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659884 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@0@Z @ 0x18063E488 (--0-$heap_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@im.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::hstring,unsigned short const (&)[1]>(
        unsigned __int64 *a1,
        const struct winrt::hstring *a2,
        volatile signed __int32 *a3)
{
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *v5; // rbx
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *v7; // [rsp+40h] [rbp+8h]
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = (winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *)operator new(0x28uLL);
  winrt::hstring::hstring((winrt::hstring *)&v8, &pvData);
  v5 = winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>(
         v7,
         a2,
         (const struct winrt::hstring *)&v8);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
  *a1 = ((unsigned __int64)v5 + 16) & -(__int64)(v5 != 0LL);
  return a1;
}
