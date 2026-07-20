/*
 * XREFs of SmpQuerySameVolume @ 0x1400125CC
 * Callers:
 *     SmpGetDumpDestination @ 0x140011F7C (SmpGetDumpDestination.c)
 *     SmpSavePageFile @ 0x140012AB8 (SmpSavePageFile.c)
 * Callees:
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpQuerySameVolume(HANDLE FileHandle, struct _UNICODE_STRING *a2, bool *a3)
{
  NTSTATUS result; // eax
  int v7; // edi
  NTSTATUS v8; // ebx
  void *FileHandlea; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _BYTE FsInformation[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v13; // [rsp+B8h] [rbp-48h]

  FileHandlea = 0LL;
  memset_0(FsInformation, 0, 0xE0uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  result = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0xE0u, FileFsVolumeInformation);
  if ( result >= 0 )
  {
    v7 = v13;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.ObjectName = a2;
    result = NtOpenFile(&FileHandlea, 0x100000u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( result == -1073741772 )
      result = NtCreateFile(
                 &FileHandlea,
                 0x110000u,
                 &ObjectAttributes,
                 &IoStatusBlock,
                 0LL,
                 0x80u,
                 0,
                 2u,
                 0x1060u,
                 0LL,
                 0);
    if ( result >= 0 )
    {
      v8 = NtQueryVolumeInformationFile(FileHandlea, &IoStatusBlock, FsInformation, 0xE0u, FileFsVolumeInformation);
      NtClose(FileHandlea);
      if ( v8 >= 0 )
        *a3 = v7 == v13;
      return v8;
    }
  }
  return result;
}
