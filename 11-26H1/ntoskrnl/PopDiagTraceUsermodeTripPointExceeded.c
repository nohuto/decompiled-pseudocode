/*
 * XREFs of PopDiagTraceUsermodeTripPointExceeded @ 0x140B46B7C
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140B46A5C (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     PopDiagTraceTripPointExceeded @ 0x140B46BF4 (PopDiagTraceTripPointExceeded.c)
 */

__int64 __fastcall PopDiagTraceUsermodeTripPointExceeded(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  bool v5; // zf
  __int64 *v6; // r9
  unsigned int v7; // edi
  unsigned __int16 v9; // bp
  const char *v10; // r9

  v5 = a4 == 0;
  v6 = (__int64 *)&POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC;
  v7 = a3;
  if ( v5 )
    v6 = POP_ETW_EVENT_S4_TRIP_POINT_DIAGNOSTIC;
  v9 = a1;
  PopDiagTraceTripPointExceeded(a1, a2, a3, v6);
  v10 = (const char *)&POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM;
  if ( !a4 )
    v10 = "X";
  return PopDiagTraceTripPointExceeded(v9, a2, v7, v10);
}
