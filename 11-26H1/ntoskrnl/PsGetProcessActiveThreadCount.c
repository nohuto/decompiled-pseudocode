/*
 * XREFs of PsGetProcessActiveThreadCount @ 0x1404E5A20
 * Callers:
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessActiveThreadCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 896);
}
