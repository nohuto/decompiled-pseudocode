/*
 * XREFs of SmpQueryVolumeFreeSpace @ 0x140012B44
 * Callers:
 *     SmpGetDumpDestination @ 0x14001234C (SmpGetDumpDestination.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpQueryVolumeFreeSpace(__m128i *a1, _QWORD *a2)
{
  __int16 *v3; // rcx
  unsigned __int16 v4; // ax
  int i; // edx
  __int16 v6; // ax
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  __m128i v10; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp+Fh] BYREF
  __int128 FsInformation; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+98h] [rbp+2Fh]

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v14 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v10 = *a1;
  v3 = (__int16 *)v10.m128i_i64[1];
  v4 = _mm_cvtsi128_si32(v10);
  FsInformation = 0LL;
  v10.m128i_i16[0] = 0;
  for ( i = v4; i; i -= 2 )
  {
    v6 = *v3++;
    if ( v6 == 58 && *v3 == 92 )
    {
      LOWORD(v3) = (_WORD)v3 + 2;
      break;
    }
  }
  v10.m128i_i16[0] = (_WORD)v3 - v10.m128i_i16[4];
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  if ( result >= 0 )
  {
    v8 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
    NtClose(FileHandle);
    if ( v8 >= 0 )
    {
      result = 0;
      *a2 = *((_QWORD *)&FsInformation + 1) * (unsigned int)v14 * (unsigned __int64)HIDWORD(v14);
    }
    else
    {
      return v8;
    }
  }
  return result;
}
