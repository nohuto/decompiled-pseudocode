/*
 * XREFs of SiOpenDevice @ 0x140ADEA3C
 * Callers:
 *     SiGetDeviceNumberInformation @ 0x14089AD84 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x14089AE64 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14089AF6C (SiIssueSynchronousIoctl.c)
 *     SiGetDiskPartitionInformation @ 0x140ADE9A0 (SiGetDiskPartitionInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 */

NTSTATUS __fastcall SiOpenDevice(PCWSTR SourceString, PHANDLE FileHandle)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  return ZwOpenFile(FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
}
