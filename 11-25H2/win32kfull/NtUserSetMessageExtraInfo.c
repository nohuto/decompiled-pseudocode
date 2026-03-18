/*
 * XREFs of NtUserSetMessageExtraInfo @ 0x140207330
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetMessageExtraInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx

  EnterCrit(0LL, 0LL);
  v4 = *((_QWORD *)PtiCurrent(v3, v2) + 59);
  v5 = *(_QWORD *)(v4 + 424);
  *(_QWORD *)(v4 + 424) = a1;
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
