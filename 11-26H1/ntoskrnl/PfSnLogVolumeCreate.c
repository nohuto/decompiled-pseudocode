/*
 * XREFs of PfSnLogVolumeCreate @ 0x1409E8C8C
 * Callers:
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PfSnGetNLLogEntry @ 0x1409E98AC (PfSnGetNLLogEntry.c)
 *     PfSnLogHelper @ 0x1409E9924 (PfSnLogHelper.c)
 *     RtlUpcaseUnicodeString @ 0x1409E9B60 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogVolumeCreate(__int64 *a1)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v4; // rcx
  int v5; // r14d
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // r15
  __int64 v8; // r8
  __int64 *v9; // rcx
  __int64 NLLogEntry; // rbx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v17; // [rsp+70h] [rbp+20h] BYREF

  v1 = *((unsigned __int16 *)a1 + 15);
  v2 = 0;
  v4 = *a1;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v5 = 2 * v1;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v17 = 0LL;
  v6 = (unsigned int)(2 * v1 + 97) >> 4;
  v7 = (struct _EX_RUNDOWN_REF *)PfSnLogHelper(v4, v6, &v17);
  if ( v7 )
  {
    v8 = a1[1];
    v9 = v17;
    *(_OWORD *)v17 = 0LL;
    *v9 = (16LL * (v6 - 1)) | 5;
    v9[1] = v8;
    NLLogEntry = PfSnGetNLLogEntry(v9, 2LL, (unsigned int)(v5 + 66), *((unsigned int *)a1 + 13), *((_DWORD *)a1 + 14));
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v5;
    DestinationString.Buffer = (wchar_t *)(NLLogEntry + 56);
    SourceString.Buffer = (wchar_t *)a1[5];
    *(_QWORD *)(NLLogEntry + 24) = a1[1];
    v11 = *(_DWORD *)(NLLogEntry + 36);
    v12 = (*((_DWORD *)a1 + 12) ^ v11) & 0xF;
    SourceString.Length = v5;
    v13 = v11 ^ v12;
    SourceString.MaximumLength = v5;
    *(_DWORD *)(NLLogEntry + 36) = v13;
    *(_DWORD *)(NLLogEntry + 36) = v13 ^ (*((_DWORD *)a1 + 12) ^ v13) & 0xF0;
    *(_QWORD *)(NLLogEntry + 16) = a1[2];
    *(_DWORD *)(NLLogEntry + 32) = *((_DWORD *)a1 + 6);
    *(_WORD *)(NLLogEntry + 40) = v5;
    *(_WORD *)(NLLogEntry + 42) = v5;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    *(_WORD *)(NLLogEntry + 2LL * *((unsigned __int16 *)a1 + 15) + 56) = 0;
    ExReleaseRundownProtection_0(v7 + 45);
  }
  else
  {
    return (unsigned int)-1073741446;
  }
  return v2;
}
