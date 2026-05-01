/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805FDD94
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805FD504 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvo.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF84 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FE054 (--1-$test_watcher@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FE0A4 (--1-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ??1CopilotHotkeyManager@@UEAA@XZ @ 0x1805FE0C8 (--1CopilotHotkeyManager@@UEAA@XZ.c)
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1805FE610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x18060E000 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18060E34C (-OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x18060E460 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x18060F350 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180610D7C (-ensure_data@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@d.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180611A60 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x18060E6C8 (-Release@-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@AEA.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>::Release(v1);
  return result;
}
