/*
 * XREFs of MiLargePagePromote @ 0x140473560
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x1403D3124 (MiCoalesceFreeLargePages.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14070FFD8 (MiCoalesceActivePagesIntoFree.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDetermineCoalescedLargePageHeatState @ 0x1404738A4 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiConvertBaseLargePage @ 0x140476F40 (MiConvertBaseLargePage.c)
 */

int __fastcall MiLargePagePromote(ULONG_PTR a1, unsigned int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  __int64 v7; // r13
  int PfnPageSizeIndex; // eax
  int v9; // r14d
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // r15
  int v13; // ebp
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // r10d
  __int64 v17; // r9
  __int64 v18; // r8
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  unsigned __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned __int64 v23; // rbp
  __int64 v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  int v27; // esi
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+40h] [rbp-48h]

  v5 = a2;
  *a5 = 0;
  v7 = 48 * a1 - 0x220000000000LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(v7);
  v9 = 0;
  v31 = MiPageSizes[v5];
  v10 = 0;
  v11 = v7;
  v12 = MiPageSizes[PfnPageSizeIndex];
  v13 = MiLargePageShifts[PfnPageSizeIndex];
  v14 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  v15 = MiPageToNode(a1);
  v16 = a2;
  v17 = *(_QWORD *)(v14 + 16) + 56320LL * v15;
  v32 = *(_DWORD *)(v14 + 16) + 56320 * v15;
  v18 = a2 < 2 ? 8 : 0;
  v19 = *(_QWORD *)(v18 + v17 + 14104);
  do
  {
    v20 = v19;
    v19 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v18 + v17 + 14104),
            (v19 + 1) ^ (v19 ^ (v19 + 1)) & 0xFFFFFFFFFFFF0000uLL,
            v19);
  }
  while ( v20 != v19 );
  v21 = v31;
  v22 = 0;
  v23 = v31 >> v13;
  if ( v23 )
  {
    v24 = 48 * v12;
    do
    {
      if ( !a4 )
      {
        MiUnlinkFreeOrZeroedPage((v11 + 0x220000000000LL) / 48, 0LL, 0);
        v16 = a2;
      }
      v25 = *(_QWORD *)(v11 + 16);
      v10 |= ((v25 & 0x3E0) != 0) + 1;
      if ( qword_140E2D8C0 && (v25 & 0x10) == 0 )
        HIDWORD(v25) &= HIDWORD(qword_140E2D8C8);
      if ( HIDWORD(v25) == -3 )
        v9 |= 1u;
      else
        v9 |= 2u;
      if ( v22 )
      {
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_DWORD *)(v11 + 36) &= 0xE7FFFFFF;
        *(_DWORD *)(v11 + 32) = *(_DWORD *)(v11 + 32) & 0xFFF8FFFF | 0x60000;
        *(_QWORD *)(v11 + 24) = *(_QWORD *)(v11 + 24) & 0xC000000000000000uLL | 1;
        if ( !a4 )
          *(_DWORD *)(v11 + 32) = *(_DWORD *)(v11 + 32) & 0xFFFF0000 | 2;
      }
      else
      {
        *(_DWORD *)(v11 + 36) ^= (*(_DWORD *)(v11 + 36) ^ ((unsigned __int8)(3 - v16) << 27)) & 0x18000000;
      }
      ++v22;
      *(_QWORD *)v11 = 0LL;
      v11 += v24;
    }
    while ( v22 < v23 );
    v21 = v31;
    LODWORD(v17) = v32;
  }
  v26 = -48LL * v21 + v11;
  v27 = (v10 >> 1) & 1;
  if ( a4 || (unsigned int)MiDetermineCoalescedLargePageHeatState(v16, v9, v27, v17, (__int64)a5) )
  {
    *(_QWORD *)(v26 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v26 + 16), 0);
    if ( a4 )
    {
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xC000000000000000uLL | 1;
      MiConvertBaseLargePage(v7, 0LL, v28, v29);
    }
  }
  else
  {
    *(_QWORD *)(v26 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v26 + 16), 0xFFFFFFFD);
  }
  return MiInsertPageInFreeOrZeroedList(a1);
}
