/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180595FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::impl::INonDelegatingInspectable,void>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  v3 = *(_QWORD *)(v2 + 24);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 32LL))(*(_QWORD *)(v2 + 24));
  else
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::NonDelegatingGetRuntimeClassName(
             v2,
             a2);
}
