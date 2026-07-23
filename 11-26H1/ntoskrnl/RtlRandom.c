/*
 * XREFs of RtlRandom @ 0x140AEDBF0
 * Callers:
 *     PspInitPhase2 @ 0x140CDE7AC (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  __int64 v1; // rdx
  ULONG result; // eax

  result = ExGenRandom(1, v1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
