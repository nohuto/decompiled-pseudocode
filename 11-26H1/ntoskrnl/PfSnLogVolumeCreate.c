/*
 * XREFs of PfSnLogVolumeCreate @ 0x1409D3F78
 * Callers:
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PfSnGetNLLogEntry @ 0x1409D2CCC (PfSnGetNLLogEntry.c)
 *     PfSnLogHelper @ 0x1409D2D44 (PfSnLogHelper.c)
 *     RtlUpcaseUnicodeString @ 0x1409D2F80 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogVolumeCreate(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v4; // rcx
  int v5; // r14d
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // r15
  __int64 v8; // r8
  __int64 *v9; // rcx
  int *NLLogEntry; // rbx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v17; // [rsp+70h] [rbp+20h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 30);
  v2 = 0;
  v4 = *(_QWORD *)a1;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v5 = 2 * v1;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v17 = 0LL;
  v6 = (unsigned int)(2 * v1 + 97) >> 4;
  v7 = PfSnLogHelper(v4, v6, &v17);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v17;
    *(_OWORD *)v17 = 0LL;
    *v9 = (16LL * (v6 - 1)) | 5;
    v9[1] = v8;
    NLLogEntry = PfSnGetNLLogEntry((__int64)v9, 2u, v5 + 66, *(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 56));
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v5;
    DestinationString.Buffer = (wchar_t *)(NLLogEntry + 14);
    SourceString.Buffer = *(wchar_t **)(a1 + 40);
    *((_QWORD *)NLLogEntry + 3) = *(_QWORD *)(a1 + 8);
    v11 = NLLogEntry[9];
    v12 = (*(_DWORD *)(a1 + 48) ^ v11) & 0xF;
    SourceString.Length = v5;
    v13 = v11 ^ v12;
    SourceString.MaximumLength = v5;
    NLLogEntry[9] = v13;
    NLLogEntry[9] = v13 ^ (*(_DWORD *)(a1 + 48) ^ v13) & 0xF0;
    *((_QWORD *)NLLogEntry + 2) = *(_QWORD *)(a1 + 16);
    NLLogEntry[8] = *(_DWORD *)(a1 + 24);
    *((_WORD *)NLLogEntry + 20) = v5;
    *((_WORD *)NLLogEntry + 21) = v5;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    *((_WORD *)NLLogEntry + *(unsigned __int16 *)(a1 + 30) + 28) = 0;
    ExReleaseRundownProtection_0(v7 + 45);
  }
  else
  {
    return (unsigned int)-1073741446;
  }
  return v2;
}
