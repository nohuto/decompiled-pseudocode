/*
 * XREFs of ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x14014EC6C
 * Callers:
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateAndLockCursor(struct tagCURSOR **a1, int a2)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (__int64)*a1;
  if ( !v4 )
    return 1LL;
  v6 = HMValidateHandleNoSecure(v4, 3);
  if ( v6 || !a2 )
  {
    *a1 = 0LL;
    v7[0] = a1;
    v7[1] = v6;
    HMAssignmentLock(v7, 0LL);
    return 1LL;
  }
  UserSetLastError(87);
  return 0LL;
}
