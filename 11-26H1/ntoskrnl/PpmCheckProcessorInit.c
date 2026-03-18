/*
 * XREFs of PpmCheckProcessorInit @ 0x14060A660
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1404D1C90 (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x14060B45C (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1 + 35264);
  PpmHeteroHgsProcessorInit(a1, 0LL);
  return 0LL;
}
