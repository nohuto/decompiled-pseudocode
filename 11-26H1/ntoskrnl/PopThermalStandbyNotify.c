/*
 * XREFs of PopThermalStandbyNotify @ 0x14060A7A4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404E6660 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x14060A6D4 (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x1407D5000 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopThermalStandbyNotify(char a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    Buffer = 1;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_THERMAL_STANDBY_NOTIFICATION);
  }
  else
  {
    Buffer = 0;
  }
  return ZwUpdateWnfStateData(&WNF_PO_THERMAL_STANDBY, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
