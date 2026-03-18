/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x140A3ECC8
 * Callers:
 *     PopUserPresenceHostStateChange @ 0x140A3BB64 (PopUserPresenceHostStateChange.c)
 *     PopSetGlobalUserStatus @ 0x140A3EC5C (PopSetGlobalUserStatus.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140356570 (RtlNumberOfSetBits.c)
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopPrintUserActivityPresence @ 0x140A3EDF4 (PopPrintUserActivityPresence.c)
 *     PopDiagTraceSessionStateCounted @ 0x140B2CE08 (PopDiagTraceSessionStateCounted.c)
 *     PopUmpoSendUserPresencePredictionAction @ 0x140B3AC78 (PopUmpoSendUserPresencePredictionAction.c)
 */

void __fastcall PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF
  BOOL v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+5Ch] [rbp+14h]

  v0 = PopHostGlobalUserPresenceState;
  if ( PopHostGlobalUserPresenceState == 3 )
  {
    if ( *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] )
      v0 = RtlNumberOfSetBits((PRTL_BITMAP)&PopAdaptiveStandbyLock.SchedulerApcFill5[72]) == 0 ? 2 : 0;
    else
      v0 = 0;
  }
  if ( v0 != PopGlobalUserPresenceState )
  {
    v4 = v0;
    ++PopGlobalUserPresenceStateTransitions;
    PopGlobalUserPresenceState = v0;
    v1 = PopPrintUserActivityPresence(v0);
    PopPrintEx(3, (int)"PopAdaptive: Global user presence/activity state: %S id: %I32u\n", v1);
    PopDiagTraceSessionStateCounted(v3, v2, v0);
    PopSetPowerSettingValue(&GUID_GLOBAL_USER_PRESENCE, 0xFFFFFFFF, 0, 4u, &v4);
    PopSetPowerSettingValue(&GUID_GLOBAL_USER_PRESENCE, 0xFFFFFFFF, 1, 4u, &v4);
    v5 = v0 != 0;
    PopUmpoSendUserPresencePredictionAction(v0 != 0);
    v6 = PopGlobalUserPresenceStateTransitions;
    ZwUpdateWnfStateData((__int64)&WNF_PO_SLEEP_STUDY_USER_PRESENCE_CHANGED, (__int64)&v5);
  }
}
