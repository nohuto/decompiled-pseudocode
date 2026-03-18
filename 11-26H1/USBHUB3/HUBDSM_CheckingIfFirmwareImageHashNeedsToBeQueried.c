/*
 * XREFs of HUBDSM_CheckingIfFirmwareImageHashNeedsToBeQueried @ 0x140020A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfFirmwareImageHashNeedsToBeQueried(__int64 a1)
{
  return *(_BYTE *)(*(_QWORD *)(a1 + 960) + 2720LL) != 0 ? 4089 : 4061;
}
