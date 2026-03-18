/*
 * XREFs of NtUserDisableProcessWindowFiltering @ 0x1401FFDC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 */

__int64 NtUserDisableProcessWindowFiltering()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v2 = *((_QWORD *)PtiCurrent(v1, v0) + 58);
  *(_QWORD *)(v2 + 808) |= 0x800uLL;
  v5 = *((_QWORD *)PtiCurrent(v2, v3) + 65);
  if ( v5 )
  {
    v5 = *((_QWORD *)PtiCurrent(v5, v4) + 65);
    *(_QWORD *)(v5 + 224) |= 4uLL;
  }
  UserSessionSwitchLeaveCrit(v5);
  return 1LL;
}
