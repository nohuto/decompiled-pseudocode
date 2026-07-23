/*
 * XREFs of MiMakeSystemCachePtesValid @ 0x1402C7F80
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402CBF70 (MiReleaseCachedPageLocks.c)
 * Callees:
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402C7EE0 (MiEmptyDeferredWorkingSetEntries.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiMakeSystemCachePtesValid(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  unsigned __int64 i; // r11
  _QWORD *v7; // r14
  __int64 j; // r9
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 k; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rcx
  signed __int64 *v22; // r15
  __int64 v23; // r13
  unsigned __int64 v24; // rbx
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 ValidPte; // rcx
  __int64 v29; // r14
  unsigned __int64 v30; // rbx
  char v31; // cl
  __int64 v32; // rbp
  int v33; // eax
  __int16 v34; // ax
  char v35; // al
  bool v36; // zf
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rbx
  __int64 v40; // r8
  unsigned int v41; // ebp
  char v42; // al
  char v43; // cl
  char v44; // al
  unsigned __int64 m; // rax
  unsigned __int64 *v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // [rsp+50h] [rbp-58h]
  unsigned __int64 v49; // [rsp+B0h] [rbp+8h]
  __int64 v50; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v51; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v52; // [rsp+C8h] [rbp+20h]

  v48 = *(_QWORD *)(a1 + 96);
  if ( !v48 )
    return;
  v2 = 0LL;
  do
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = 0LL;
    v5 = *(_QWORD *)(a1 + 88);
    if ( v2 < v3 )
      v4 = v2;
    for ( i = v3 - 1; ; i = v10 - 1 )
    {
      if ( i - v4 == -1LL )
      {
LABEL_11:
        v9 = -1LL;
        v50 = -1LL;
        goto LABEL_12;
      }
      v7 = (_QWORD *)(v5 + 8 * (v4 >> 6));
      for ( j = ~*v7 | ((1LL << v4) - 1); j == -1; j = ~*v7 )
      {
        if ( (unsigned __int64)++v7 > v5 + 8 * (i >> 6) )
          goto LABEL_11;
      }
      _BitScanForward64(&v11, ~j);
      v9 = (((__int64)v7 - v5) >> 3 << 6) + v11;
      v50 = v9;
      if ( v9 <= i )
        break;
      v9 = -1LL;
      v50 = -1LL;
LABEL_12:
      if ( !v4 )
        goto LABEL_18;
      v10 = v2 + 1;
      v4 = 0LL;
      if ( v2 + 1 > v3 )
        v10 = *(_QWORD *)(a1 + 80);
    }
    if ( v9 == -1LL )
      goto LABEL_12;
LABEL_18:
    if ( v9 < v2 || v9 == -1LL )
      break;
    v12 = *(_QWORD *)(a1 + 80);
    if ( v12 <= v9 )
    {
LABEL_74:
      v49 = 0LL;
      goto LABEL_25;
    }
    v13 = v5 + 8 * ((v12 - 1) >> 6);
    v14 = *(_QWORD *)(v5 + 8 * (v9 >> 6)) | ((1LL << v9) - 1);
    v15 = v5 + 8 * (v9 >> 6);
    for ( k = v15 + 8; ; k += 8LL )
    {
      v17 = ~v14;
      if ( v17 )
        break;
      if ( k > v13 )
        goto LABEL_74;
      v14 = *(_QWORD *)(v15 + 8);
      v15 += 8LL;
    }
    _BitScanForward64((unsigned __int64 *)&v18, v17);
    v19 = (unsigned int)v18 + ((v15 - v5) >> 3 << 6);
    if ( v19 > v12 )
    {
      v49 = 0LL;
      goto LABEL_25;
    }
    for ( m = ~(v17 | ((1LL << v18) - 1)); !m; m = *v46 )
    {
      v46 = (unsigned __int64 *)(v15 + 8);
      if ( v15 + 8 > v13 )
      {
        m = 64LL;
        goto LABEL_76;
      }
      v15 += 8LL;
    }
    _BitScanForward64(&m, m);
LABEL_76:
    v47 = ((v15 - v5) >> 3 << 6) + m;
    if ( v47 > v12 )
      v47 = *(_QWORD *)(a1 + 80);
    v49 = v47 - v19;
    if ( v47 == v19 )
LABEL_25:
      v19 = *(_QWORD *)(a1 + 80);
    v20 = v19 - v9;
    v21 = v9;
    v52 = v20;
    v51 = v9;
    v22 = (signed __int64 *)(*(_QWORD *)(a1 + 136) + 8 * v9);
    if ( !v20 )
      goto LABEL_46;
    v23 = *(_QWORD *)(a1 + 40);
    while ( 2 )
    {
      v24 = v21;
      v25 = *(_QWORD *)(a1 + 16);
      while ( 1 )
      {
        v26 = *(unsigned int *)(v25 + 44);
        v27 = *(_QWORD *)(v25 + 8);
        if ( v25 == *(_QWORD *)(a1 + 16) )
        {
          v27 = *(_QWORD *)(a1 + 144);
          v26 -= (v27 - *(_QWORD *)(v25 + 8)) >> 3;
        }
        if ( v24 < v26 )
          break;
        v25 = *(_QWORD *)(v25 + 16);
        v24 -= v26;
      }
      ValidPte = *(_QWORD *)(v27 + 8 * v24);
      v29 = (ValidPte >> 12) & 0xFFFFFFFFFFLL;
      if ( (*v22 & 8) != 0 )
      {
        ValidPte = MiMakeValidPte((unsigned __int64)v22, v29, 536870913);
      }
      else if ( (*(_DWORD *)(a1 + 64) & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
      {
        ValidPte |= 0x42uLL;
      }
      v30 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) & 1) << 8);
      v31 = *(_BYTE *)(a1 + 53);
      v32 = 48 * v29 - 0x220000000000LL;
      if ( (v31 & 9) != 8 || (v31 & 4) != 0 )
      {
        v35 = 0;
      }
      else
      {
        v33 = *(unsigned __int16 *)(a1 + 50);
        if ( (_WORD)v33 )
        {
          if ( v33 + *(unsigned __int16 *)(a1 + 48) != (((unsigned int)v22 >> 3) & 0x1FF) )
            goto LABEL_40;
          if ( *(__int64 *)(v32 + 40) < 0 )
          {
            if ( (*(_BYTE *)(a1 + 53) & 2) != 0 )
LABEL_40:
              MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 40));
          }
          else if ( (*(_BYTE *)(a1 + 53) & 2) == 0 )
          {
            goto LABEL_40;
          }
        }
        v34 = *(_WORD *)(a1 + 50);
        if ( v34 )
        {
          *(_WORD *)(a1 + 50) = v34 + 1;
        }
        else
        {
          *(_WORD *)(a1 + 50) = 1;
          *(_WORD *)(a1 + 48) = ((unsigned int)v22 >> 3) & 0x1FF;
          v42 = *(_BYTE *)(a1 + 53);
          v43 = v42 & 0xFD;
          v44 = v42 | 2;
          if ( *(__int64 *)(v32 + 40) >= 0 )
            v43 = v44;
          *(_BYTE *)(a1 + 53) = v43;
        }
        v35 = 4;
      }
      MiAllocateWsle(v23, v22++, (_QWORD *)(48 * v29 - 0x220000000000LL), 0, v30, v35, 0LL);
      v21 = v51 + 1;
      v36 = v52-- == 1;
      ++v51;
      if ( !v36 )
        continue;
      break;
    }
    v9 = v50;
LABEL_46:
    v2 = v20 + v9 + v49;
  }
  while ( v2 < *(_QWORD *)(a1 + 80) );
  memset_0(*(void **)(a1 + 88), 0, 4 * ((*(_QWORD *)(a1 + 80) >> 5) + ((*(_QWORD *)(a1 + 80) & 0x1F) != 0)));
  v39 = 48 * MiGetContainingPageTable(*(_QWORD *)a1) - 0x220000000000LL;
  v41 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v41 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38, v37, v40) )
      {
        HvlNotifyLongSpinWait(v41);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v39 + 24) < 0 );
  }
  *(_QWORD *)(v39 + 24) = (*(_QWORD *)(v39 + 24) + v48) ^ ((*(_QWORD *)(v39 + 24) + v48) ^ *(_QWORD *)(v39 + 24)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( *(_QWORD *)(a1 + 56) && *(_WORD *)(a1 + 50) )
    MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 40));
}
