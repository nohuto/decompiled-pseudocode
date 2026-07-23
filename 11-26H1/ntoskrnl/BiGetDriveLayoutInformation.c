/*
 * XREFs of BiGetDriveLayoutInformation @ 0x140B151FC
 * Callers:
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 *     BiGetDriveLayoutBlock @ 0x1408986BC (BiGetDriveLayoutBlock.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140B152C8 (BiIssueGetDriveLayoutIoctl.c)
 */

__int64 __fastcall BiGetDriveLayoutInformation(PCWSTR SourceString)
{
  NTSTATUS DriveLayoutIoctl; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  DriveLayoutIoctl = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( DriveLayoutIoctl >= 0 )
    DriveLayoutIoctl = BiIssueGetDriveLayoutIoctl(FileHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)DriveLayoutIoctl;
}
