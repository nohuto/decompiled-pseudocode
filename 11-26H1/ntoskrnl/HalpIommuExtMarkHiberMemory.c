/*
 * XREFs of HalpIommuExtMarkHiberMemory @ 0x14058E5A8
 * Callers:
 *     IvtMarkHiberMemoryScalableModePasidTables @ 0x140BF6550 (IvtMarkHiberMemoryScalableModePasidTables.c)
 *     IvtMarkHiberRegions @ 0x140BF65F0 (IvtMarkHiberRegions.c)
 *     HsaMarkHiberRegions @ 0x140BF7180 (HsaMarkHiberRegions.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuExtMarkHiberMemory(void *a1, void *a2, unsigned int a3)
{
  PoSetHiberRange(a1, a1 != 0LL ? 2 : 0x10000, a2, a3, 0x496C6148u);
}
