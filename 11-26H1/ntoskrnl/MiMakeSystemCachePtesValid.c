/*
 * XREFs of MiMakeSystemCachePtesValid @ 0x1402E5F40
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402E9F30 (MiReleaseCachedPageLocks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402E5EA0 (MiEmptyDeferredWorkingSetEntries.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall MiMakeSystemCachePtesValid(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // r14
  unsigned __int64 i; // r11
  _QWORD *v7; // rbx
  __int64 j; // r9
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 k; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // r11
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rcx
  signed __int64 *v23; // r15
  __int64 v24; // r13
  unsigned __int64 v25; // rbx
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 ValidPte; // rcx
  __int64 v30; // r14
  unsigned __int64 v31; // rbx
  char v32; // cl
  __int64 v33; // rbp
  int v34; // eax
  __int16 v35; // ax
  char v36; // al
  bool v37; // zf
  unsigned __int64 v38; // rbx
  unsigned int v39; // ebp
  char v40; // al
  char v41; // cl
  char v42; // al
  unsigned __int64 m; // rax
  unsigned __int64 *v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // [rsp+50h] [rbp-58h]
  unsigned __int64 v47; // [rsp+B0h] [rbp+8h]
  __int64 v48; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v49; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v50; // [rsp+C8h] [rbp+20h]

  v46 = *(_QWORD *)(a1 + 96);
  if ( !v46 )
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
        v48 = -1LL;
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
      v48 = v9;
      if ( v9 <= i )
        break;
      v9 = -1LL;
      v48 = -1LL;
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
LABEL_79:
      v47 = 0LL;
      goto LABEL_25;
    }
    v13 = 0LL;
    v14 = v5 + 8 * ((v12 - 1) >> 6);
    v15 = *(_QWORD *)(v5 + 8 * (v9 >> 6)) | ((1LL << v9) - 1);
    v16 = v5 + 8 * (v9 >> 6);
    for ( k = v16 + 8; ; k += 8LL )
    {
      v18 = ~v15;
      if ( v18 )
        break;
      if ( k > v14 )
        goto LABEL_79;
      v15 = *(_QWORD *)(v16 + 8);
      v16 += 8LL;
    }
    _BitScanForward64((unsigned __int64 *)&v19, v18);
    v20 = (unsigned int)v19 + ((v16 - v5) >> 3 << 6);
    if ( v20 > v12 )
    {
      v47 = 0LL;
      goto LABEL_25;
    }
    for ( m = ~(v18 | ((1LL << v19) - 1)); !m; m = *v44 )
    {
      v13 += 64LL;
      v44 = (unsigned __int64 *)(v16 + 8);
      if ( v16 + 8 > v14 )
      {
        m = 64LL;
        goto LABEL_71;
      }
      v16 += 8LL;
    }
    _BitScanForward64(&m, m);
LABEL_71:
    v45 = ((v16 - v5) >> 3 << 6) + m;
    if ( v45 > v12 )
      v45 = *(_QWORD *)(a1 + 80);
    v47 = v45 - v20;
    if ( v45 == v20 )
LABEL_25:
      v20 = *(_QWORD *)(a1 + 80);
    v21 = v20 - v9;
    v22 = v9;
    v50 = v21;
    v49 = v9;
    v23 = (signed __int64 *)(*(_QWORD *)(a1 + 136) + 8 * v9);
    if ( !v21 )
      goto LABEL_46;
    v24 = *(_QWORD *)(a1 + 40);
    while ( 2 )
    {
      v25 = v22;
      v26 = *(_QWORD *)(a1 + 16);
      while ( 1 )
      {
        v27 = *(unsigned int *)(v26 + 44);
        v28 = *(_QWORD *)(v26 + 8);
        if ( v26 == *(_QWORD *)(a1 + 16) )
        {
          v28 = *(_QWORD *)(a1 + 144);
          v27 -= (v28 - *(_QWORD *)(v26 + 8)) >> 3;
        }
        if ( v25 < v27 )
          break;
        v26 = *(_QWORD *)(v26 + 16);
        v25 -= v27;
      }
      ValidPte = *(_QWORD *)(v28 + 8 * v25);
      v30 = (ValidPte >> 12) & 0xFFFFFFFFFFLL;
      if ( (*v23 & 8) != 0 )
      {
        ValidPte = MiMakeValidPte((unsigned __int64)v23, v30, 536870913);
      }
      else if ( (*(_DWORD *)(a1 + 64) & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
      {
        ValidPte |= 0x42uLL;
      }
      v31 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(BYTE4(stru_140E2D930.Header.WaitListHead.Blink) & 1) << 8);
      v32 = *(_BYTE *)(a1 + 53);
      v33 = 48 * v30 - 0x220000000000LL;
      if ( (v32 & 9) != 8 || (v32 & 4) != 0 )
      {
        v36 = 0;
      }
      else
      {
        v34 = *(unsigned __int16 *)(a1 + 50);
        if ( (_WORD)v34 )
        {
          if ( v34 + *(unsigned __int16 *)(a1 + 48) != (((unsigned int)v23 >> 3) & 0x1FF) )
            goto LABEL_40;
          if ( *(__int64 *)(v33 + 40) < 0 )
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
        v35 = *(_WORD *)(a1 + 50);
        if ( v35 )
        {
          *(_WORD *)(a1 + 50) = v35 + 1;
        }
        else
        {
          *(_WORD *)(a1 + 50) = 1;
          *(_WORD *)(a1 + 48) = ((unsigned int)v23 >> 3) & 0x1FF;
          v40 = *(_BYTE *)(a1 + 53);
          v41 = v40 & 0xFD;
          v42 = v40 | 2;
          if ( *(__int64 *)(v33 + 40) >= 0 )
            v41 = v42;
          *(_BYTE *)(a1 + 53) = v41;
        }
        v36 = 4;
      }
      MiAllocateWsle(v24, v23++, (_QWORD *)(48 * v30 - 0x220000000000LL), 0, v31, v36, 0LL);
      v22 = v49 + 1;
      v37 = v50-- == 1;
      ++v49;
      if ( !v37 )
        continue;
      break;
    }
    v9 = v48;
LABEL_46:
    v2 = v21 + v9 + v47;
  }
  while ( v2 < *(_QWORD *)(a1 + 80) );
  memset_0(*(void **)(a1 + 88), 0, 4 * ((*(_QWORD *)(a1 + 80) >> 5) + ((*(_QWORD *)(a1 + 80) & 0x1F) != 0)));
  v38 = 48 * MiGetContainingPageTable(*(_QWORD *)a1) - 0x220000000000LL;
  v39 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v39 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v39);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v38 + 24) < 0 );
  }
  *(_QWORD *)(v38 + 24) = (*(_QWORD *)(v38 + 24) + v46) ^ ((*(_QWORD *)(v38 + 24) + v46) ^ *(_QWORD *)(v38 + 24)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( *(_QWORD *)(a1 + 56) && *(_WORD *)(a1 + 50) )
    MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 40));
}
