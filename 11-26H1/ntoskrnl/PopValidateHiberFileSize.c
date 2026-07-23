/*
 * XREFs of PopValidateHiberFileSize @ 0x140B03344
 * Callers:
 *     PopSetHiberFileType @ 0x14077A2FC (PopSetHiberFileType.c)
 *     PopSetHiberFileSize @ 0x1407D3928 (PopSetHiberFileSize.c)
 *     PopResizeHiberFile @ 0x140B0316C (PopResizeHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1407288E0 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall PopValidateHiberFileSize(__int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  NTSTATUS v10; // esi
  int v11; // ecx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rdx
  HANDLE FileHandle; // [rsp+30h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-51h] BYREF
  __int128 FsInformation; // [rsp+78h] [rbp-21h] BYREF
  __int128 v20; // [rsp+88h] [rbp-11h]
  __int128 FileInformation; // [rsp+98h] [rbp-1h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+Fh]

  v22 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FsInformation = 0LL;
  FileHandle = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( FileObject )
  {
    v10 = ZwQueryInformationFile(PopHiberInfo, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v10 < 0 )
    {
      v14 = 0LL;
      v11 = 3;
      goto LABEL_9;
    }
    v9 = FileInformation;
  }
  else
  {
    v9 = 0LL;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &PoHiberFileRoot;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v10 < 0 )
  {
    v14 = 0LL;
    v11 = 4;
  }
  else
  {
    v10 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x20u, FileFsFullSizeInformation);
    ZwClose(FileHandle);
    if ( v10 < 0 )
    {
      v14 = 0LL;
      v11 = 5;
    }
    else
    {
      v11 = 6;
      v12 = a1 - v9;
      v10 = -1073741823;
      v8 = v20 * (unsigned int)(HIDWORD(v20) * DWORD2(v20));
      v13 = v8 - 0x10000000;
      if ( v8 - 0x10000000 <= 0 )
        v13 = 0LL;
      v14 = v9 + v13;
      if ( v8 - 0x10000000 >= v12 )
      {
        v11 = 0;
        v10 = 0;
      }
    }
  }
LABEL_9:
  if ( a2 )
    *a2 = v14;
  if ( a3 )
    *a3 = v8;
  if ( v10 < 0 && a4 )
    *a4 = v11;
  return (unsigned int)v10;
}
