/*
 * XREFs of ZwReplacePartitionUnit @ 0x14072B060
 * Callers:
 *     DifZwReplacePartitionUnitWrapper @ 0x1406BAF50 (DifZwReplacePartitionUnitWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplacePartitionUnit(
        PUNICODE_STRING TargetInstancePath,
        PUNICODE_STRING SpareInstancePath,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetInstancePath);
}
