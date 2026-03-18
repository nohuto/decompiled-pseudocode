/*
 * XREFs of ??0LeaveEnterCritShared@@QEAA@XZ @ 0x1402953CC
 * Callers:
 *     NtUserQueryWindow @ 0x14019A8B0 (NtUserQueryWindow.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402CAC68 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

LeaveEnterCritShared *__fastcall LeaveEnterCritShared::LeaveEnterCritShared(LeaveEnterCritShared *this)
{
  __int64 v2; // rcx

  *(_DWORD *)this = *((_BYTE *)PtiCurrent((__int64)this) + 1708) != 1;
  UserSessionSwitchLeaveCrit(v2);
  return this;
}
