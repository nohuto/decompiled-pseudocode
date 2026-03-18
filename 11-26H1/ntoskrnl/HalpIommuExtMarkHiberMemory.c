/*
 * XREFs of HalpIommuExtMarkHiberMemory @ 0x14058BE28
 * Callers:
 *     IvtMarkHiberMemoryScalableModePasidTables @ 0x140BF0550 (IvtMarkHiberMemoryScalableModePasidTables.c)
 *     IvtMarkHiberRegions @ 0x140BF05F0 (IvtMarkHiberRegions.c)
 *     HsaMarkHiberRegions @ 0x140BF1180 (HsaMarkHiberRegions.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuExtMarkHiberMemory(void *a1, void *a2, unsigned int a3)
{
  PoSetHiberRange(a1, a1 != 0LL ? 2 : 0x10000, a2, a3, 0x496C6148u);
}
