/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x140C012F0
 * Callers:
 *     PopRequestWrite @ 0x140C01804 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140C02C1C (PopWriteHiberPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopRecordHibernateDiagnosticInfo(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  v1 = 0;
  LOBYTE(PopHibernateDiagnosticInfo) = BYTE6(PpmIdlePolicyLock.Padding[3]);
  v3 = 0;
  qword_140F12128 = qword_140F10BF8;
  v4 = 0;
  qword_140F12130 = qword_140F10C00;
  qword_140F12138 = qword_140F10C20;
  qword_140F12140 = qword_140F10C10;
  qword_140F12148 = qword_140F10C08;
  qword_140F12150 = qword_140F10C28;
  qword_140F12158 = qword_140F10C18;
  qword_140F12160 = qword_140F10C30;
  dword_140F12168 = dword_140F10C38;
  result = (unsigned int)dword_140F10924;
  dword_140F12174 = dword_140F10924;
  for ( qword_140F1216C = 0LL; v4 < *(_DWORD *)(a1 + 288); HIDWORD(qword_140F1216C) = v3 )
  {
    v6 = v4++;
    v7 = 168 * v6;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 296) + 168 * v6 + 160);
    LODWORD(qword_140F1216C) = v1;
    result = *(_QWORD *)(a1 + 296);
    v3 += *(_DWORD *)(result + v7 + 164);
  }
  return result;
}
