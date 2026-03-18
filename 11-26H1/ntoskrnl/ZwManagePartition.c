/*
 * XREFs of ZwManagePartition @ 0x140725750
 * Callers:
 *     DifZwManagePartitionWrapper @ 0x1406A9B40 (DifZwManagePartitionWrapper.c)
 *     ExpAddNonMirroredRanges @ 0x140CE3BA0 (ExpAddNonMirroredRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManagePartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
