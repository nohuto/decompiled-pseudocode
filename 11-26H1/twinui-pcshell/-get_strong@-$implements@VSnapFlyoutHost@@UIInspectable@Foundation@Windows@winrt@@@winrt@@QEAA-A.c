/*
 * XREFs of ?get_strong@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1801CC944
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802699D0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18026A570 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x18026A7C0 (SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1.c)
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B5060 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@V-$merged_data@U_tip_SnapFlyoutSho.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C46F8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 */

__int64 *__fastcall winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_strong(
        __int64 a1,
        __int64 *a2)
{
  *a2 = 0LL;
  if ( a1 )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(a2);
    *a2 = a1;
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1);
  }
  return a2;
}
