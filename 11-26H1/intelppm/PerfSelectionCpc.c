/*
 * XREFs of PerfSelectionCpc @ 0x1400095C0
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x140002710 (PerformanceFromPercentage.c)
 *     TranslateActivityWindow @ 0x14000968C (TranslateActivityWindow.c)
 */

unsigned __int64 __fastcall PerfSelectionCpc(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned int v9; // r11d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 result; // rax

  v3 = PerformanceFromPercentage(a1, *(_DWORD *)(a3 + 16));
  v9 = v3;
  if ( v5[125] )
  {
    v4 = 0LL;
    if ( !*(_BYTE *)(v7 + 72) )
      v4 = v3;
    *(_DWORD *)(v7 + 48) = v4;
  }
  if ( v5[126] )
  {
    v10 = PerformanceFromPercentage((__int64)v5, *(_DWORD *)(v7 + 24));
    *(_DWORD *)(v7 + 52) = v10;
  }
  if ( v5[127] )
  {
    v11 = PerformanceFromPercentage((__int64)v5, *(_DWORD *)(v7 + 28));
    *(_DWORD *)(v7 + 56) = v11;
  }
  if ( v5[130] )
  {
    v12 = PerformanceFromPercentage((__int64)v5, *(_DWORD *)(v7 + 32));
    *(_DWORD *)(v7 + 60) = v12;
  }
  if ( v5[128] )
  {
    v4 = 255 * *(_DWORD *)(v7 + 36) / 0x64u;
    *(_DWORD *)(v7 + 64) = v4;
  }
  if ( *(_BYTE *)(v8 + 129) )
  {
    v13 = TranslateActivityWindow(*(unsigned int *)(v7 + 40), v4, v6, v7);
    *(_DWORD *)(v7 + 68) = v13;
  }
  v14 = v9;
  *(_QWORD *)v7 = v9;
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 88) )
    v14 = *(_QWORD *)(v8 + 88);
  result = (unsigned __int64)*(unsigned int *)(v8 + 96) * v14 / *(_QWORD *)(v8 + 48);
  *(_DWORD *)(v7 + 20) = result;
  return result;
}
