/*
 * XREFs of RtlRandomEx @ 0x140200BE0
 * Callers:
 *     PspSelectNodeForProcessNoRestrictions @ 0x1407F2E5C (PspSelectNodeForProcessNoRestrictions.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14082CB64 (EtwpGetPrivateSessionTraceHandle.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A89424 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     VfRandomGetNumber @ 0x140C215A4 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1LL) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
