/*
 * XREFs of NtUserRegisterServicesProcess @ 0x14029CE80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140283680 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rcx

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 19821);
    if ( !*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872) + 2280LL) )
    {
      v7 = (unsigned __int8)HasTcbPrivilege() == 0;
      goto LABEL_6;
    }
LABEL_8:
    UserSetLastError(5);
    goto LABEL_9;
  }
  v11 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19872);
  if ( *(_DWORD *)(v11 + 2280) )
    goto LABEL_8;
  UserSessionState = W32GetUserSessionState(v11, v10);
  v7 = (unsigned int)IsPrivileged(UserSessionState + 42544) == 0;
LABEL_6:
  if ( v7 )
    goto LABEL_8;
  v4 = 1LL;
  v13 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
  *(_DWORD *)(v13 + 2280) = a1;
LABEL_9:
  UserSessionSwitchLeaveCrit(v13);
  return v4;
}
