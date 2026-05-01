/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIDashboardActivator@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805AED10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::IDashboardActivator,void>::GetRuntimeClassName(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 16LL;
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>::NonDelegatingGetRuntimeClassName(v1);
}
