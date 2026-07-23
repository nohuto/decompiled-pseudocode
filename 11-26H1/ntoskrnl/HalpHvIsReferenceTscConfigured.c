/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x140530304
 * Callers:
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140FBB3E8 != 0;
}
