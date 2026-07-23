/*
 * XREFs of PiDmAllocateGenericTableEntry @ 0x140B3E470
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmAllocateGenericTableEntry(_RTL_AVL_TABLE *a1)
{
  return ExAllocatePool2(0x100uLL);
}
