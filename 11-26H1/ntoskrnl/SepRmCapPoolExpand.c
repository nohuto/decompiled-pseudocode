/*
 * XREFs of SepRmCapPoolExpand @ 0x14063FACC
 * Callers:
 *     SepReadAndInsertCaps @ 0x14081D06C (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x14081D3BC (SepReadAndPopulateCapes.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCapPoolExpand(void *a1)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePool2(0x100uLL);
}
