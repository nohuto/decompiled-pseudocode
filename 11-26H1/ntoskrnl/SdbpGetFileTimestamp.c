/*
 * XREFs of SdbpGetFileTimestamp @ 0x140880F74
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x140881504 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpOpenLocalDatabaseEx @ 0x14088620C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateFile @ 0x140723E90 (ZwCreateFile.c)
 *     ZwQueryInformationByName @ 0x140725E70 (ZwQueryInformationByName.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetFileTimestamp(_QWORD *a1, const WCHAR *a2, int a3)
{
  int InformationByName; // eax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  __int128 FileInformation; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v17; // [rsp+C8h] [rbp-38h]
  __int64 v18; // [rsp+D8h] [rbp-28h]
  _BYTE v19[24]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v20; // [rsp+F8h] [rbp-8h]

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v18 = 0LL;
  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v17 = 0LL;
  memset_0(v19, 0, 0x48uLL);
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  InformationByName = ZwQueryInformationByName((__int64)&ObjectAttributes, (__int64)&IoStatusBlock);
  v7 = InformationByName;
  if ( InformationByName == -1073741772 )
    goto LABEL_13;
  if ( InformationByName >= 0 )
  {
    v9 = *((_QWORD *)&v20 + 1);
    v10 = v20;
  }
  else
  {
    v8 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x60u, 0LL, 0);
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -1073741772 )
        AslLogCallPrintf(1, (unsigned int)"SdbpGetFileTimestamp", 1550, (unsigned int)"Failed to open file [%x]");
      goto LABEL_13;
    }
    v7 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    if ( v7 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetFileTimestamp",
        1561,
        (unsigned int)"Failed to get timestamp from %S. [%x]");
      goto LABEL_13;
    }
    v9 = *((_QWORD *)&v17 + 1);
    v10 = v17;
    v20 = v17;
  }
  if ( a3 )
    v9 = v10;
  v7 = 0;
  *a1 = v9;
LABEL_13:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}
