/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x14090FC6C
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1404E056C (IoGetDeviceInstanceName.c)
 *     IoGetDeviceDirectory @ 0x1407A05B0 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x1407A0A9C (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x1407A0D98 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A4188 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x14090DDE8 (IopAllocateUnicodeString.c)
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
