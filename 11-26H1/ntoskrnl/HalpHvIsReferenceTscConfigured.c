/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x14052DDE4
 * Callers:
 *     HalpPostSleepMP @ 0x140BECEF0 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140FBB048 != 0;
}
