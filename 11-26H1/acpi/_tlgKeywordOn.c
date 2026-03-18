/*
 * XREFs of _tlgKeywordOn @ 0x14004B7C8
 * Callers:
 *     AcpiDiagTracePccEjectSubspace @ 0x140051C68 (AcpiDiagTracePccEjectSubspace.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x140056060 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTracePccCommandTimeout @ 0x1400564CC (AcpiDiagTracePccCommandTimeout.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x140056A84 (AcpiDiagTraceTemperatureTelemetry.c)
 *     IrqTraceAffinityPolicy @ 0x1400D265C (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
