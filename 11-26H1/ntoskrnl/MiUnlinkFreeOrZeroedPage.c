/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x14028BE54
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x140288F90 (MiGetPerfectColorHeadPage.c)
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiCoalesceFreeSmallPages @ 0x14028C5C0 (MiCoalesceFreeSmallPages.c)
 *     MiTradePageMarkedFreeZero @ 0x14028D864 (MiTradePageMarkedFreeZero.c)
 *     MiPurgeZeroPage @ 0x14028DD20 (MiPurgeZeroPage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403D1950 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiDemoteLargeFreePage @ 0x14042B4F0 (MiDemoteLargeFreePage.c)
 *     MiLargePagePromote @ 0x140473560 (MiLargePagePromote.c)
 *     MiLargeFreePageToMdl @ 0x1404C8C88 (MiLargeFreePageToMdl.c)
 *     MiTryUnlinkNodeLargePages @ 0x140520D5C (MiTryUnlinkNodeLargePages.c)
 *     MiMoveHibernatePageFreeToZero @ 0x1406F4C70 (MiMoveHibernatePageFreeToZero.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 *     MiMovePageToFreeList @ 0x140711EC0 (MiMovePageToFreeList.c)
 * Callees:
 *     MiWakeLargePageRebuild @ 0x140259E64 (MiWakeLargePageRebuild.c)
 *     MiUpdateZeroFreeBitmap @ 0x140288D50 (MiUpdateZeroFreeBitmap.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiWakePageZeroing @ 0x14028DC7C (MiWakePageZeroing.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     MiIncreaseAvailablePages @ 0x1403E8BC0 (MiIncreaseAvailablePages.c)
 *     MiUpdateLargePageCandidates @ 0x1404406E0 (MiUpdateLargePageCandidates.c)
 *     MiPageListCollision @ 0x14048758C (MiPageListCollision.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  int v5; // esi
  __int64 v6; // rbp
  unsigned int PfnPageSizeIndex; // eax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // r11d
  __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // rcx
  ULONG_PTR v20; // r10
  unsigned __int64 v21; // r9
  volatile signed __int32 *v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rbx
  unsigned int v25; // r15d
  __int64 v26; // rdx
  _BOOL8 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 DemandZeroPte; // rax
  ULONG_PTR v35; // r10
  unsigned __int64 v36; // r9
  volatile signed __int32 *v37; // r8
  unsigned int v38; // eax
  unsigned __int64 v39; // r10
  __int64 *v40; // r9
  __int64 *v41; // r11
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 Cache; // rcx
  __int64 v50; // rax
  volatile signed __int64 *v51; // r9
  signed __int64 v52; // rax
  signed __int64 v53; // rtt
  signed __int32 v54[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+30h] [rbp-78h]
  __int64 v56; // [rsp+38h] [rbp-70h]
  __int64 v57; // [rsp+40h] [rbp-68h]
  __int64 v58; // [rsp+48h] [rbp-60h]
  __int64 v59; // [rsp+50h] [rbp-58h]
  __int64 v60; // [rsp+58h] [rbp-50h]
  unsigned int v61; // [rsp+B0h] [rbp+8h]
  unsigned int v63; // [rsp+C0h] [rbp+18h]
  __int64 v64; // [rsp+C8h] [rbp+20h]

  v5 = 0;
  v6 = 48 * BugCheckParameter2 - 0x220000000000LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(v6);
  v8 = (*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL;
  v9 = PfnPageSizeIndex;
  v61 = PfnPageSizeIndex;
  v10 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v8);
  v11 = MiPageSizes[PfnPageSizeIndex];
  if ( (a3 & 0x200000) == 0
    && !(unsigned int)MiDecreaseAvailablePages(
                        *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v8),
                        MiPageSizes[PfnPageSizeIndex],
                        -1LL,
                        a3)
    && (a3 & 0x100) != 0 )
  {
    MiIncreaseAvailablePages(v10, v11);
    return 0LL;
  }
  v63 = *(_BYTE *)(v6 + 34) & 7;
  v12 = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
  v60 = (v12 >> 9) & 0x3F;
  v13 = 56320 * v60 + *(_QWORD *)(v10 + 16);
  v64 = v13;
  v57 = (v9 << 10) + v13;
  v14 = (*(_DWORD *)(v6 + 32) >> 22) & 3;
  if ( (a3 & 4) != 0 )
  {
    v51 = (volatile signed __int64 *)(v13 + (v61 < 2 ? 14112LL : 14104LL));
    v52 = *v51;
    do
    {
      v53 = v52;
      v52 = _InterlockedCompareExchange64(v51, (v52 + 1) ^ (v52 ^ (v52 + 1)) & 0xFFFFFFFFFFFF0000uLL, v52);
    }
    while ( v53 != v52 );
    _InterlockedOr(v54, 0);
  }
  v59 = v63 + 2LL * ((v12 >> 15) & 1);
  v56 = 2 * v59;
  v55 = v14;
  v15 = 88LL * (unsigned int)MiColorGetCache(v12);
  v18 = *(_QWORD *)(v64 + 8 * (v55 + v17 + v56 + 2 * (v17 + v56) + ((unsigned __int64)v16 << 7)) + 800) + v15;
  v58 = v18;
  if ( !a2 )
  {
    v5 = 2;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v18 + 32));
  }
  v19 = *(_QWORD *)(v10 + 8LL * v63 + 7520);
  if ( v11 == 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v19 + 16));
  else
    _InterlockedAdd64((volatile signed __int64 *)(v19 + 16), -v11);
  if ( (a3 & 0x400000) == 0 )
  {
    if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
    {
      v35 = BugCheckParameter2 & 0x1F;
      v36 = v11;
      v37 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (BugCheckParameter2 >> 5);
      if ( v35 + v11 > 0x20 )
      {
        if ( (BugCheckParameter2 & 0x1F) != 0 )
        {
          _InterlockedOr(v37, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v35);
          v36 = v11 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
          ++v37;
        }
        if ( v36 >= 0x20 )
        {
          v46 = v36 >> 5;
          v36 += -32LL * (v36 >> 5);
          do
          {
            *v37++ = -1;
            --v46;
          }
          while ( v46 );
        }
        if ( !v36 )
          goto LABEL_14;
        v38 = (1 << v36) - 1;
      }
      else
      {
        if ( v11 == 32 )
        {
          *v37 = -1;
          goto LABEL_14;
        }
        v38 = ((1 << v11) - 1) << v35;
      }
      _InterlockedOr(v37, v38);
    }
    else if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
    {
      v20 = BugCheckParameter2 & 0x1F;
      v21 = v11;
      v22 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (BugCheckParameter2 >> 5);
      if ( v20 + v11 > 0x20 )
      {
        if ( (BugCheckParameter2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v22, ~(((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v20));
          v21 = v11 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
          ++v22;
        }
        if ( v21 >= 0x20 )
        {
          v45 = v21 >> 5;
          v21 += -32LL * (v21 >> 5);
          do
          {
            *v22++ = 0;
            --v45;
          }
          while ( v45 );
        }
        if ( !v21 )
          goto LABEL_14;
        v23 = -1 << v21;
      }
      else
      {
        if ( v11 == 32 )
        {
          *v22 = 0;
          goto LABEL_14;
        }
        v23 = ~(((1 << v11) - 1) << v20);
      }
      _InterlockedAnd(v22, v23);
    }
  }
LABEL_14:
  v24 = v58;
  if ( (unsigned int)MiSimpleUnlinkPageEx(v58, BugCheckParameter2) )
    MiUpdateZeroFreeBitmap(v64, v24, 0);
  *(_DWORD *)(v6 + 32) = *(_DWORD *)(v6 + 32) & 0xFFF8FFFF | 0x50000;
  if ( !v63 )
  {
    v47 = *(_QWORD *)(v6 + 16);
    if ( qword_140E2D8C0 )
    {
      if ( (v47 & 0x10) != 0 )
        v47 &= ~0x10uLL;
      else
        v47 &= qword_140E2D8C8;
    }
    v48 = HIDWORD(v47);
    if ( v61 == 3 && (_DWORD)v48 != -3 )
    {
      Cache = (unsigned int)MiColorGetCache(v12);
      v50 = *(_QWORD *)(v64 + 8 * (((unsigned __int64)v12 >> 18) & 3) + 4096);
      --*(_QWORD *)(v50 + 8 * Cache);
    }
  }
  v25 = v5 | 4;
  if ( !*(_BYTE *)(v10 + 16485) )
    v25 = v5;
  if ( (v25 & 2) != 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v24 + 32));
  v26 = v57;
  _InterlockedAdd64((volatile signed __int64 *)(v57 + 8LL * v63 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  v27 = 0LL;
  v28 = 3LL;
  if ( BugCheckParameter2 < 0x100000 )
    v27 = v61 != 3;
  _InterlockedAdd64((volatile signed __int64 *)(v26 + 8 * (v55 + 2 * (v27 + 1) + v27 + 1)), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)byte_140E2D898 > 1u )
  {
    v30 = BYTE1(v12) & 1;
    v29 = v64;
    _InterlockedAdd64((volatile signed __int64 *)(v64 + 8 * (v63 + 2 * v30) + 14064), -v11);
  }
  else
  {
    v29 = v64;
    LOBYTE(v30) = 0;
  }
  if ( v61 == 3 )
  {
    MiUpdateLargePageCandidateValue(v10, BugCheckParameter2, 3LL, 0LL, 0LL);
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(v26 + 8 * v59 + 704), 0xFFFFFFFFFFFFFFFFuLL);
    MiUpdateLargePageCandidates(BugCheckParameter2);
    _InterlockedDecrement64((volatile signed __int64 *)(v57 + 8 * (v56 + (unsigned __int8)v30) + 736));
  }
  if ( (*(_BYTE *)(v6 + 34) & 8) != 0 )
    MiPageListCollision(v6);
  *(_QWORD *)(v6 + 24) &= 0xFFFFFF0000000000uLL;
  v31 = *(_QWORD *)(v6 + 16);
  if ( qword_140E2D8C0 && (v31 & 0x10) == 0 )
    HIDWORD(v31) &= HIDWORD(qword_140E2D8C8);
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( HIDWORD(v31) == -3 )
    *(_QWORD *)(v6 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v6 + 16), 0xFFFFFFFD);
  if ( v63 == 1 || v25 >= 4 )
  {
    v32 = *(_QWORD *)(v6 + 16);
    if ( v32 )
      DemandZeroPte = v32 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      DemandZeroPte = MiMakeDemandZeroPte(4);
    *(_QWORD *)(v6 + 16) = DemandZeroPte;
  }
  else if ( (MiFlags & 0x80u) != 0LL
         && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(BugCheckParameter2);
  }
  if ( v11 == 16 && (*(_DWORD *)(v10 + 4) & 0x10) == 0 )
  {
    v39 = 0LL;
    v40 = (__int64 *)(v29 + 16);
    v41 = MiPageSizes;
    do
    {
      v42 = *(v40 - 1);
      v43 = *v40;
      v40 += 128;
      v44 = *v41++ * (v42 + v43);
      v39 += v44;
      --v28;
    }
    while ( v28 );
    if ( v39 <= 0x200 && (MiFlags & 0x30) != 0 )
      MiWakeLargePageRebuild(v10, (unsigned int)v60, 0LL);
  }
  if ( !v63 )
    MiWakePageZeroing(v10, v29);
  return 1LL;
}
