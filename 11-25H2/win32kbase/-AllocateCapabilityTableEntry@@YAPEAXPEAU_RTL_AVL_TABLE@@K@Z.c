/*
 * XREFs of ?AllocateCapabilityTableEntry@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x140158320
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall AllocateCapabilityTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return Win32AllocPoolImpl(256LL, ByteSize, 0x65747355u);
}
