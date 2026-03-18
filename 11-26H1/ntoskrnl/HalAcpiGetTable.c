/*
 * XREFs of HalAcpiGetTable @ 0x140579370
 * Callers:
 *     HalpAddDevice @ 0x140781BF0 (HalpAddDevice.c)
 *     HalpDbgInitSystem @ 0x140BEB610 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140342AEC (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
