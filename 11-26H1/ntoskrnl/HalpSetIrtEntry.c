/*
 * XREFs of HalpSetIrtEntry @ 0x140435148
 * Callers:
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpIommuUpdateRemappingTableEntry @ 0x140435084 (HalpIommuUpdateRemappingTableEntry.c)
 */

void __fastcall HalpSetIrtEntry(char a1, _DWORD *a2)
{
  HalpIommuUpdateRemappingTableEntry(a1, *a2 & 0x3FFFFFFF);
}
