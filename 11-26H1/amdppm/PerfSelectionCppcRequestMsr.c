/*
 * XREFs of PerfSelectionCppcRequestMsr @ 0x140004B00
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x140001F30 (PerformanceFromPercentage.c)
 */

unsigned __int64 __fastcall PerfSelectionCppcRequestMsr(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // r9d
  unsigned int v8; // ebx
  unsigned __int8 v9; // al
  int v10; // r9d
  unsigned __int8 v11; // al
  int v12; // r9d
  __int64 v13; // rax
  unsigned __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp+8h]

  v3 = PerformanceFromPercentage(a1, *(_DWORD *)(a3 + 16));
  v7 = 0;
  v15 = 0LL;
  v8 = v3;
  if ( *(_BYTE *)(v4 + 125) && !*(_BYTE *)(v6 + 72) )
  {
    v7 = (unsigned __int8)v3 << 16;
    LODWORD(v15) = v7;
  }
  if ( *(_BYTE *)(v4 + 126) )
  {
    v9 = PerformanceFromPercentage(v4, *(_DWORD *)(v6 + 24));
    v7 = v10 | (v9 << 8);
    LODWORD(v15) = v7;
  }
  if ( *(_BYTE *)(v5 + 127) )
  {
    v11 = PerformanceFromPercentage(v5, *(_DWORD *)(v6 + 28));
    v7 = v12 | v11;
    LODWORD(v15) = v7;
  }
  if ( *(_BYTE *)(v5 + 128) )
    LODWORD(v15) = v7 | ((255 * *(_DWORD *)(v6 + 36) / 0x64u) << 24);
  *(_QWORD *)v6 = v15;
  v13 = v8;
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v5 + 88) )
    v13 = *(_QWORD *)(v5 + 88);
  result = (unsigned __int64)*(unsigned int *)(v5 + 96) * v13 / *(_QWORD *)(v5 + 48);
  *(_DWORD *)(v6 + 20) = result;
  return result;
}
