/*
 * XREFs of ??1CopilotHotkeyManager@@UEAA@XZ @ 0x180623008
 * Callers:
 *     ??1?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ @ 0x180622E6C (--1-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ.c)
 *     ??_ECopilotHotkeyManager@@UEAAPEAXI@Z @ 0x18062355C (--_ECopilotHotkeyManager@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_CopilotHotkeyManager___::heap_implements_wil::details::module_count_wrapper_CopilotHotkeyManager____::_1_::dtor$1 @ 0x1807025B6 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_CopilotHotkeyManager___--heap_i.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180622D4C (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@ti.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x1806230B4 (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::~CopilotHotkeyManager(
        CopilotHotkeyManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v3; // rcx
  wil::details *v4; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 79);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, a2);
  v4 = (wil::details *)*((_QWORD *)this + 77);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, a2);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 74);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 73);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>((void **)this + 71);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 65);
  TargetAppExtensionDetails::~TargetAppExtensionDetails((CopilotHotkeyManager *)((char *)this + 208));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CopilotHotkeyManager *)((char *)this + 144));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 16);
  winrt::immersive_shell_component::~immersive_shell_component((CopilotHotkeyManager *)((char *)this + 16));
}
