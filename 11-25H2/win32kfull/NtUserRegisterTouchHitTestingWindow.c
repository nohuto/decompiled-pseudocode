/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1401E0500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _SetTargetingWindowValue @ 0x1401E0588 (_SetTargetingWindowValue.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi

  EnterCrit(0LL, 0LL);
  v4 = ValidateReceivingHwnd(a1, 1LL);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( PtiCurrent(v6, v5) == *(struct tagTHREADINFO **)(v4 + 16) )
      v7 = SetTargetingWindowValue(v8, a2);
    else
      UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
