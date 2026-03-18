/*
 * XREFs of ArmRawMouseThrottlingTimer @ 0x140134520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ArmRawMouseThrottlingTimer(int a1, int a2, int a3)
{
  __int64 v3; // rdi
  char v4; // bl
  __int64 UserSessionState; // rax
  __int64 v6; // r8
  void *v7; // rcx
  union _LARGE_INTEGER DueTime; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  v4 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v6 = *(_QWORD *)(UserSessionState + 3136);
  if ( v6 )
  {
    v7 = *(void **)(v6 + 1096);
    if ( v4 )
    {
      DueTime.QuadPart = -10000 * v3;
      *(_BYTE *)(v6 + 1336) = 1;
      LODWORD(UserSessionState) = ZwSetTimer(v7, &DueTime, 0LL, 0LL, 0, 0, 0LL);
    }
    else
    {
      *(_BYTE *)(v6 + 1336) = 0;
      LODWORD(UserSessionState) = ZwCancelTimer(v7, 0LL);
    }
  }
  return UserSessionState;
}
