/*
 * XREFs of HalpSetIrtEntry @ 0x140428AF0
 * Callers:
 *     HalpInterruptUnmap @ 0x140781218 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpIommuUpdateRemappingTableEntry @ 0x140428A2C (HalpIommuUpdateRemappingTableEntry.c)
 */

void __fastcall HalpSetIrtEntry(char a1, _DWORD *a2)
{
  HalpIommuUpdateRemappingTableEntry(a1, *a2 & 0x3FFFFFFF);
}
