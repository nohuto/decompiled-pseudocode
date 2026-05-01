/*
 * XREFs of ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180333184
 * Callers:
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18032F1C0 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows.c)
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_N@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18032F1E0 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Found_ea_18032F1E0.c)
 * Callees:
 *     ?AddRef@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ @ 0x180294780 (-AddRef@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::query_interface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncAction> && a2[1] == 0x7BADDFE5269D5B86LL )
  {
    v5 = a1 + 16;
LABEL_4:
    v6 = v5 & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64);
    goto LABEL_9;
  }
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo> && a2[1] == 0x46000000000000C0LL )
  {
    v5 = a1 + 24;
    goto LABEL_4;
  }
  v6 = 0LL;
LABEL_9:
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::query_interface_common(
             a1,
             a2);
  winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef(a1);
  return 0LL;
}
