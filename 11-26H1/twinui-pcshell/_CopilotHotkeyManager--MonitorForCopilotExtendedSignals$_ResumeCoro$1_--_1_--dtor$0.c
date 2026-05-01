/*
 * XREFs of _CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1_::_1_::dtor$0 @ 0x180702DE6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180622F30 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 */

__int64 __fastcall CopilotHotkeyManager::MonitorForCopilotExtendedSignals__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 128) + 16LL;
  return tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(*(void ***)(a2 + 56));
}
