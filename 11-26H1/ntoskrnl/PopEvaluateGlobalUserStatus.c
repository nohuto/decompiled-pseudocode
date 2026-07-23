/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x1409FA6E8
 * Callers:
 *     PopUserPresenceHostStateChange @ 0x1409F7584 (PopUserPresenceHostStateChange.c)
 *     PopSetGlobalUserStatus @ 0x1409FA67C (PopSetGlobalUserStatus.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PopPrintUserActivityPresence @ 0x1409FA814 (PopPrintUserActivityPresence.c)
 *     PopDiagTraceSessionStateCounted @ 0x140B2EE88 (PopDiagTraceSessionStateCounted.c)
 *     PopUmpoSendUserPresencePredictionAction @ 0x140B3CEF8 (PopUmpoSendUserPresencePredictionAction.c)
 */

void __fastcall PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF
  BOOL Buffer; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+5Ch] [rbp+14h]

  v0 = PopHostGlobalUserPresenceState;
  if ( PopHostGlobalUserPresenceState == 3 )
  {
    if ( PopMaximumConnectionSessions )
      v0 = RtlNumberOfSetBits(&PopConnectionBitmap) == 0 ? 2 : 0;
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
    Buffer = v0 != 0;
    PopUmpoSendUserPresencePredictionAction(v0 != 0);
    v6 = PopGlobalUserPresenceStateTransitions;
    ZwUpdateWnfStateData(&WNF_PO_SLEEP_STUDY_USER_PRESENCE_CHANGED, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
}
