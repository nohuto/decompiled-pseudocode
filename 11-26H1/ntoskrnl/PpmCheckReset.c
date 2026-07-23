/*
 * XREFs of PpmCheckReset @ 0x1404CB820
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1404CB840 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1)
{
  PpmResetPerfTimes(a1 + 35264);
  return 0LL;
}
