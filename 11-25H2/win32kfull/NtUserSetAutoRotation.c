/*
 * XREFs of NtUserSetAutoRotation @ 0x14029DFC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserSetAutoRotation(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx

  EnterCrit(0LL, 0LL);
  UserSessionState = W32GetUserSessionState(v3, v2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(UserSessionState + 66072) + 48LL))(
         *(_QWORD *)(UserSessionState + 66072),
         a1);
  if ( v5 < 0 )
  {
    UserSetLastStatus(v5, 1);
    v7 = 0LL;
  }
  else
  {
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
