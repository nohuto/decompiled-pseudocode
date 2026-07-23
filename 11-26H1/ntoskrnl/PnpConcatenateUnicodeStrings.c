/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x1409B1D9C
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1404D9C4C (IoGetDeviceInstanceName.c)
 *     IoGetDeviceDirectory @ 0x1407A30F0 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x1407A35DC (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x1407A38D8 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A6CC8 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1409AFF18 (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PnpConcatenateUnicodeStrings(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = IopAllocateUnicodeString((__int64)DestinationString, SourceString->Length);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
