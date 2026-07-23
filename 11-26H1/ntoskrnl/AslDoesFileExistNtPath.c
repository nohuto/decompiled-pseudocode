/*
 * XREFs of AslDoesFileExistNtPath @ 0x14088E564
 * Callers:
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall AslDoesFileExistNtPath(wchar_t *SourceString)
{
  unsigned int v1; // ebx
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+10h] BYREF

  v1 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v3 >= 0 )
  {
    v1 = 1;
    ZwClose(FileHandle);
  }
  else if ( v3 == -1073741757 || v3 == -1073741790 )
  {
    v1 = 1;
  }
  if ( DestinationString.Buffer != SourceString )
    RtlFreeAnsiString(&DestinationString);
  return v1;
}
