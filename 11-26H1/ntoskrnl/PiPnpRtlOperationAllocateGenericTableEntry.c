/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x140AADAA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlOperationAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(0x100uLL);
}
