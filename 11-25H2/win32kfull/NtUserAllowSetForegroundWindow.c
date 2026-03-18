/*
 * XREFs of NtUserAllowSetForegroundWindow @ 0x14015C5F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x14015C858 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 */

__int64 __fastcall NtUserAllowSetForegroundWindow(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rbx

  EnterCrit(0LL, 0LL);
  v4 = PtiCurrent(v3, v2);
  v5 = IAMThreadAccessGranted(v4);
  v6 = _AllowSetForegroundWindow(a1, v5 != 0 ? 3 : 0) - 2;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v9 = 1LL;
      goto LABEL_4;
    }
    v8 = 87;
  }
  else
  {
    v8 = 5;
  }
  UserSetLastError(v8);
  v9 = 0LL;
LABEL_4:
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
