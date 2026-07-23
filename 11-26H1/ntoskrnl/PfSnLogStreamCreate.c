/*
 * XREFs of PfSnLogStreamCreate @ 0x1409D2DB8
 * Callers:
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PfSnTraceGetLogEntry @ 0x140265840 (PfSnTraceGetLogEntry.c)
 *     PfSnReferenceProcessTrace @ 0x1403769CC (PfSnReferenceProcessTrace.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlUpcaseUnicodeString @ 0x1409D2F80 (RtlUpcaseUnicodeString.c)
 *     PfSnFailProcessTrace @ 0x1409D3078 (PfSnFailProcessTrace.c)
 */

__int64 __fastcall PfSnLogStreamCreate(__int64 a1)
{
  unsigned int v1; // r15d
  unsigned int v2; // r12d
  unsigned int v4; // eax
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // r8
  unsigned int v12; // ebx
  wchar_t *v13; // r14
  int v14; // esi
  int v15; // edi
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  wchar_t *v19; // rcx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v24; // [rsp+88h] [rbp+48h] BYREF

  v1 = 0;
  v2 = *(unsigned __int16 *)(a1 + 34);
  v4 = (unsigned __int16)*(_DWORD *)(a1 + 32);
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v24 = 0LL;
  if ( v2 <= v4 )
    return (unsigned int)-1073741637;
  v5 = v2 - v4;
  v6 = ((unsigned __int64)(unsigned int)(2 * v5 + 70) + 15) >> 4;
  v7 = PfSnReferenceProcessTrace(*(_QWORD *)a1);
  v8 = (struct _EX_RUNDOWN_REF *)v7;
  if ( !v7 )
    return (unsigned int)-1073741446;
  if ( (int)PfSnTraceGetLogEntry(v7, v6, &v24) < 0 )
  {
    PfSnFailProcessTrace(v8);
    ExReleaseRundownProtection_0(v8 + 45);
    return (unsigned int)-1073741446;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = (unsigned int)(v6 - 1);
  v11 = v24;
  v12 = 2 * v5 + 54;
  *(_OWORD *)v24 = 0LL;
  *v11 = (16 * v10) | 5;
  v11[1] = v9;
  v13 = (wchar_t *)(((unsigned __int64)v11 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
  v14 = *(_DWORD *)(a1 + 44);
  v15 = *(_DWORD *)(a1 + 40);
  memset_0(v13, 0, v12);
  v16 = *(_DWORD *)v13 & 0xFFFFFFF8;
  *((_DWORD *)v13 + 1) = v15;
  *((_DWORD *)v13 + 2) = v14;
  DestinationString.Length = 0;
  *(_DWORD *)v13 = v16 ^ (v16 ^ (8 * v12)) & 0x7FFFFFF8;
  DestinationString.Buffer = v13 + 22;
  v17 = (unsigned __int16)*(_DWORD *)(a1 + 32);
  v18 = *(_QWORD *)(a1 + 24);
  DestinationString.MaximumLength = 2 * v5;
  SourceString.Length = 2 * v5;
  SourceString.MaximumLength = 2 * v5;
  v19 = (wchar_t *)(v18 + 2 * v17);
  *((_QWORD *)v13 + 3) = *(_QWORD *)(a1 + 8);
  *((_DWORD *)v13 + 8) = *(_DWORD *)(a1 + 48);
  *((_QWORD *)v13 + 2) = *(_QWORD *)(a1 + 16);
  LODWORD(v18) = *((_DWORD *)v13 + 10);
  SourceString.Buffer = v19;
  LODWORD(v19) = v18 ^ (*(_DWORD *)(a1 + 36) ^ v18) & 1;
  *((_DWORD *)v13 + 10) = (_DWORD)v19;
  *((_DWORD *)v13 + 10) = (unsigned int)v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(2 * *(_DWORD *)(a1 + 36))) & 4;
  v13[21] = v5;
  RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  v13[v5 + 22] = 0;
  ExReleaseRundownProtection_0(v8 + 45);
  return v1;
}
