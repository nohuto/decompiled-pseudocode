/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF84
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1805FE610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     ?ClearWalkieTalkieProperties@CopilotHotkeyManager@@AEAAXAEAUTargetAppExtensionDetails@@@Z @ 0x1805FE94C (-ClearWalkieTalkieProperties@CopilotHotkeyManager@@AEAAXAEAUTargetAppExtensionDetails@@@Z.c)
 *     ?FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z @ 0x1805FED74 (-FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180600690 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x18060E000 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18060E34C (-OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x18060E460 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 *     ?RestoreForeground@CopilotHotkeyManager@@AEAAXXZ @ 0x18060EE20 (-RestoreForeground@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x18060F350 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x18060F41C (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     ?ToggleAppViewState@CopilotHotkeyManager@@AEAA_NPEAUHWND__@@@Z @ 0x18060FAEC (-ToggleAppViewState@CopilotHotkeyManager@@AEAA_NPEAUHWND__@@@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180610010 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806106A8 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180611A60 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180612190 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     _CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806DA238 (_CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _CopilotHotkeyManager::subscribe_to_services_::_1_::dtor$3 @ 0x1806DA503 (_CopilotHotkeyManager--subscribe_to_services_--_1_--dtor$3.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028B08C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18061162C (-reset@-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@detail.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>(a1);
}
