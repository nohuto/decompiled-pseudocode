/*
 * XREFs of SmpGetDumpDestination @ 0x140011F7C
 * Callers:
 *     SmpCheckForCrashDump @ 0x140011618 (SmpCheckForCrashDump.c)
 * Callees:
 *     SmpCreateTempFile @ 0x140011D04 (SmpCreateTempFile.c)
 *     SmpEventWriteString @ 0x140011DFC (SmpEventWriteString.c)
 *     SmpQueryFileExists @ 0x1400122F4 (SmpQueryFileExists.c)
 *     SmpQueryFileSize @ 0x140012380 (SmpQueryFileSize.c)
 *     SmpQuerySameVolume @ 0x1400125CC (SmpQuerySameVolume.c)
 *     SmpQueryVolumeFreeSpace @ 0x140012780 (SmpQueryVolumeFreeSpace.c)
 *     SmpDeleteFile @ 0x140014588 (SmpDeleteFile.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpGetDumpDestination(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        struct _UNICODE_STRING *DestinationString)
{
  bool v7; // zf
  __int64 v9; // r15
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int TempFile; // ebx
  __m128i v14; // xmm1
  WCHAR *v15; // rbx
  unsigned __int16 v16; // si
  void *FileHandle; // [rsp+38h] [rbp-69h] BYREF
  struct _UNICODE_STRING v18; // [rsp+40h] [rbp-61h] BYREF
  __int64 v19; // [rsp+50h] [rbp-51h] BYREF
  struct _UNICODE_STRING v20; // [rsp+58h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-9h] BYREF
  WCHAR SourceString[4]; // [rsp+A8h] [rbp+7h] BYREF

  *(_QWORD *)&v18.Length = 0LL;
  v19 = 0LL;
  wcscpy(SourceString, L"?:\\");
  v7 = *(_DWORD *)(a1 + 3992) == 4;
  v9 = 0LL;
  v20 = 0LL;
  if ( !v7 )
  {
    result = SmpQuerySameVolume(a3);
    if ( (int)result < 0 )
      return result;
    if ( *(_DWORD *)(a2 + 16) )
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
      FileHandle = 0LL;
      ObjectAttributes.RootDirectory = 0LL;
      IoStatusBlock = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x60u) >= 0 )
      {
        SmpQueryFileSize(FileHandle, &v19);
        NtClose(FileHandle);
        v9 = v19;
      }
    }
  }
  v11 = *(_QWORD *)(a1 + 4000);
  result = SmpQueryVolumeFreeSpace(a2, &v18);
  if ( (int)result >= 0 )
  {
    if ( v11 >= v9 + *(_QWORD *)&v18.Length )
    {
      v14 = *(__m128i *)a2;
      v15 = *(WCHAR **)(a2 + 8);
      v18 = *(struct _UNICODE_STRING *)a2;
      if ( v15 )
      {
        v16 = _mm_cvtsi128_si32(v14);
        if ( v16 >= 8u && RtlCompareMemory(v15, L"\\??\\", 8uLL) == 8 )
        {
          v18.Buffer = v15 + 4;
          v18.Length = v16 - 8;
        }
      }
      SmpEventWriteString(v12, &v18.Length);
      TempFile = -1073741670;
    }
    else
    {
      RtlInitUnicodeString(&v20, SourceString);
      SourceString[0] = *(_WORD *)(*(_QWORD *)(a4 + 8) + 8LL);
      TempFile = SmpCreateTempFile((__int64)&v20, (__int64)L"DUMP", DestinationString);
    }
    *(_DWORD *)(a2 + 20) = 1;
    return TempFile;
  }
  return result;
}
