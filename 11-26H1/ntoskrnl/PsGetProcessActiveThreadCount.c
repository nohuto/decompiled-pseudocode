/*
 * XREFs of PsGetProcessActiveThreadCount @ 0x1404DEFC0
 * Callers:
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessActiveThreadCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 896);
}
