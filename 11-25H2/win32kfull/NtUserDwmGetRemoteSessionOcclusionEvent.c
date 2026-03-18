/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x140220740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 */

void *__fastcall NtUserDwmGetRemoteSessionOcclusionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  int v6; // eax
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(a1, a2, a3) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    v6 = ObOpenObjectByPointer(
           *(PVOID *)(UserSessionState + 68440),
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v6 < 0 )
      UserSetLastStatus(v6, 1);
  }
  else
  {
    UserSetLastError(5);
  }
  return Handle;
}
