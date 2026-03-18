/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x14029DBE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402E09E0 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, int a2, volatile void *a3)
{
  BOOL v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  InteractiveControlManager *v9; // rax
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  volatile void *Address[2]; // [rsp+40h] [rbp-28h] BYREF

  Address[0] = a3;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  if ( a2 == 16 )
  {
    ProbeForRead(Address[0], 0x10uLL, 1u);
    *(_OWORD *)Address = *(_OWORD *)Address[0];
    v9 = InteractiveControlManager::Instance(v8, v7);
    v5 = (int)InteractiveControlManager::SendDeviceHapticsOutput(
                v9,
                a1,
                (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)Address) >= 0;
  }
  else
  {
    v5 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
