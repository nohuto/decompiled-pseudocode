/*
 * XREFs of PoFxActivateDevice @ 0x1404CEAE4
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x1407A7BF4 (PiProcessResourceRequirementsChanged.c)
 *     PnpPoFxActivateDevice @ 0x1409B02B0 (PnpPoFxActivateDevice.c)
 *     PopFxUpdateVetoMaskWork @ 0x140B420B0 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x140B5D89C (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
