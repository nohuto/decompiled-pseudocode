/*
 * XREFs of _CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1_::_1_::dtor$3 @ 0x180702E15
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ @ 0x180622DB4 (--1-$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::MonitorForCopilotExtendedSignals__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 128) + 48LL;
  std::lock_guard<std::shared_mutex>::~lock_guard<std::shared_mutex>(*(_Smtx_t ***)(a2 + 64));
}
