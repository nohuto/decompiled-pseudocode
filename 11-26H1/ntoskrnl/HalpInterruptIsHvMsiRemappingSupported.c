/*
 * XREFs of HalpInterruptIsHvMsiRemappingSupported @ 0x1404E5378
 * Callers:
 *     HalpInterruptUnmap @ 0x140781218 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvMsiRemappingSupported()
{
  return qword_140FBB068 != 0;
}
