/*
 * XREFs of PopDirectedDripsUmTestDeviceAllocate @ 0x1407E27C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDirectedDripsUmTestDeviceAllocate(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(0x100uLL);
}
