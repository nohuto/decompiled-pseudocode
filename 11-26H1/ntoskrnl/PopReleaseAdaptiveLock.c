/*
 * XREFs of PopReleaseAdaptiveLock @ 0x140A3D6E4
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140773E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     NtSetThreadExecutionState @ 0x1407D2150 (NtSetThreadExecutionState.c)
 *     PopActiveLockScreenPowerRequest @ 0x1407DDA10 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x1407DDC88 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopSessionConnectionChangeV2 @ 0x1407DDEB4 (PopSessionConnectionChangeV2.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409457F4 (PopAdaptiveGetBootIsUnattended.c)
 *     PopSessionWinlogonNotification @ 0x140A3B184 (PopSessionWinlogonNotification.c)
 *     PopSetDisplayStatus @ 0x140A3B900 (PopSetDisplayStatus.c)
 *     PopUserPresenceHostStateChange @ 0x140A3BB64 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetSessionState @ 0x140A3D7A0 (PopAdaptiveGetSessionState.c)
 *     PopAdaptivePowerSettingCallback @ 0x140ABC470 (PopAdaptivePowerSettingCallback.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x140B389CC (PopAdaptiveGetBootTargetSystemState.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140B47DB0 (PopIsLockConsoleTimeoutActive.c)
 *     PopAdaptiveWnfCallback @ 0x140B4D470 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnectionChange @ 0x140B72640 (PopSessionConnectionChange.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 *     PopSendSessionInfo @ 0x140B46330 (PopSendSessionInfo.c)
 */

void PopReleaseAdaptiveLock()
{
  char Blink; // bl
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v5[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v6; // [rsp+48h] [rbp-30h]
  GUID v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  Blink = (char)PopAdaptiveStandbyLock.ThreadListEntry.Blink;
  v1 = *(_DWORD *)&PopAdaptiveStandbyLock.AbWaitEntryCount;
  DWORD1(v5[0]) = 0;
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = 0LL;
  ExReleaseResourceLite((PERESOURCE)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount);
  KeLeaveCriticalRegion();
  if ( Blink )
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
