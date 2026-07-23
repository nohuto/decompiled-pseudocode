/*
 * XREFs of MiReplaceSecondaryListStandbyPage @ 0x1402AC370
 * Callers:
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402ABC50 (MiInsertSecondaryListStandbyPage.c)
 *     MiGetSlabSecondaryStandbyList @ 0x1402AC920 (MiGetSlabSecondaryStandbyList.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x1402ACBC0 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 */

signed __int64 __fastcall MiReplaceSecondaryListStandbyPage(__int64 a1, __int64 a2, unsigned int a3, int a4, _BYTE *a5)
{
  ULONG_PTR v8; // r14
  int v9; // edi
  ULONG_PTR v10; // rsi
  int v11; // ebx
  char v12; // cl
  unsigned int v13; // r9d
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rbx
  unsigned int v18; // edi
  unsigned __int8 v19; // cl
  ULONG_PTR *SlabSecondaryStandbyList; // r11
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  signed __int64 v23; // r8
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  __int64 v26; // r10
  signed __int64 v27; // rcx
  signed __int64 v28; // rax
  signed __int64 v29; // rcx
  int v30; // r8d
  unsigned __int64 v31; // r9
  signed __int64 result; // rax
  signed __int64 v33; // rdx
  volatile signed __int64 *v34; // r9
  unsigned __int64 v35; // rsi
  signed __int64 v36; // rdx
  _QWORD *v37; // rbx
  __int128 v38; // [rsp+50h] [rbp-48h] BYREF
  char v39; // [rsp+A0h] [rbp+8h]
  __int64 v40; // [rsp+A8h] [rbp+10h]

  v38 = 0LL;
  v8 = (a1 + 0x220000000000LL) / 48;
  v9 = MiPageToNode(v8);
  if ( qword_140E2D868 )
    v39 = *(_BYTE *)(MiSearchChannelTable(v8) + 12);
  else
    v39 = 0;
  v10 = (a2 + 0x220000000000LL) / 48;
  v11 = MiPageToNode(v10);
  if ( qword_140E2D868 )
    v12 = *(_BYTE *)(MiSearchChannelTable(v10) + 12);
  else
    v12 = 0;
  v13 = a3;
  if ( v9 != v11
    || v39 != v12
    || a3 != a4
    || (unsigned int)MiGetPfnSlabType(a1) == 8
    && ((*(_BYTE *)(qword_140E3D240 + 2 * (v8 >> 9) + 1) ^ *(_BYTE *)(qword_140E3D240 + 2 * (v10 >> 9) + 1)) & 0x7F) != 0 )
  {
    v37 = a5;
    MiUnlinkSecondaryListStandbyPage(a1, v13);
    if ( !*a5 )
      v37 = 0LL;
    return MiInsertSecondaryListStandbyPage(a2, a4, v37);
  }
  v14 = 48 * v10 - 0x220000000000LL;
  v40 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
  v15 = MiPageToNode(v10);
  v16 = *(_DWORD *)(v14 + 32);
  v17 = v15;
  if ( (*(_QWORD *)(v14 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_29;
  if ( (*(_DWORD *)(v14 + 32) & 0x8000000) == 0 )
    goto LABEL_11;
  if ( v14 < 0xFFFFDE0000000000uLL
    || v14 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || (unsigned int)MiIsDecayPfn((__int64)(48 * v10) / 48) )
  {
LABEL_29:
    v18 = 5;
    goto LABEL_12;
  }
  if ( (v16 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(48 * v10 - 0x220000000000LL) == 9 )
  {
    v18 = 5;
    goto LABEL_12;
  }
LABEL_11:
  v18 = HIBYTE(v16) & 7;
LABEL_12:
  if ( qword_140E2D868 )
    v19 = *(_BYTE *)(MiSearchChannelTable(v10) + 12);
  else
    v19 = 0;
  if ( a4 < 9 )
    SlabSecondaryStandbyList = (ULONG_PTR *)MiGetSlabSecondaryStandbyList(
                                              v40,
                                              48 * (int)v10,
                                              a4,
                                              v17,
                                              v18,
                                              (__int64)&v38 + 8);
  else
    SlabSecondaryStandbyList = (ULONG_PTR *)(*(_QWORD *)(v40 + 16) + 56320 * v17 + 88 * (v18 + 8LL * v19) + 4160);
  v21 = *(_QWORD *)(a1 + 40);
  v22 = (8LL * (*(_DWORD *)(a1 + 36) & 0xFFE00000)) | (((*(_QWORD *)a1 >> 20) | v21 & 0xF80000000000000uLL) >> 20);
  *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFLL | (v22 << 40);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0x1FFFFF | ((unsigned int)(v22 >> 24) << 21);
  v23 = *(_QWORD *)(a2 + 40);
  v24 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(a2 + 40),
          v21 ^ (v21 ^ v23) & 0xF07FFFFFFFFFFFFFuLL,
          v23);
  if ( v23 != v24 )
  {
    do
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a2 + 40),
              (v22 >> 35 << 55) ^ v24 & 0xF07FFFFFFFFFFFFFuLL,
              v24);
    }
    while ( v25 != v24 );
  }
  if ( v22 == 0x3FFFFFFFFFLL )
  {
    SlabSecondaryStandbyList[1] = v10;
  }
  else
  {
    v26 = 48 * v22;
    v27 = *(_QWORD *)(48 * v22 - 0x21FFFFFFFFE8LL);
    v28 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(48 * v22 - 0x21FFFFFFFFE8LL),
            (v10 << 40) ^ (v27 ^ (v10 << 40)) & 0xF80000FFFFFFFFFFuLL,
            v27);
    if ( v27 != v28 )
    {
      do
      {
        v29 = v28;
        v28 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v26 - 0x21FFFFFFFFE8LL),
                (v10 << 40) ^ (v28 ^ (v10 << 40)) & 0xF80000FFFFFFFFFFuLL,
                v28);
      }
      while ( v29 != v28 );
    }
    *(_DWORD *)(v26 - 0x21FFFFFFFFDCLL) = (v10 >> 19) ^ (*(_DWORD *)(v26 - 0x21FFFFFFFFDCLL) ^ (v10 >> 19)) & 0xFFE00000;
  }
  v30 = *(_DWORD *)(a1 + 36);
  v31 = (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(v30 & 0x1FFFFF) << 19);
  *(_QWORD *)(a2 + 24) = (*(_QWORD *)(a1 + 24) >> 40 << 40) ^ (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a1 + 24) >> 40 << 40)) & 0xF80000FFFFFFFFFFuLL;
  result = *(unsigned int *)(a2 + 36);
  *(_DWORD *)(a2 + 36) = v30 ^ (result ^ v30) & 0xFFE00000;
  if ( v31 == 0x3FFFFFFFFFLL )
  {
    *SlabSecondaryStandbyList = v10;
  }
  else
  {
    *(_QWORD *)(48 * v31 - 0x220000000000LL) = *(_QWORD *)(48 * v31 - 0x220000000000LL) & 0xFFFFFFFFFFLL | (v10 << 40);
    *(_DWORD *)(48 * v31 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(48 * v31 - 0x21FFFFFFFFDCLL) & 0x1FFFFF | ((unsigned int)(v10 >> 24) << 21);
    v33 = *(_QWORD *)(48 * v31 - 0x21FFFFFFFFD8LL);
    v34 = (volatile signed __int64 *)(48 * v31 - 0x21FFFFFFFFD8LL);
    v35 = (v10 & 0xFFFFFFF800000000uLL) << 20;
    result = _InterlockedCompareExchange64(v34, v35 ^ (v35 ^ v33) & 0xF07FFFFFFFFFFFFFuLL, v33);
    if ( v33 != result )
    {
      do
      {
        v36 = result;
        result = _InterlockedCompareExchange64(v34, v35 ^ (v35 ^ result) & 0xF07FFFFFFFFFFFFFuLL, result);
      }
      while ( v36 != result );
    }
  }
  return result;
}
