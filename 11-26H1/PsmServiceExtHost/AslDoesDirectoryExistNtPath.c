/*
 * XREFs of AslDoesDirectoryExistNtPath @ 0x180098910
 * Callers:
 *     SdbpCheckMatchingDir @ 0x180094A80 (SdbpCheckMatchingDir.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslDoesDirectoryExistNtPath(PCWSTR SourceString)
{
  unsigned int v2; // esi
  int v3; // eax
  NTSTATUS v4; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+90h] [rbp+10h] BYREF

  memset(&ObjectAttributes, 0, 44);
  *(_QWORD *)&DestinationString.Length = 0LL;
  FileHandle = 0LL;
  v2 = 0;
  IoStatusBlock = 0LL;
  DestinationString.Buffer = 0LL;
  if ( _wcsnicmp(SourceString, L"\\SystemRoot\\", 0xCuLL) )
  {
    v3 = RtlDosPathNameToNtPathName_U_WithStatus(SourceString, &DestinationString, 0LL, 0LL);
    if ( v3 < 0 )
    {
      AslLogCallPrintf(
        1LL,
        "AslDoesDirectoryExistNtPath",
        554LL,
        "RtlDosPathNameToNtPathName_U_WithStatus failed for %S [%x]",
        SourceString,
        v3);
      goto LABEL_10;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 1u);
  if ( v4 >= 0 )
  {
    ZwClose(FileHandle);
LABEL_9:
    v2 = 1;
    goto LABEL_10;
  }
  if ( v4 == -1073741790 || v4 == -1073741757 )
    goto LABEL_9;
LABEL_10:
  if ( DestinationString.Buffer != SourceString && DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  return v2;
}
