/*
 * XREFs of NtUserClearForeground @ 0x140294CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline @ 0x140288658 (Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rbx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v0 = 0LL;
  if ( (unsigned int)Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline() )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 24767);
    return 0LL;
  }
  else
  {
    EnterCrit(0LL, 0LL);
    v11[0] = 0;
    v12 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v11, v2);
    v5 = PtiCurrent(v4, v3);
    if ( *((_QWORD *)v5 + 62) == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19144)
      || (LOBYTE(v8) = IAMThreadAccessGranted(v5), !v8) )
    {
      UserSetLastError(5);
    }
    else
    {
      v9 = *((_QWORD *)v5 + 62);
      if ( v9 )
        HMAssignmentUnlock(v9 + 104);
      v0 = 1LL;
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
    UserSessionSwitchLeaveCrit(v10);
    return v0;
  }
}
