/*
 * XREFs of NvmeAuthKeyTableAllocateRoutine @ 0x140075DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAuthKeyTableAllocateRoutine(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(64LL, ByteSize, 1095655762LL);
}
