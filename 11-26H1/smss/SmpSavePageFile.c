/*
 * XREFs of SmpSavePageFile @ 0x140012AB8
 * Callers:
 *     SmpCheckForCrashDump @ 0x140011618 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFile @ 0x1400128DC (SmpSaveOldPageFile.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14000E174 (RtlStringCbCopyW.c)
 *     SmpCopyFile @ 0x14001196C (SmpCopyFile.c)
 *     SmpQuerySameVolume @ 0x1400125CC (SmpQuerySameVolume.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x140012C48 (SmpSetDumpSecurityAndAttributes.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpSavePageFile(HANDLE FileHandle, struct _UNICODE_STRING *a2, union _LARGE_INTEGER a3, char a4)
{
  union _LARGE_INTEGER v8; // r8
  NTSTATUS result; // eax
  const wchar_t *Buffer; // r8
  int v11; // r11d
  bool v12; // [rsp+30h] [rbp-D0h] BYREF
  union _LARGE_INTEGER FileInformation; // [rsp+38h] [rbp-C8h] BYREF
  union _LARGE_INTEGER v14; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK v16; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v17[4]; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+74h] [rbp-8Ch]
  __int64 v19; // [rsp+78h] [rbp-88h]
  int Length; // [rsp+80h] [rbp-80h]
  wchar_t pszDest[246]; // [rsp+84h] [rbp-7Ch] BYREF

  v18 = 0;
  memset_0(v17, 0, 0x1FCuLL);
  v16 = 0LL;
  v12 = 0;
  if ( SmpForceCopyDumpFile )
  {
    v8 = a3;
    return SmpCopyFile(FileHandle, a2, v8);
  }
  if ( !a3.QuadPart
    || (FileInformation = a3,
        IoStatusBlock = 0LL,
        result = NtSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation),
        result >= 0)
    && (v14 = a3,
        result = NtSetInformationFile(FileHandle, &IoStatusBlock, &v14, 8u, FileAllocationInformation),
        result >= 0) )
  {
    if ( (a4 & 1) == 0 )
    {
      result = SmpQuerySameVolume(FileHandle, a2, &v12);
      if ( result < 0 )
        return result;
      if ( !v12 )
      {
        v8.QuadPart = 0LL;
        return SmpCopyFile(FileHandle, a2, v8);
      }
    }
    Buffer = a2->Buffer;
    Length = a2->Length;
    v17[0] = 1;
    v19 = 0LL;
    result = RtlStringCbCopyW(pszDest, 0x1ECuLL, Buffer);
    if ( result >= 0 )
    {
      result = NtSetInformationFile(FileHandle, &v16, v17, v11 + 24, FileRenameInformation);
      if ( result >= 0 )
        return SmpSetDumpSecurityAndAttributes(FileHandle);
    }
  }
  return result;
}
