/*
 * XREFs of ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEAY00$$CBG@winrt@@YA?A_PAEBUhstring@0@AEAY00$$CBG@Z @ 0x18063CC7C
 * Callers:
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x18063F090 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@0@Z @ 0x18063E488 (--0-$heap_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@im.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::hstring const &,unsigned short const (&)[1]>(
        __int64 *a1,
        __int64 a2,
        volatile signed __int32 *a3)
{
  __int64 v4; // rbx
  void *v6; // [rsp+48h] [rbp+10h]
  volatile signed __int32 *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6 = operator new(0x28uLL);
  winrt::hstring::hstring((winrt::hstring *)&v7, &pvData);
  v4 = winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>(
         v6,
         &c_bootSystemId,
         &v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  *a1 = (v4 + 16) & -(__int64)(v4 != 0);
  return a1;
}
