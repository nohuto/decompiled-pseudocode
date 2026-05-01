/*
 * XREFs of ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x180244EA0
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x180243FD0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18045B890 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1800505E8 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1801BAEF0 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?SnapControlType@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180239E30 (-SnapControlType@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyout.c)
 *     ?GetVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18045B060 (-GetVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordina.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAA_NXZ @ 0x18045DA04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncher::RepairWNFStalenessIfNecessary(XamlLauncher *this)
{
  __int64 *v2; // rbx
  int v3; // esi
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  HMONITOR v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = (__int64 *)((char *)this + 384);
  v3 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59342962>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59342962>::GetImpl'::`2'::impl) )
  {
    v7 = 0LL;
    v6 = 0LL;
    XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this + 64), &v6);
    LOBYTE(v3) = (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::GetVisibilityForMonitor(
                                 v2,
                                 v6) == 0;
    if ( v3 != (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 104LL))(*((_QWORD *)this + 47)) )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 104LL))(*((_QWORD *)this + 47));
      XamlLauncher::PublishLauncherVisibilityState(this, v4);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  }
  else
  {
    LOBYTE(v3) = (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::SnapControlType(v2) == 0;
    if ( v3 != (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 104LL))(*((_QWORD *)this + 47)) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 104LL))(*((_QWORD *)this + 47));
      XamlLauncher::PublishLauncherVisibilityState(this, v5);
    }
  }
}
