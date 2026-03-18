/*
 * XREFs of NtUserSetSystemTimer @ 0x1402A0310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _SetSystemTimer @ 0x140158A0C (_SetSystemTimer.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetSystemTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi

  EnterCrit(0LL, 0LL);
  v6 = ValidateReceivingHwnd(a1, 1);
  v9 = 0LL;
  v10 = v6;
  if ( v6 )
  {
    if ( *(struct tagTHREADINFO **)(v6 + 16) == PtiCurrent(v8, v7) )
      v9 = SetSystemTimer(v10, a2, a3, 0LL, 0);
    else
      UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
