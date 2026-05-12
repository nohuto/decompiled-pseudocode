/*
 * XREFs of AllocateRoutine @ 0x14006EEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateRoutine(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(64LL, ByteSize, 1095655762LL);
}
