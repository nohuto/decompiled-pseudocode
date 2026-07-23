/*
 * XREFs of RtlpGetVolumeHandle @ 0x18010D9FC
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18010D980 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18015AC4C (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180040C14 (StringCbPrintfW.c)
 *     ZwCreateFile @ 0x18015F8E0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, HANDLE *a2)
{
  __int64 v2; // r9
  wchar_t *v4; // rax
  __int64 v5; // rcx
  NTSTATUS result; // eax
  HANDLE FileHandle; // [rsp+60h] [rbp-29h] BYREF
  __int128 v8; // [rsp+68h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+1Fh] BYREF
  wchar_t pszDest[12]; // [rsp+B8h] [rbp+2Fh] BYREF

  v2 = *a1;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
  v4 = pszDest;
  v8 = 0LL;
  v5 = 0x7FFFLL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v5 )
      goto LABEL_6;
  }
  LOWORD(v8) = -2 - 2 * v5;
  WORD1(v8) = -2 * v5;
  *((_QWORD *)&v8 + 1) = pszDest;
LABEL_6:
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( result >= 0 )
  {
    *a2 = FileHandle;
    return 0;
  }
  return result;
}
