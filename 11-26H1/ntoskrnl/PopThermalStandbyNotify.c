/*
 * XREFs of PopThermalStandbyNotify @ 0x140607BF4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x140607B18 (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopThermalStandbyNotify(char a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = 1;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_THERMAL_STANDBY_NOTIFICATION);
  }
  else
  {
    v2 = 0;
  }
  return ZwUpdateWnfStateData(&WNF_PO_THERMAL_STANDBY, &v2, 4LL, 0LL, 0LL, 0, 0);
}
