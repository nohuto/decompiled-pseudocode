/*
 * XREFs of NtUserMagControl @ 0x1401B9230
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MagControl @ 0x1401B92F0 (MagControl.c)
 */

__int64 __fastcall NtUserMagControl(unsigned int a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  ULONG v15; // eax

  v4 = 1LL;
  EnterCrit(1LL, 0LL);
  if ( a2 )
  {
    v7 = ValidateHwnd(a2);
    if ( !v7 )
    {
      v12 = -1073741811;
      goto LABEL_7;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v8 = PtiCurrent(v6, v5);
  UserSessionState = W32GetUserSessionState(v10, v9);
  v12 = MagControl(UserSessionState + 66040, v8, a1, v7);
  if ( v12 < 0 )
  {
LABEL_7:
    v4 = 0LL;
    v15 = RtlNtStatusToDosError(v12);
    UserSetLastError(v15);
  }
  UserSessionSwitchLeaveCrit(v13);
  return v4;
}
