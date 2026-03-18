/*
 * XREFs of NtUserSetThreadState @ 0x1401FC530
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetThreadState(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // rbx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    UserSetLastError(-1073741811);
    v9 = 0LL;
  }
  else
  {
    v7 = *((_QWORD *)PtiCurrent(v5, v4) + 59);
    v8 = a1 ^ *(_DWORD *)(v7 + 412);
    v9 = 1LL;
    *(_DWORD *)(v7 + 412) ^= a2 & v8;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v9;
}
