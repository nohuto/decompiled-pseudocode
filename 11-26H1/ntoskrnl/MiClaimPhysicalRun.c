/*
 * XREFs of MiClaimPhysicalRun @ 0x140290C60
 * Callers:
 *     MiFindContiguousPagesInOptimizedCandidates @ 0x14028E0B8 (MiFindContiguousPagesInOptimizedCandidates.c)
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 *     MiScrubNode @ 0x140AC8020 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140B705C4 (MmRelocatePfnList.c)
 * Callees:
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiClaimPhysicalRun(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 *a9,
        _DWORD *a10)
{
  int v10; // r12d
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // r13
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v20; // r15
  _QWORD v21[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h]
  int v23; // [rsp+38h] [rbp-50h]
  int v24; // [rsp+3Ch] [rbp-4Ch]
  __int64 v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]
  __int64 v27; // [rsp+50h] [rbp-38h]
  __int64 v28; // [rsp+58h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp+50h]

  v10 = 0;
  v13 = a2;
  v28 = a8;
  v21[1] = a5;
  v26 = 0LL;
  v21[0] = a1;
  v23 = a6;
  v22 = a3;
  v24 = a7;
  *a10 = 0;
  v27 = a4;
  if ( a9 )
    v25 = *a9;
  else
    v25 = -1LL;
  v29 = a3;
  v14 = 48 * a2 - 0x220000000000LL;
  v15 = a2 + a3;
  v16 = v14 + 48 * a3;
  while ( 1 )
  {
    v17 = MiTradePage(v21, v13, a10);
    if ( v17 )
      break;
    v17 = 1LL;
    if ( v26 > 1 )
    {
      if ( v13 == (v13 & ~(v26 - 1)) )
        v17 = v26;
      else
        v17 = (~(v26 - 1) & (v13 + v26 - 1)) - v13;
    }
    if ( !v10 )
    {
      if ( v26 )
        v29 = v15 - (v13 & ~(v26 - 1));
      v10 = 1;
    }
    if ( (a6 & 0x2000) == 0 )
    {
      v18 = v22;
LABEL_18:
      _InterlockedIncrement(&dword_140EF91CC);
      v20 = a3 - v18;
      _InterlockedExchange64(&qword_140EF91D0, (__int64)(v14 + 0x220000000000LL) / 48);
      if ( a8 )
        *(_DWORD *)(a8 + 40) += -4096 * v20;
      for ( ; v20; --v20 )
      {
        v14 -= 48LL;
        MiReleaseFreshPage(v14);
      }
      return v29;
    }
    if ( v17 >= v15 - v13 )
      return v29;
    v18 = v22;
LABEL_6:
    v25 = -1LL;
    v13 += v17;
    v14 += 48 * v17;
    if ( v14 >= v16 )
    {
      if ( (a6 & 0x2000) == 0 )
        goto LABEL_18;
      return v29;
    }
  }
  v18 = v22 - v17;
  v22 -= v17;
  if ( v22 )
    goto LABEL_6;
  _InterlockedIncrement(&dword_140EF90E8);
  if ( a9 )
    *a9 = v25;
  return 0LL;
}
