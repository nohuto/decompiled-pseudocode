/*
 * XREFs of ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130
 * Callers:
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A15C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140035294 (rimHandleAnyPnpRemovePendingDevices.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSessionSwitchLeaveCrit @ 0x140094120 (UserSessionSwitchLeaveCrit.c)
 *     NtUserGetHDevName @ 0x14009E490 (NtUserGetHDevName.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D6900 (RIMProcessAnyPointerDeviceInput.c)
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 *     RIMAddToActiveDevices @ 0x14017F910 (RIMAddToActiveDevices.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     NtUserEnableTouchPad @ 0x1401BD300 (NtUserEnableTouchPad.c)
 *     RIMFreeSpecificDev @ 0x1401D5330 (RIMFreeSpecificDev.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E4710 (RIMRemoveFromActiveDevices.c)
 *     rimProcessHidInput @ 0x1401F11FC (rimProcessHidInput.c)
 * Callees:
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 GET_USERCRIT_DISPOSITION()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  _QWORD *UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v7; // rax

  v2 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    return (*(_DWORD *)(PsGetCurrentThreadWin32Thread() + 24) >> 3) & 3;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v1, v0);
  if ( (unsigned __int8)ExIsFastResourceHeld(*UserSessionState) != 1 )
    return 0LL;
  v7 = (_QWORD *)W32GetUserSessionState(v5, v4);
  LOBYTE(v2) = (unsigned __int8)ExIsFastResourceHeldExclusive(*v7) == 1;
  return (unsigned int)(v2 + 1);
}
