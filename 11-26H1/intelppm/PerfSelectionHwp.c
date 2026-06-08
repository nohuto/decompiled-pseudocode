/*
 * XREFs of PerfSelectionHwp @ 0x140005650
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x140002710 (PerformanceFromPercentage.c)
 *     TranslateActivityWindow @ 0x14000968C (TranslateActivityWindow.c)
 */

unsigned __int64 __fastcall PerfSelectionHwp(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r9
  unsigned int v10; // ebx
  unsigned __int8 v11; // al
  int v12; // r9d
  unsigned int v13; // ecx
  unsigned __int8 v14; // al
  int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned __int64 result; // rax
  unsigned int v20; // r9d
  char v21; // cl
  __int64 v22; // [rsp+30h] [rbp+8h]
  unsigned __int64 v23; // [rsp+40h] [rbp+18h]

  LODWORD(v23) = 0;
  v3 = PerformanceFromPercentage(a1, *(_DWORD *)(a3 + 16));
  v9 = 0LL;
  v22 = 0LL;
  v10 = v3;
  if ( *(_BYTE *)(v5 + 125) && !*(_BYTE *)(v8 + 72) )
  {
    v9 = (unsigned __int8)v3 << 16;
    LODWORD(v22) = (unsigned __int8)v3 << 16;
  }
  if ( *(_BYTE *)(v5 + 126) )
  {
    v11 = PerformanceFromPercentage(v5, *(_DWORD *)(v8 + 24));
    v13 = v12 | v11;
    v9 = v13;
    LODWORD(v22) = v13;
  }
  if ( *(_BYTE *)(v7 + 127) )
  {
    v14 = PerformanceFromPercentage(v7, *(_DWORD *)(v8 + 28));
    v16 = v15 | (v14 << 8);
    v9 = v16;
    LODWORD(v22) = v16;
  }
  if ( *(_BYTE *)(v7 + 128) )
  {
    v17 = 255 * *(_DWORD *)(v8 + 36);
    v4 = (unsigned int)v9 | ((v17 / 0x64) << 24);
    LODWORD(v22) = v9 | ((v17 / 0x64) << 24);
  }
  if ( *(_BYTE *)(v7 + 129) )
    HIDWORD(v22) = TranslateActivityWindow(*(unsigned int *)(v8 + 40), v4, v6, v9) & 0x3FF;
  *(_QWORD *)v8 = v22;
  v18 = v10;
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v7 + 88) )
    v18 = *(_QWORD *)(v7 + 88);
  result = (unsigned __int64)*(unsigned int *)(v7 + 96) * v18 / *(_QWORD *)(v7 + 48);
  *(_DWORD *)(v8 + 20) = result;
  if ( *(_BYTE *)(v7 + 1348) )
  {
    v20 = *(_DWORD *)(v7 + 1384);
    v21 = v20 - 1;
    if ( v20 - 1 >= (100 - *(_DWORD *)(v8 + 44)) / (0x64 / v20) )
      v21 = (100 - *(_DWORD *)(v8 + 44)) / (0x64 / v20);
    HIDWORD(v23) = v21 & 3;
    result = v23;
    *(_QWORD *)(v8 + 8) = v23;
  }
  return result;
}
