/*
 * XREFs of _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180007BF0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

int dynamic_initializer_for__g_ListOfSpatialTech__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  dword_1801D6768 = 0;
  memset_0(&unk_1801D66F8, 0, 0x48uLL);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_ListOfSpatialTech__);
}
