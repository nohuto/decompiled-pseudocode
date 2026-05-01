/*
 * XREFs of ??1?$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ @ 0x180622DB4
 * Callers:
 *     _CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1807026FF (_CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1_::_1_::dtor$3 @ 0x180702E15 (_CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::shared_mutex>::~lock_guard<std::shared_mutex>(_Smtx_t **a1)
{
  Smtx_unlock_exclusive(*a1);
}
