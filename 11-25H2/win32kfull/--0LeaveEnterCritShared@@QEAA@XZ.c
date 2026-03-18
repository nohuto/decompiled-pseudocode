/*
 * XREFs of ??0LeaveEnterCritShared@@QEAA@XZ @ 0x1402927A0
 * Callers:
 *     NtUserQueryWindow @ 0x14024BE50 (NtUserQueryWindow.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402AECDC (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x1402DB688 (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

LeaveEnterCritShared *__fastcall LeaveEnterCritShared::LeaveEnterCritShared(LeaveEnterCritShared *this, __int64 a2)
{
  __int64 v3; // rcx

  *(_DWORD *)this = *((_BYTE *)PtiCurrent((__int64)this, a2) + 1708) != 1;
  UserSessionSwitchLeaveCrit(v3);
  return this;
}
