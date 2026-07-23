/*
 * XREFs of KiIntSteerComputeRelevanceForTriageDumps @ 0x1405FA2B8
 * Callers:
 *     KiIntSteerCallbackRecordTriageCallbackInterruptObject @ 0x1405FA1F4 (KiIntSteerCallbackRecordTriageCallbackInterruptObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerComputeRelevanceForTriageDumps(__int64 a1)
{
  unsigned int *v1; // r8
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rdx
  int v19; // eax

  v1 = (unsigned int *)KiProcessorBlock[*(unsigned int *)(a1 + 96)];
  if ( v1[8443] - *(_DWORD *)(a1 + 232) > 1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 248);
  v3 = *(_QWORD *)(a1 + 264);
  v4 = *(_QWORD *)(a1 + 240);
  v5 = *(_QWORD *)(a1 + 256);
  v6 = KeMaximumIncrement * v1[8426] / 0xA;
  v7 = v6 * v1[17];
  v8 = v6 >> 2;
  v9 = v6 >> 9;
  v10 = (unsigned __int64)(3 * v7) >> 2;
  v11 = (unsigned __int64)(3 * v7) >> 5;
  if ( v2 < v9 && v4 < v11 && v3 < v9 && v5 < v11 )
    return 0LL;
  _BitScanReverse64(&v12, v10);
  v13 = 63 - v12;
  _BitScanReverse64(&v12, v8);
  v14 = 63 - v12;
  v15 = v8;
  if ( v2 <= v8 )
    v15 = v2;
  v16 = v15 << v14 >> 34;
  if ( v3 <= v8 )
    v8 = v3;
  v17 = (v8 << v14 >> 36) + v16;
  v18 = v10;
  if ( v5 <= v10 )
    v18 = v5;
  v19 = (v18 << v13 >> 36) + v17;
  if ( v4 <= v10 )
    v10 = v4;
  return (unsigned int)(v10 << v13 >> 34) + v19;
}
