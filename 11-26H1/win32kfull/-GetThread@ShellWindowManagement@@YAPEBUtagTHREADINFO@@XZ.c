/*
 * XREFs of ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x14025F34C
 * Callers:
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14027952C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     NtUserEnableWindowShellWindowManagementBehavior @ 0x1402B1AF0 (NtUserEnableWindowShellWindowManagementBehavior.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402C0AF0 (NtUserUpdateWindowTrackingInfo.c)
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1402DB2F4 (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

const struct tagTHREADINFO *__fastcall ShellWindowManagement::GetThread(ShellWindowManagement *this)
{
  __int64 v1; // rcx
  const struct tagTHREADINFO *result; // rax

  v1 = *((_QWORD *)PtiCurrent((__int64)this) + 61);
  result = 0LL;
  if ( *(_QWORD *)(v1 + 328) )
    return *(const struct tagTHREADINFO **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v1) + 61) + 328LL) + 16LL);
  return result;
}
