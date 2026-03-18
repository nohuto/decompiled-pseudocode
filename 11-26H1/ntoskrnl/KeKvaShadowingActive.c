/*
 * XREFs of KeKvaShadowingActive @ 0x1404E6308
 * Callers:
 *     sub_140553084 @ 0x140553084 (sub_140553084.c)
 *     KeQueryKvaShadowInformation @ 0x140778BF4 (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x1407BA658 (KeQuerySpeculationControlInformation.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409EB314 (PspDisablePrimaryTokenExchange.c)
 *     sub_140CA8B24 @ 0x140CA8B24 (sub_140CA8B24.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
