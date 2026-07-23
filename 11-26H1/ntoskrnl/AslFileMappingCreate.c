/*
 * XREFs of AslFileMappingCreate @ 0x140A37E7C
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140780CF0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbOpenDatabaseEx @ 0x140887068 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x140888DB0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140889950 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckKObject @ 0x1409D8348 (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x140A37C6C (SdbGetDatabaseMatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlFileMapInitializeByNtPath @ 0x1404FBA70 (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     AslFileNotFound @ 0x14077E56C (AslFileNotFound.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFileMappingDelete @ 0x1409D772C (AslFileMappingDelete.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     AslStringDuplicate @ 0x1409D8BA8 (AslStringDuplicate.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     AslpFileMappingGetFileKind @ 0x140B40C0C (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingCreate(__int64 *a1, WCHAR *a2, void *a3, __int64 a4, __int64 a5)
{
  _QWORD *v10; // rax
  __int64 v11; // rdi
  int v12; // ebx
  void *v13; // rax
  HANDLE *v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]

  v22 = 0LL;
  FileInformation = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = (_QWORD *)AslAlloc();
  v11 = (__int64)v10;
  if ( v10 )
  {
    v12 = AslStringDuplicate(v10, a2);
    if ( v12 >= 0 )
    {
      v13 = 0LL;
      if ( a3 != (void *)-1LL )
        v13 = a3;
      v14 = (HANDLE *)(v11 + 8);
      if ( v13 )
      {
        *(_OWORD *)v14 = 0LL;
        *(_OWORD *)(v11 + 24) = 0LL;
        *(_OWORD *)(v11 + 40) = 0LL;
        *(_QWORD *)(v11 + 56) = 0LL;
        *v14 = v13;
      }
      else
      {
        v15 = RtlFileMapInitializeByNtPath(v11 + 8, &DestinationString);
        v12 = v15;
        if ( v15 < 0 )
        {
          if ( !AslFileNotFound(v15) )
          {
            v16 = (unsigned int)(v12 + 1073741805);
            if ( (unsigned int)v16 <= 0x30 && (v17 = 0x1000000008001LL, _bittest64(&v17, v16)) || v12 == -1073741638 )
              v18 = 3LL;
            else
              v18 = 1LL;
            AslLogCallPrintf(v18, (__int64)"AslFileMappingCreate");
          }
          goto LABEL_16;
        }
      }
      v12 = ZwQueryInformationFile(*v14, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v12 >= 0 )
      {
        if ( a4 )
        {
          *(_QWORD *)(v11 + 40) = a5;
          *(_BYTE *)(v11 + 59) = 1;
          *(_QWORD *)(v11 + 32) = a4;
        }
        *(_QWORD *)(v11 + 24) = *((_QWORD *)&FileInformation + 1);
        if ( a4 )
        {
          if ( !*((_QWORD *)&FileInformation + 1) )
          {
            AslLogCallPrintf(1LL, (__int64)"AslFileMappingCreate");
            v12 = -1073741811;
            goto LABEL_16;
          }
          if ( (int)AslpFileMappingGetFileKind(v11 + 8, v11 + 64) < 0 )
          {
            AslLogCallPrintf(1LL, (__int64)"AslFileMappingCreate");
            *(_DWORD *)(v11 + 64) = 3;
          }
        }
        else
        {
          *(_DWORD *)(v11 + 64) = (*((_QWORD *)&FileInformation + 1) != 0LL) + 1;
        }
        *a1 = v11;
        v12 = 0;
        goto LABEL_7;
      }
    }
    AslLogCallPrintf(1LL, (__int64)"AslFileMappingCreate");
LABEL_16:
    AslFileMappingDelete(v11);
    goto LABEL_7;
  }
  v12 = -1073741801;
LABEL_7:
  if ( DestinationString.Buffer != a2 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v12;
}
