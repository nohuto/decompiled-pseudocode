/*
 * XREFs of _Smtx_unlock_exclusive @ 0x1802CDC7C
 * Callers:
 *     ??1?$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ @ 0x180622DB4 (--1-$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ.c)
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1806237D0 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633140 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180637E00 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl Smtx_unlock_exclusive(_Smtx_t *a1)
{
  ReleaseSRWLockExclusive((PSRWLOCK)a1);
}
