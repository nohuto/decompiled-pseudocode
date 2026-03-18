/*
 * XREFs of NtUserRegisterSystemThread @ 0x14029CFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserRegisterSystemThread(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = PtiCurrent(v3, v2);
  if ( (a1 & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)v4 + 132, 0x40u);
  UserSessionSwitchLeaveCrit(v5);
  return 1LL;
}
