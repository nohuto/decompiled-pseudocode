/*
 * XREFs of ZwCreatePartition @ 0x140724B90
 * Callers:
 *     DifZwCreatePartitionWrapper @ 0x1406A0870 (DifZwCreatePartitionWrapper.c)
 *     ExpInitializeMemoryMirroring @ 0x140CE3C6C (ExpInitializeMemoryMirroring.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
