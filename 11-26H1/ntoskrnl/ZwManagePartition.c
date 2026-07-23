/*
 * XREFs of ZwManagePartition @ 0x14072A320
 * Callers:
 *     DifZwManagePartitionWrapper @ 0x1406AD720 (DifZwManagePartitionWrapper.c)
 *     ExpAddNonMirroredRanges @ 0x140CE9F40 (ExpAddNonMirroredRanges.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetHandle);
}
