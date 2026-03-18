/*
 * XREFs of SepRmCapPoolExpand @ 0x14063BEF0
 * Callers:
 *     SepReadAndInsertCaps @ 0x140816E5C (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x1408171AC (SepReadAndPopulateCapes.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCapPoolExpand(void *a1)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePool2(0x100uLL);
}
