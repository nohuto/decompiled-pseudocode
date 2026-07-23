/*
 * XREFs of PpmCheckProcessorInit @ 0x14060D220
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1404CB840 (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x14060E1CC (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1 + 35264);
  PpmHeteroHgsProcessorInit(a1, 0LL);
  return 0LL;
}
