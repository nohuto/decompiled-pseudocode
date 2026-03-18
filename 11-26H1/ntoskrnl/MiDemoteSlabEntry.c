/*
 * XREFs of MiDemoteSlabEntry @ 0x1402AA3B4
 * Callers:
 *     MiDemoteSlabEntriesDpc @ 0x1402BDB50 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiRemoveSlabEntry @ 0x1402A9800 (MiRemoveSlabEntry.c)
 *     MiReturnFreeZeroPage @ 0x1402AA690 (MiReturnFreeZeroPage.c)
 *     MiUnlinkTransitionSlabPages @ 0x1402AA834 (MiUnlinkTransitionSlabPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140369290 (MiUpdateSlabPagePlaceholderState.c)
 *     MiUpdateLargePageBitMap @ 0x1403C5418 (MiUpdateLargePageBitMap.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     MiRelinkTransitionSlabPages @ 0x14052E860 (MiRelinkTransitionSlabPages.c)
 *     MiLogSlabEntryDemote @ 0x140707868 (MiLogSlabEntryDemote.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDemoteSlabEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 v11; // r9
  _WORD *i; // rcx
  __int64 v13; // r12
  unsigned int v14; // edi
  unsigned int v15; // r9d
  __int64 v16; // r14
  int v17; // r10d
  unsigned __int64 v18; // rbx
  _DWORD *v19; // rdx
  int v20; // r8d
  _DWORD *j; // rax
  unsigned int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // r11d
  unsigned __int64 k; // rax
  unsigned int *v26; // rax
  __int64 result; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r15
  volatile signed __int32 *v30; // r14
  __int64 v31; // r8
  __int64 v32; // rcx
  int v34; // [rsp+58h] [rbp+10h] BYREF

  v6 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a2 + 136) >> 3) & 3]);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  MiRemoveSlabEntry(a1, a2, a3);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  v8 = MiUnlinkTransitionSlabPages(v7, a3);
  v9 = *(_QWORD *)(a3 + 40);
  v10 = v8;
  v11 = qword_140E3D0C0 + 2 * ((v6 + v9 - 1) >> 9);
  for ( i = (_WORD *)(qword_140E3D0C0 + 2 * (v9 >> 9)); (unsigned __int64)i <= v11; ++i )
    *i = 0;
  MiUpdateLargePageBitMap(a1, *(_QWORD *)(a3 + 40), v6, 6LL);
  v13 = MiRelinkTransitionSlabPages(v10) + *(unsigned int *)(a3 + 84);
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_DWORD *)(a3 + 64);
    v34 = 0;
    if ( v15 <= v14 )
      break;
    v16 = *(_QWORD *)(a3 + 72);
    v17 = 0;
    v18 = v16 + 4 * ((unsigned __int64)(v15 - 1) >> 5);
    v19 = (_DWORD *)(v16 + 4 * ((unsigned __int64)v14 >> 5));
    v20 = *v19 | ((1 << (v14 & 0x1F)) - 1);
    for ( j = v19 + 1; ; ++j )
    {
      v22 = ~v20;
      if ( v22 )
        break;
      if ( (unsigned __int64)j > v18 )
        goto LABEL_19;
      v20 = *++v19;
    }
    _BitScanForward64((unsigned __int64 *)&v23, v22);
    v24 = v23 + 32 * (((__int64)v19 - v16) >> 2);
    if ( v24 > v15 )
      break;
    for ( k = ~(v22 | ((1 << v23) - 1)); ; k = *v26 )
    {
      if ( (_DWORD)k )
      {
        _BitScanForward64(&k, k);
        goto LABEL_16;
      }
      v17 += 32;
      v26 = v19 + 1;
      if ( (unsigned __int64)(v19 + 1) > v18 )
        break;
      ++v19;
    }
    LODWORD(k) = 32;
LABEL_16:
    v14 = 32 * (((__int64)v19 - v16) >> 2) + k;
    if ( v14 > v15 )
      v14 = v15;
    if ( v14 == v24 )
      break;
    v28 = 48 * (*(_QWORD *)(a3 + 40) + v24) - 0x220000000000LL;
    v29 = v28 + 48LL * (v14 - v24);
    if ( v28 < v29 )
    {
      v30 = (volatile signed __int32 *)(v28 + 24);
      do
      {
        v34 = 0;
        while ( _interlockedbittestandset64(v30, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v34);
          while ( *(__int64 *)v30 < 0 );
        }
        MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a2 + 128), (__int64)(v30 + 0x87FFFFFFFFALL) / 48, 1LL, 0LL);
        MiReturnFreeZeroPage(v28, 0LL, v31);
        _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
        v28 += 48LL;
        v30 += 12;
      }
      while ( v28 < v29 );
    }
  }
LABEL_19:
  if ( stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && (unsigned __int8)tlgKeywordOn(stru_140E36558.FirstArgument, 1024LL) )
  {
    MiLogSlabEntryDemote(v32, a3, v13);
  }
  ExFreePoolWithTag((PVOID)a3, 0);
  ++*(_QWORD *)(a1 + 21512);
  result = v13;
  ++*(_DWORD *)(a2 + 148);
  return result;
}
