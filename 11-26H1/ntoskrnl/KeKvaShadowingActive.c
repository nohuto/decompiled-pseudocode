/*
 * XREFs of KeKvaShadowingActive @ 0x1404DF8A8
 * Callers:
 *     sub_140555504 @ 0x140555504 (sub_140555504.c)
 *     KeQueryKvaShadowInformation @ 0x14077BA94 (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x1407BD6B8 (KeQuerySpeculationControlInformation.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409E7AE4 (PspDisablePrimaryTokenExchange.c)
 *     sub_140CAEB24 @ 0x140CAEB24 (sub_140CAEB24.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
