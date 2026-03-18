/*
 * XREFs of MiActOnPartitionNodePages @ 0x140707C4C
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x140708808 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x140708C40 (MiFreePartitionNodePages.c)
 *     MiReturnPartitionPagesToParent @ 0x1407098B8 (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x14087BE70 (MiHotAddPartitionMemory.c)
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 *     MiMakePartitionMemoryBlock @ 0x14087C5D4 (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14087CD4C (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14024EFA0 (RtlClearBitsEx.c)
 *     MiUpdateLargePageBitMap @ 0x1403C5418 (MiUpdateLargePageBitMap.c)
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiChangePagesPartitionId @ 0x140708664 (MiChangePagesPartitionId.c)
 *     MiFreePartitionPageRun @ 0x140708CCC (MiFreePartitionPageRun.c)
 *     MiRemovePartitionPages @ 0x14070967C (MiRemovePartitionPages.c)
 *     MiSplitPfnBitMapsForPartitionHierarchy @ 0x140709A18 (MiSplitPfnBitMapsForPartitionHierarchy.c)
 *     MiTransferPartitionPageRun @ 0x140709A80 (MiTransferPartitionPageRun.c)
 *     MiCreatePartitionPages @ 0x14087BBEC (MiCreatePartitionPages.c)
 *     MiHotRemovePartitionPageRun @ 0x14087C13C (MiHotRemovePartitionPageRun.c)
 */

void __fastcall MiActOnPartitionNodePages(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v5; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  ULONG_PTR *v9; // r12
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r11
  ULONG_PTR v14; // r12
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r9
  _QWORD *v17; // r8
  __int64 i; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r11
  unsigned __int64 v28; // rdi
  _QWORD *v29; // r8
  __int64 v30; // rdx
  _QWORD *j; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r10
  unsigned __int64 k; // rax
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  bool v39; // zf
  ULONG_PTR v40; // rcx
  int v41; // eax
  int v42; // [rsp+A8h] [rbp+10h]
  unsigned int v43; // [rsp+B0h] [rbp+18h]

  v43 = a3;
  *(_DWORD *)(a4 + 24) = 0;
  v42 = 0;
  v5 = (_QWORD *)a4;
  if ( a2 <= 3 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v7 & 0x4000000000000000LL) != 0 )
    {
      v42 = 1;
      *(_QWORD *)(a1 + 24) = v7 & 0xBFFFFFFFFFFFFFFFuLL;
    }
  }
  v8 = 0LL;
  v9 = (ULONG_PTR *)(a1 + 32);
  do
  {
    if ( *(__int64 *)(a1 + 24) < 0 )
    {
      v10 = *v9;
      v11 = 0LL;
      v12 = 0LL;
      goto LABEL_26;
    }
    v13 = *v9;
    v14 = v9[1];
    v15 = v8 & -(__int64)(v8 < v13);
    v16 = v13 - 1;
    while ( 1 )
    {
      if ( v16 - v15 == -1LL )
        goto LABEL_9;
      v17 = (_QWORD *)(v14 + 8 * (v15 >> 6));
      for ( i = ~*v17 | ((1LL << v15) - 1); i == -1; i = ~*v17 )
      {
        if ( (unsigned __int64)++v17 > v14 + 8 * (v16 >> 6) )
          goto LABEL_9;
      }
      _BitScanForward64(&v19, ~i);
      v11 = ((__int64)((__int64)v17 - v14) >> 3 << 6) + v19;
      if ( v11 > v16 )
      {
LABEL_9:
        v11 = -1LL;
      }
      else if ( v11 != -1LL )
      {
        break;
      }
      if ( !v15 )
        break;
      v20 = v8 + 1;
      if ( v8 + 1 > v13 )
        v20 = v13;
      v16 = v20 - 1;
      v15 = 0LL;
    }
    v5 = (_QWORD *)a4;
    if ( v11 < v8 || v11 == -1LL )
      break;
    v21 = *(_QWORD *)(a1 + 32);
    if ( v21 <= v11 )
      goto LABEL_23;
    v27 = 0LL;
    v28 = v14 + 8 * ((v21 - 1) >> 6);
    v29 = (_QWORD *)(v14 + 8 * (v11 >> 6));
    v30 = *v29 | ((1LL << v11) - 1);
    for ( j = v29 + 1; ; ++j )
    {
      v32 = ~v30;
      if ( v32 )
        break;
      if ( (unsigned __int64)j > v28 )
        goto LABEL_23;
      v30 = *++v29;
    }
    _BitScanForward64((unsigned __int64 *)&v33, v32);
    v22 = (unsigned int)v33 + ((__int64)((__int64)v29 - v14) >> 3 << 6);
    if ( v22 > v21 )
    {
LABEL_23:
      v12 = 0LL;
    }
    else
    {
      for ( k = ~(v32 | ((1LL << v33) - 1)); !k; k = *v35 )
      {
        v27 += 64LL;
        v35 = v29 + 1;
        if ( (unsigned __int64)(v29 + 1) > v28 )
        {
          k = 64LL;
          goto LABEL_44;
        }
        ++v29;
      }
      _BitScanForward64(&k, k);
LABEL_44:
      v36 = ((__int64)((__int64)v29 - v14) >> 3 << 6) + k;
      if ( v36 > v21 )
        v36 = *(_QWORD *)(a1 + 32);
      v12 = v36 - v22;
      if ( v12 )
        goto LABEL_25;
    }
    v22 = *(_QWORD *)(a1 + 32);
LABEL_25:
    a3 = v43;
    v9 = (ULONG_PTR *)(a1 + 32);
    v10 = v22 - v11;
LABEL_26:
    v8 = v12 + v11 + v10;
    v23 = 0LL;
    v24 = v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    if ( a2 - 11 <= 1 )
      goto LABEL_50;
    if ( v24 > qword_140E2D7A0 || ((*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      v23 = 1LL;
    if ( a2 != 7 )
    {
      if ( a2 == 8 )
      {
        v25 = v5[8];
        v26 = 2 * (v5[5] + 1LL);
        *(_QWORD *)(v25 + 8 * v26) = v24;
        *(_QWORD *)(v25 + 8 * v26 + 8) = v10;
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
                if ( !(_DWORD)v23 )
                {
                  v37 = (v24 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                  v38 = (v37 + v10) & 0xFFFFFFFFFFFFFE00uLL;
                  if ( v37 < v38 )
                    MiUpdateLargePageBitMap(*v5, v37, v38 - v37, 1);
                }
                break;
              case 5u:
                if ( !(unsigned int)MiSplitPfnBitMapsForPartitionHierarchy(
                                      *v5,
                                      v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL),
                                      v10) )
                  *((_DWORD *)v5 + 6) = -1073741670;
                break;
              case 6u:
                if ( !(_DWORD)v23 )
                  MiUpdateLargePageBitMap(
                    *v5,
                    v24 & 0xFFFFFFFFFFFFFE00uLL,
                    ((v24 + v10 + 511) & 0xFFFFFFFFFFFFFE00uLL) - (v24 & 0xFFFFFFFFFFFFFE00uLL),
                    0);
                MiTransferPartitionPageRun(v5[1], *v5, v24, v10);
                break;
              case 0xAu:
                MiChangePagesPartitionId(
                  v5,
                  v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL),
                  v10,
                  (unsigned int)v23);
                break;
              default:
                if ( a2 == 2 || a2 - 11 <= 1 )
                {
                  if ( (int)MiCreatePartitionPages(
                              a2,
                              (_DWORD)v5,
                              a3,
                              (int)v11 + *(_DWORD *)(a1 + 24),
                              v10,
                              v42,
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
                  MiRemovePartitionPages(v5, a1, v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL), v10);
                }
                break;
            }
          }
          else
          {
            v39 = (_DWORD)v23 == 0;
            v40 = v11 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
            if ( v39 )
            {
              v41 = MiHotRemovePartitionPageRun(v40, a3);
              *((_DWORD *)v5 + 6) = v41;
              if ( v41 < 0 )
                return;
            }
            else
            {
              MiHotRemoveHugeRange(v40, v10, 1);
              *((_DWORD *)v5 + 6) = 0;
            }
            RtlClearBitsEx((__int64)v9, v11, v10);
            *(_QWORD *)(a1 + 24) &= ~0x8000000000000000uLL;
          }
          goto LABEL_75;
        }
        MiFreePartitionPageRun(v23, v24, v10, a3, v42);
      }
    }
LABEL_75:
    a3 = v43;
    *(__m128i *)(v5 + 5) = _mm_add_epi64(
                             _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)v10),
                             _mm_loadu_si128((const __m128i *)(v5 + 5)));
  }
  while ( v8 < *v9 );
}
