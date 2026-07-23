/*
 * XREFs of HalpInterruptIsHvMsiRemappingSupported @ 0x1404DE918
 * Callers:
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvMsiRemappingSupported()
{
  return qword_140FBB408 != 0;
}
