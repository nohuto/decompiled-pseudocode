/*
 * XREFs of HalAcpiGetTable @ 0x14057B8A0
 * Callers:
 *     HalpAddDevice @ 0x1407846F0 (HalpAddDevice.c)
 *     HalpDbgInitSystem @ 0x140BF1610 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
