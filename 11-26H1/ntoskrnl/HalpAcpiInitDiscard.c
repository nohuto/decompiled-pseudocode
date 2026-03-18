/*
 * XREFs of HalpAcpiInitDiscard @ 0x140CAF318
 * Callers:
 *     HalpAcpiInitSystem @ 0x140BEB270 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpSetupAcpiPhase0 @ 0x140CB3904 (HalpSetupAcpiPhase0.c)
 */

__int64 HalpAcpiInitDiscard()
{
  off_140E00698 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140E00B00[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
