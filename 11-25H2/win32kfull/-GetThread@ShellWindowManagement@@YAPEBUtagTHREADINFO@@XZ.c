/*
 * XREFs of ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x140225D20
 * Callers:
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14028B60C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     NtUserEnableWindowShellWindowManagementBehavior @ 0x1402961A0 (NtUserEnableWindowShellWindowManagementBehavior.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402A3250 (NtUserUpdateWindowTrackingInfo.c)
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1402C1A38 (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

const struct tagTHREADINFO *__fastcall ShellWindowManagement::GetThread(ShellWindowManagement *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  const struct tagTHREADINFO *result; // rax

  v3 = *((_QWORD *)PtiCurrent((__int64)this, a2) + 62);
  result = 0LL;
  if ( *(_QWORD *)(v3 + 328) )
    return *(const struct tagTHREADINFO **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v3, v2) + 62) + 328LL) + 16LL);
  return result;
}
