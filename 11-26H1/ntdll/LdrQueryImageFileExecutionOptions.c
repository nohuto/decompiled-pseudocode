/*
 * XREFs of LdrQueryImageFileExecutionOptions @ 0x1800D12B0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlQueryImageFileExecutionOptions @ 0x1800D13E0 (RtlQueryImageFileExecutionOptions.c)
 */

NTSTATUS __cdecl LdrQueryImageFileExecutionOptions(
        PUNICODE_STRING SubKey,
        PCWSTR ValueName,
        ULONG ValueSize,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnedLength)
{
  if ( LdrpIsSecureProcess )
    return -1073741772;
  else
    return RtlQueryImageFileExecutionOptions(SubKey, ValueName, ValueSize, Buffer, BufferSize, ReturnedLength, 0);
}
