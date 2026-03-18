/*
 * XREFs of AcpiPccRingDoorbellCriticalSection @ 0x1400650E0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccUpdateDoorbellRegister @ 0x1400517FC (AcpiPccUpdateDoorbellRegister.c)
 *     AcpiPccUpdateCommandCompleteStatus @ 0x140065688 (AcpiPccUpdateCommandCompleteStatus.c)
 */

BOOLEAN __fastcall AcpiPccRingDoorbellCriticalSection(__int64 SynchronizeContext)
{
  AcpiPccUpdateCommandCompleteStatus(SynchronizeContext);
  AcpiPccUpdateDoorbellRegister(SynchronizeContext);
  return 1;
}
