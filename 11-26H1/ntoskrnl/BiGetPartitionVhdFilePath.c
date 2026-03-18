/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x140B1C230
 * Callers:
 *     BiCreatePartitionDevice @ 0x140891AB0 (BiCreatePartitionDevice.c)
 *     BiGetNtPartitionPathCallback @ 0x1408924F0 (BiGetNtPartitionPathCallback.c)
 *     BiResolveLocateFileCallback @ 0x140893270 (BiResolveLocateFileCallback.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5B170 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140B1C260 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
