/*
 * XREFs of MiDemoteSlabEntry @ 0x1402A97C4
 * Callers:
 *     MiDemoteSlabEntriesDpc @ 0x140308810 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiRemoveSlabEntry @ 0x1402A8C10 (MiRemoveSlabEntry.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 *     MiUnlinkTransitionSlabPages @ 0x1402A9C34 (MiUnlinkTransitionSlabPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14036B030 (MiUpdateSlabPagePlaceholderState.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiRelinkTransitionSlabPages @ 0x140530D80 (MiRelinkTransitionSlabPages.c)
 *     MiLogSlabEntryDemote @ 0x14070C538 (MiLogSlabEntryDemote.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 v16; // rbx
  unsigned __int64 v17; // r10
  _DWORD *v18; // rdx
  int v19; // r8d
  _DWORD *j; // rax
  unsigned int v21; // r8d
  __int64 v22; // rcx
  unsigned int v23; // r11d
  unsigned __int64 k; // rax
  unsigned int *v25; // rax
  __int64 result; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r15
  volatile signed __int32 *v29; // r14
  __int64 v30; // r8
  __int64 v31; // rcx
  int v33; // [rsp+58h] [rbp+10h] BYREF

  v6 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a2 + 136) >> 3) & 3]);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  MiRemoveSlabEntry(a1, a2, a3);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  v8 = MiUnlinkTransitionSlabPages(v7, a3);
  v9 = *(_QWORD *)(a3 + 40);
  v10 = v8;
  v11 = qword_140E3D240 + 2 * ((v6 + v9 - 1) >> 9);
  for ( i = (_WORD *)(qword_140E3D240 + 2 * (v9 >> 9)); (unsigned __int64)i <= v11; ++i )
    *i = 0;
  MiUpdateLargePageBitMap(a1, *(_QWORD *)(a3 + 40), v6, 6LL);
  v13 = MiRelinkTransitionSlabPages(v10) + *(unsigned int *)(a3 + 84);
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_DWORD *)(a3 + 64);
    v33 = 0;
    if ( v15 <= v14 )
      break;
    v16 = *(_QWORD *)(a3 + 72);
    v17 = v16 + 4 * ((unsigned __int64)(v15 - 1) >> 5);
    v18 = (_DWORD *)(v16 + 4 * ((unsigned __int64)v14 >> 5));
    v19 = *v18 | ((1 << (v14 & 0x1F)) - 1);
    for ( j = v18 + 1; ; ++j )
    {
      v21 = ~v19;
      if ( v21 )
        break;
      if ( (unsigned __int64)j > v17 )
        goto LABEL_19;
      v19 = *++v18;
    }
    _BitScanForward64((unsigned __int64 *)&v22, v21);
    v23 = v22 + 32 * (((__int64)v18 - v16) >> 2);
    if ( v23 > v15 )
      break;
    for ( k = ~(v21 | ((1 << v22) - 1)); ; k = *v25 )
    {
      if ( (_DWORD)k )
      {
        _BitScanForward64(&k, k);
        goto LABEL_16;
      }
      v25 = v18 + 1;
      if ( (unsigned __int64)(v18 + 1) > v17 )
        break;
      ++v18;
    }
    LODWORD(k) = 32;
LABEL_16:
    v14 = 32 * (((__int64)v18 - v16) >> 2) + k;
    if ( v14 > v15 )
      v14 = v15;
    if ( v14 == v23 )
      break;
    v27 = 48 * (*(_QWORD *)(a3 + 40) + v23) - 0x220000000000LL;
    v28 = v27 + 48LL * (v14 - v23);
    if ( v27 < v28 )
    {
      v29 = (volatile signed __int32 *)(v27 + 24);
      do
      {
        v33 = 0;
        while ( _interlockedbittestandset64(v29, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v33);
          while ( *(__int64 *)v29 < 0 );
        }
        MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a2 + 128), (__int64)(v29 + 0x87FFFFFFFFALL) / 48, 1LL, 0LL);
        MiReturnFreeZeroPage(v27, 0LL, v30);
        _InterlockedAnd64((volatile signed __int64 *)v29, 0x7FFFFFFFFFFFFFFFuLL);
        v27 += 48LL;
        v29 += 12;
      }
      while ( v27 < v28 );
    }
  }
LABEL_19:
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 1024LL) )
  {
    MiLogSlabEntryDemote(v31, a3, v13);
  }
  ExFreePoolWithTag((PVOID)a3, 0);
  ++*(_QWORD *)(a1 + 21512);
  result = v13;
  ++*(_DWORD *)(a2 + 148);
  return result;
}
