/*
 * XREFs of MiActOnPartitionNodePages @ 0x14070C91C
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x14070D4BC (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x14070D8F4 (MiFreePartitionNodePages.c)
 *     MiReturnPartitionPagesToParent @ 0x14070E56C (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x140882270 (MiHotAddPartitionMemory.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14088314C (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiChangePagesPartitionId @ 0x14070D318 (MiChangePagesPartitionId.c)
 *     MiFreePartitionPageRun @ 0x14070D980 (MiFreePartitionPageRun.c)
 *     MiRemovePartitionPages @ 0x14070E330 (MiRemovePartitionPages.c)
 *     MiSplitPfnBitMapsForPartitionHierarchy @ 0x14070E6CC (MiSplitPfnBitMapsForPartitionHierarchy.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 *     MiCreatePartitionPages @ 0x140881FEC (MiCreatePartitionPages.c)
 *     MiHotRemovePartitionPageRun @ 0x14088253C (MiHotRemovePartitionPageRun.c)
 */

void __fastcall MiActOnPartitionNodePages(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v7; // rax
  ULONG_PTR *v8; // r12
  ULONG_PTR v9; // r15
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rsi
  ULONG_PTR v12; // rax
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r9
  _QWORD *v16; // r8
  __int64 i; // rdx
  unsigned __int64 v18; // rsi
  ULONG_PTR v19; // r9
  ULONG_PTR v20; // r9
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // r11
  _QWORD *v27; // r8
  __int64 v28; // rdx
  _QWORD *j; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // r10
  unsigned __int64 k; // rax
  unsigned __int64 *v33; // rax
  ULONG_PTR v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  bool v37; // zf
  ULONG_PTR v38; // rcx
  int v39; // eax
  int v40; // [rsp+98h] [rbp+10h]
  unsigned int v41; // [rsp+A0h] [rbp+18h]

  v41 = a3;
  *((_DWORD *)a4 + 6) = 0;
  v40 = 0;
  if ( a2 <= 3 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v7 & 0x4000000000000000LL) != 0 )
    {
      v40 = 1;
      *(_QWORD *)(a1 + 24) = v7 & 0xBFFFFFFFFFFFFFFFuLL;
    }
  }
  v8 = (ULONG_PTR *)(a1 + 32);
  v9 = 0LL;
  do
  {
    if ( *(__int64 *)(a1 + 24) < 0 )
    {
      v10 = *v8;
      v11 = 0LL;
      v12 = 0LL;
      goto LABEL_26;
    }
    v13 = v8[1];
    v14 = v9 & -(__int64)(v9 < *v8);
    v15 = *v8 - 1;
    while ( 1 )
    {
      if ( v15 - v14 == -1LL )
        goto LABEL_9;
      v16 = (_QWORD *)(v13 + 8 * (v14 >> 6));
      for ( i = ~*v16 | ((1LL << v14) - 1); i == -1; i = ~*v16 )
      {
        if ( (unsigned __int64)++v16 > v13 + 8 * (v15 >> 6) )
          goto LABEL_9;
      }
      _BitScanForward64(&v18, ~i);
      v11 = ((__int64)((__int64)v16 - v13) >> 3 << 6) + v18;
      if ( v11 > v15 )
      {
LABEL_9:
        v11 = -1LL;
      }
      else if ( v11 != -1LL )
      {
        break;
      }
      if ( !v14 )
        break;
      v19 = v9 + 1;
      if ( v9 + 1 > *v8 )
        v19 = *v8;
      v15 = v19 - 1;
      v14 = 0LL;
    }
    v8 = (ULONG_PTR *)(a1 + 32);
    if ( v11 < v9 || v11 == -1LL )
      break;
    v20 = *v8;
    if ( *v8 <= v11 )
      goto LABEL_23;
    v26 = v13 + 8 * ((v20 - 1) >> 6);
    v27 = (_QWORD *)(v13 + 8 * (v11 >> 6));
    v28 = *v27 | ((1LL << v11) - 1);
    for ( j = v27 + 1; ; ++j )
    {
      v30 = ~v28;
      if ( v30 )
        break;
      if ( (unsigned __int64)j > v26 )
        goto LABEL_23;
      v28 = *++v27;
    }
    _BitScanForward64((unsigned __int64 *)&v31, v30);
    v21 = (unsigned int)v31 + ((__int64)((__int64)v27 - v13) >> 3 << 6);
    if ( v21 > v20 )
    {
LABEL_23:
      v12 = 0LL;
    }
    else
    {
      for ( k = ~(v30 | ((1LL << v31) - 1)); !k; k = *v33 )
      {
        v33 = v27 + 1;
        if ( (unsigned __int64)(v27 + 1) > v26 )
        {
          k = 64LL;
          goto LABEL_44;
        }
        ++v27;
      }
      _BitScanForward64(&k, k);
LABEL_44:
      v34 = ((__int64)((__int64)v27 - v13) >> 3 << 6) + k;
      if ( v34 > v20 )
        v34 = *v8;
      v12 = v34 - v21;
      if ( v12 )
        goto LABEL_25;
    }
    v21 = *v8;
LABEL_25:
    a3 = v41;
    v10 = v21 - v11;
LABEL_26:
    v9 = v12 + v11 + v10;
    v22 = 0LL;
    v23 = v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    if ( a2 - 11 <= 1 )
      goto LABEL_50;
    if ( v23 > qword_140E2D920 || ((*(_QWORD *)(48 * v23 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      v22 = 1LL;
    if ( a2 != 7 )
    {
      if ( a2 == 8 )
      {
        v24 = a4[8];
        v25 = 2 * (a4[5] + 1LL);
        *(_QWORD *)(v24 + 8 * v25) = v23;
        *(_QWORD *)(v24 + 8 * v25 + 8) = v10;
      }
      else
      {
        if ( a2 )
        {
LABEL_50:
          if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
          {
            switch ( a2 )
            {
              case 4u:
                if ( !(_DWORD)v22 )
                {
                  v35 = (v23 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                  v36 = (v35 + v10) & 0xFFFFFFFFFFFFFE00uLL;
                  if ( v35 < v36 )
                    MiUpdateLargePageBitMap(*a4, v35, v36 - v35, 1);
                }
                break;
              case 5u:
                if ( !(unsigned int)MiSplitPfnBitMapsForPartitionHierarchy(
                                      *a4,
                                      v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL),
                                      v10) )
                  *((_DWORD *)a4 + 6) = -1073741670;
                break;
              case 6u:
                if ( !(_DWORD)v22 )
                  MiUpdateLargePageBitMap(
                    *a4,
                    v23 & 0xFFFFFFFFFFFFFE00uLL,
                    ((v23 + v10 + 511) & 0xFFFFFFFFFFFFFE00uLL) - (v23 & 0xFFFFFFFFFFFFFE00uLL),
                    0);
                MiTransferPartitionPageRun(a4[1], *a4, v23, v10);
                break;
              case 0xAu:
                MiChangePagesPartitionId(
                  a4,
                  v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL),
                  v10,
                  (unsigned int)v22);
                break;
              default:
                if ( a2 == 2 || a2 - 11 <= 1 )
                {
                  if ( (int)MiCreatePartitionPages(
                              a2,
                              (_DWORD)a4,
                              a3,
                              (int)v11 + *(_DWORD *)(a1 + 24),
                              v10,
                              v40,
                              a1,
                              v11) < 0 )
                    return;
                }
                else if ( a2 == 13 )
                {
                  __debugbreak();
                }
                else
                {
                  MiRemovePartitionPages(a4, a1, v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL), v10);
                }
                break;
            }
          }
          else
          {
            v37 = (_DWORD)v22 == 0;
            v38 = v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
            if ( v37 )
            {
              v39 = MiHotRemovePartitionPageRun(v38, a3);
              *((_DWORD *)a4 + 6) = v39;
              if ( v39 < 0 )
                return;
            }
            else
            {
              MiHotRemoveHugeRange(v38, v10, 1);
              *((_DWORD *)a4 + 6) = 0;
            }
            RtlClearBitsEx((__int64)v8, v11, v10);
            *(_QWORD *)(a1 + 24) &= ~0x8000000000000000uLL;
          }
          goto LABEL_75;
        }
        MiFreePartitionPageRun(v22, v23, v10, a3, v40);
      }
    }
LABEL_75:
    a3 = v41;
    *(__m128i *)(a4 + 5) = _mm_add_epi64(
                             _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)v10),
                             _mm_loadu_si128((const __m128i *)(a4 + 5)));
  }
  while ( v9 < *v8 );
}
