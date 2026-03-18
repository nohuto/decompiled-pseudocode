/*
 * XREFs of VidSchiCreateNode @ 0x1400C3B00
 * Callers:
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x14002E870 (VidSchiInterlockedInsertTailList.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiCreateNode(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 Pool2; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  BOOL v19; // eax
  unsigned int v20; // r9d
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r9d
  int v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  __int64 v35; // r9
  unsigned int v36; // ecx
  __int64 v37; // [rsp+80h] [rbp+8h]

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = 208 * *(_DWORD *)(a1 + 2900) + 16544;
  if ( v8 < 0x4170 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3117;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(64LL, v8, 828467542LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3127;
    return 0LL;
  }
  *(_DWORD *)Pool2 = 828467542;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_WORD *)(Pool2 + 4) = v6;
  *(_WORD *)(Pool2 + 6) = v5;
  *(_WORD *)(Pool2 + 8) = v7;
  *(_QWORD *)(Pool2 + 1752) = 0LL;
  v13 = 32LL;
  *(_QWORD *)(Pool2 + 1760) = 0LL;
  if ( (_WORD)v7 == 0x7FFF )
  {
    *(_DWORD *)(Pool2 + 12) |= 0x40u;
  }
  else
  {
    v19 = *(_DWORD *)(a1 + 88) == 1
       || *(_WORD *)(352LL * (unsigned __int16)v5 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 3032LL) + 2) == (_WORD)v7;
    v20 = v19 | *(_DWORD *)(v12 + 12) & 0xFFFFFFFE;
    v21 = 0;
    v37 = *(_QWORD *)(a1 + 16);
    v22 = *(_QWORD *)(v37 + 3032);
    v23 = 352LL * (unsigned __int16)v5;
    if ( (*(_DWORD *)(v23 + v22 + 16) & 0x20) != 0 )
      LOBYTE(v21) = *(_DWORD *)(v23 + v22 + 24) == (unsigned __int16)v7;
    v24 = 74 * v7;
    v25 = 4 * v21;
    v26 = *(_QWORD *)(v22 + 352 * v5 + 32);
    v27 = v25 | v20 & 0xFFFFFFFB;
    if ( v26 )
      v28 = *(_DWORD *)(v24 + v26 + 68) & 1;
    else
      v28 = 0;
    v29 = v27 & 0xFFFFFFFD | (2 * v28);
    if ( v28 )
    {
      if ( v26 )
        v30 = (*(_DWORD *)(v24 + v26 + 68) >> 1) & 1;
      else
        v30 = 0;
      v31 = v29 & 0xFFFFFFDF | (32 * v30);
      if ( v26 )
        v32 = (*(_DWORD *)(v24 + v26 + 68) >> 3) & 1;
      else
        v32 = 0;
      v29 = v31 & 0xFFFFFFF7 | (8 * v32);
      if ( v26 )
        v33 = *(unsigned __int16 *)(v24 + v26 + 70);
      else
        v33 = 0;
      *(_DWORD *)(v12 + 1740) = v33;
      if ( !v33 )
        *(_DWORD *)(v12 + 1740) = 0xFFFF;
      *(_DWORD *)(a1 + 2824) &= ~2u;
      *(_WORD *)(a1 + 64) = 257;
    }
    v34 = 0;
    v35 = *(_QWORD *)(352 * v5 + *(_QWORD *)(v37 + 3032) + 32);
    if ( v35 )
      LOBYTE(v34) = *(_BYTE *)(v24 + v35 + 72) != 0;
    v36 = v29 & 0xFFFFFFEF | (16 * v34);
    *(_DWORD *)(v12 + 12) = v36;
    if ( (v36 & 1) != 0 )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((v36 & 2) != 0) != *(_BYTE *)(a1 + 63) || ((v36 & 0x20) != 0) != *(_BYTE *)(a1 + 66) )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 20480LL, v5, 0LL, 0LL);
          WdLogGlobalForLineNumber = 916;
          JUMPOUT(0x1400C3F7BLL);
        }
      }
      else
      {
        *(_BYTE *)(a1 + 63) = (v36 & 2) != 0;
        *(_BYTE *)(a1 + 66) = (v36 & 0x20) != 0;
      }
    }
  }
  KeInitializeEvent((PRKEVENT)(v12 + 16496), SynchronizationEvent, 0);
  v14 = (_QWORD *)(v12 + 2184);
  do
  {
    v14[1] = v14;
    *v14 = v14;
    v14 += 2;
    --v13;
  }
  while ( v13 );
  *(_QWORD *)(v12 + 2704) = v12 + 2696;
  v15 = v12 + 240;
  *(_QWORD *)(v12 + 2696) = v12 + 2696;
  v16 = 3LL;
  *(_QWORD *)(v12 + 2720) = v12 + 2712;
  *(_QWORD *)(v12 + 2712) = v12 + 2712;
  *(_QWORD *)(v12 + 2736) = v12 + 2728;
  *(_QWORD *)(v12 + 2728) = v12 + 2728;
  *(_QWORD *)(v12 + 2752) = v12 + 2744;
  *(_QWORD *)(v12 + 2744) = v12 + 2744;
  *(_QWORD *)(v12 + 2768) = v12 + 2760;
  *(_QWORD *)(v12 + 2760) = v12 + 2760;
  do
  {
    *(_OWORD *)v15 = 0LL;
    *(_OWORD *)(v15 + 16) = 0LL;
    *(_OWORD *)(v15 + 32) = 0LL;
    *(_QWORD *)(v15 + 48) = 0LL;
    KeInitializeEvent((PRKEVENT)v15, SynchronizationEvent, 0);
    v15 += 56LL;
    --v16;
  }
  while ( v16 );
  *(_QWORD *)(v12 + 416) = v12 + 408;
  *(_QWORD *)(v12 + 408) = v12 + 408;
  *(_QWORD *)(v12 + 432) = v12 + 424;
  *(_QWORD *)(v12 + 424) = v12 + 424;
  *(_QWORD *)(v12 + 1720) = v12 + 1712;
  *(_QWORD *)(v12 + 1712) = v12 + 1712;
  *(_QWORD *)(v12 + 16536) = v12 + 16528;
  *(_QWORD *)(v12 + 16528) = v12 + 16528;
  if ( *(_DWORD *)(a1 + 2900) )
  {
    do
    {
      v17 = 208LL * (unsigned int)v16;
      *(_DWORD *)(v17 + v12 + 16544) = 912353622;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 2024), v12 + 16528, (_QWORD *)(v17 + v12 + 16560), 0LL);
      LODWORD(v16) = v16 + 1;
    }
    while ( (unsigned int)v16 < *(_DWORD *)(a1 + 2900) );
  }
  v18 = *(_DWORD **)(a1 + 2848);
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 2888) )
    v18 += v6;
  *(_DWORD *)(v12 + 3000) = *v18;
  *(_BYTE *)(v12 + 16524) = 1;
  *(_DWORD *)(v12 + 16520) = -1;
  *(_QWORD *)(v12 + 3056) = VidSchiNodePerfTracingThread;
  result = v12;
  *(_QWORD *)(v12 + 3064) = v12;
  *(_QWORD *)(v12 + 3040) = 0LL;
  return result;
}
