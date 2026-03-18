/*
 * XREFs of HUBHSM_WaitingForEnableInterruptsOnSx @ 0x14000A4A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_ReleaseWdfPowerReference @ 0x14000F07C (HUBFDO_ReleaseWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_WaitingForEnableInterruptsOnSx(__int64 a1)
{
  HUBFDO_ReleaseWdfPowerReference(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
