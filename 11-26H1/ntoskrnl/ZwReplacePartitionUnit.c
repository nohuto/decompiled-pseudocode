/*
 * XREFs of ZwReplacePartitionUnit @ 0x140726490
 * Callers:
 *     DifZwReplacePartitionUnitWrapper @ 0x1406B7370 (DifZwReplacePartitionUnitWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplacePartitionUnit(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
