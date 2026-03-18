/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x14029B9A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsMiPEnabledForThread @ 0x14015DEF8 (IsMiPEnabledForThread.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  _DWORD *v5; // rax

  EnterCrit(0LL, 0LL);
  v2 = PtiCurrent(v1, v0);
  v4 = 0LL;
  if ( IsMiPEnabledForThread((__int64)v2) && (v5 = *(_DWORD **)(v3 + 1512)) != 0LL )
  {
    *v5 |= 2u;
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
