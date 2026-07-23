/*
 * XREFs of ZwManagePartition @ 0x14069D4A0
 * Callers:
 *     ExpAddNonMirroredRanges @ 0x140C2F0F0 (ExpAddNonMirroredRanges.c)
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
