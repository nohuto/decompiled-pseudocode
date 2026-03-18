/*
 * XREFs of ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8
 * Callers:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     xxxProcessNotifyWinEvent @ 0x14002F920 (xxxProcessNotifyWinEvent.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserResetPointer @ 0x1401237C0 (UserResetPointer.c)
 *     MapDesktop @ 0x140172F80 (MapDesktop.c)
 *     ??0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ @ 0x140219EE8 (--0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ.c)
 *     NtUserGetProp @ 0x14024A1F0 (NtUserGetProp.c)
 *     NtUserGetProp2 @ 0x14024A310 (NtUserGetProp2.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 * Callees:
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x140272250 (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 GET_USERCRIT_DISPOSITION()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebx
  _QWORD *UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v9; // rax

  v4 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    return (*(_DWORD *)(PsGetCurrentThreadWin32Thread(v1, v0, v2, v3) + 24) >> 3) & 3;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v1, v0);
  if ( (unsigned __int8)ExIsFastResourceHeld(*UserSessionState) != 1 )
    return 0LL;
  v9 = (_QWORD *)W32GetUserSessionState(v7, v6);
  LOBYTE(v4) = (unsigned __int8)ExIsFastResourceHeldExclusive(*v9) == 1;
  return (unsigned int)(v4 + 1);
}
