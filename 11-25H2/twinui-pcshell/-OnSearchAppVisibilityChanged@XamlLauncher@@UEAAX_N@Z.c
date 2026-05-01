/*
 * XREFs of ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1802500A0
 * Callers:
 *     ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x180250050 (-OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_5a356e014343250489ea11969104e505___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x18044E9C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18044E9C0.c)
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1801974C0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1801C41D0 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1802508B8 (-ReportVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoord.c)
 */

void __fastcall XamlLauncher::OnSearchAppVisibilityChanged(XamlLauncher *this, char a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 *v6; // rcx
  HMONITOR v7; // rax
  HMONITOR v8; // rdx
  HMONITOR v9; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+28h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v9 = 0LL;
    XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this - 8), &v9);
    v7 = (HMONITOR)*((_QWORD *)this + 50);
    v8 = v9;
    if ( v7 && v9 != v7 )
    {
      v10 = 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (char *)this + 352,
        v7,
        &v10);
      v8 = v9;
    }
    if ( v8 )
    {
      v10 = 0;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (char *)this + 352,
        v8,
        &v10);
      v6 = (__int64 *)((char *)this + 352);
      *((_QWORD *)this + 50) = v9;
      goto LABEL_11;
    }
  }
  else
  {
    v5 = *((_QWORD *)this + 50);
    if ( v5 )
    {
      v10 = 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (char *)this + 352,
        v5,
        &v10);
      v6 = (__int64 *)((char *)this + 352);
LABEL_10:
      v2 = 1;
      goto LABEL_11;
    }
  }
  v6 = (__int64 *)((char *)this + 352);
  if ( !a2 )
    goto LABEL_10;
LABEL_11:
  v10 = v2;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    v6,
    &v10);
}
