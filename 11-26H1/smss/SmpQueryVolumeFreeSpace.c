/*
 * XREFs of SmpQueryVolumeFreeSpace @ 0x140012780
 * Callers:
 *     SmpGetDumpDestination @ 0x140011F7C (SmpGetDumpDestination.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpQueryVolumeFreeSpace(__m128i *a1, _QWORD *a2)
{
  __int16 *v3; // rcx
  unsigned __int16 v4; // ax
  __int64 v5; // r8
  int i; // edx
  __int16 v7; // ax
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  __m128i v11; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp+Fh] BYREF
  __int128 FsInformation; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+98h] [rbp+2Fh]

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v15 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v11 = *a1;
  v3 = (__int16 *)v11.m128i_i64[1];
  v4 = _mm_cvtsi128_si32(v11);
  v5 = v11.m128i_i64[1];
  FsInformation = 0LL;
  v11.m128i_i16[0] = 0;
  for ( i = v4; i; i -= 2 )
  {
    v7 = *v3;
    v3 = (__int16 *)(v5 + 2);
    v5 += 2LL;
    if ( v7 == 58 && *v3 == 92 )
    {
      LOWORD(v3) = (_WORD)v3 + 2;
      break;
    }
  }
  v11.m128i_i16[0] = (_WORD)v3 - v11.m128i_i16[4];
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  if ( result >= 0 )
  {
    v9 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
    NtClose(FileHandle);
    if ( v9 >= 0 )
    {
      result = 0;
      *a2 = *((_QWORD *)&FsInformation + 1) * (unsigned int)v15 * (unsigned __int64)HIDWORD(v15);
    }
    else
    {
      return v9;
    }
  }
  return result;
}
