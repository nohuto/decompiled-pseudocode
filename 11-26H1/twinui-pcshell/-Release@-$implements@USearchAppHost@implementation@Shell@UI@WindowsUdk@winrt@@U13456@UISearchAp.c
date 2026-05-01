/*
 * XREFs of ?Release@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@winrt@@QEAAKXZ @ 0x1802C7698
 * Callers:
 *     ?Release@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@X@impl@winrt@@UEAAIXZ @ 0x1801E3CC0 (-Release@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost.c)
 *     ?Release@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2@3456@X@impl@winrt@@UEAAIXZ @ 0x180214D10 (-Release@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_180214D10.c)
 *     ?Release@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@X@impl@winrt@@UEAAIXZ @ 0x1802C7680 (-Release@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_1802C7680.c)
 *     ?Release@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@X@impl@winrt@@UEAAIXZ @ 0x1803B7280 (-Release@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_1803B7280.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x1803334F0 (-subtract_final_reference@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Found.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::Release(
        _QWORD *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::subtract_final_reference();
  if ( !v2 )
  {
    a1[1] = 1LL;
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  return v2;
}
