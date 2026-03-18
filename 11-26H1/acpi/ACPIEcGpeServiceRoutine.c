/*
 * XREFs of ACPIEcGpeServiceRoutine @ 0x14001E920
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEcCommonDpcHandler @ 0x14001E93C (AcpiEcCommonDpcHandler.c)
 */

char __fastcall ACPIEcGpeServiceRoutine(__int64 a1, __int64 a2)
{
  AcpiEcCommonDpcHandler(a2);
  return 1;
}
