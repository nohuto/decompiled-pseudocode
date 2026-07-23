/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1409F9104
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140776E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 *     PopActiveLockScreenPowerRequest @ 0x1407E2040 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x1407E22B8 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopSessionConnectionChangeV2 @ 0x1407E24E4 (PopSessionConnectionChangeV2.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409C1164 (PopAdaptiveGetBootIsUnattended.c)
 *     PopSetDisplayStatus @ 0x1409F7320 (PopSetDisplayStatus.c)
 *     PopUserPresenceHostStateChange @ 0x1409F7584 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetSessionState @ 0x1409F91C0 (PopAdaptiveGetSessionState.c)
 *     PopAdaptivePowerSettingCallback @ 0x140ABE290 (PopAdaptivePowerSettingCallback.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x140B3ABDC (PopAdaptiveGetBootTargetSystemState.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140B49B40 (PopIsLockConsoleTimeoutActive.c)
 *     PopAdaptiveWnfCallback @ 0x140B4F200 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnectionChange @ 0x140B77620 (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140B776DC (PopSessionWinlogonNotification.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 *     PopSendSessionInfo @ 0x140B48360 (PopSendSessionInfo.c)
 */

void PopReleaseAdaptiveLock()
{
  char v0; // bl
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v5[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v6; // [rsp+48h] [rbp-30h]
  GUID v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  v0 = PopAdaptiveContext;
  v1 = dword_140F0C078;
  DWORD1(v5[0]) = 0;
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = 0LL;
  ExReleaseResourceLite(&PopAdpmLock);
  KeLeaveCriticalRegion();
  if ( v0 )
  {
    v8 = 0;
    v7 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
    PopSendSessionInfo(v1, v2, v3, &v7);
    v4 = v1;
    v6 = 7LL;
    memset(v5, 0, sizeof(v5));
    PopDispatchStateCallout(v5, (__int64)&v4);
  }
}
