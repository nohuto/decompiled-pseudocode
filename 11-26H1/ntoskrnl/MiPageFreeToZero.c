/*
 * XREFs of MiPageFreeToZero @ 0x14028B780
 * Callers:
 *     MiMoveZeroedPage @ 0x140521CB0 (MiMoveZeroedPage.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiFreeZeroPageSlistSufficient @ 0x140288E00 (MiFreeZeroPageSlistSufficient.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiLocatePageCollisionByPfn @ 0x14028A7B8 (MiLocatePageCollisionByPfn.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeZeroPageToColorHead @ 0x14028D340 (MiFreeZeroPageToColorHead.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiColorHasSlists @ 0x14041CE00 (MiColorHasSlists.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiStopHugePageAccessor @ 0x140487CF4 (MiStopHugePageAccessor.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPageFreeToZero(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  signed __int64 v3; // rsi
  ULONG_PTR v6; // r15
  int v7; // r12d
  int v8; // ebp
  int v9; // edx
  char *v10; // r9
  __int64 v11; // r13
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v13; // r11
  ULONG_PTR v14; // r10
  unsigned int v15; // ebx
  int PfnPageSizeIndex; // eax
  int v17; // esi
  __int64 v18; // rbx
  __int64 v19; // r8
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  unsigned int v22; // esi
  bool v23; // zf
  signed __int64 v24; // rax
  unsigned __int64 v25; // rcx
  signed __int64 v26; // rtt
  int i; // r8d
  int v29; // r10d
  unsigned __int64 v30; // rbx
  __int64 v31; // rbp
  ULONG_PTR v32; // rdx
  volatile signed __int32 *v33; // r8
  ULONG_PTR v34; // r8
  volatile signed __int32 *v35; // r9
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rbx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  int v44; // r14d
  int v45; // r14d
  unsigned __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  __int64 v51; // [rsp+70h] [rbp+8h]
  __int64 v53; // [rsp+88h] [rbp+20h]

  v3 = 48 * BugCheckParameter2;
  v6 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v7 = 3;
  v8 = 3;
  if ( (*(_QWORD *)(v6 + 40) & 0x10000000000LL) != 0 )
  {
    v8 = 3 - ((*(_DWORD *)(v6 + 36) >> 27) & 3);
    if ( v8 == 3 )
      v8 = 3;
  }
  v9 = dword_140E2D804;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v10 = (char *)qword_140E2D860 + 16 * dword_140E2D800, BugCheckParameter2 < *(_QWORD *)v10)
    || dword_140E2D800 != dword_140E2D804 && BugCheckParameter2 >= *((_QWORD *)v10 + 2) )
  {
    for ( i = 0; ; i = v29 + 1 )
    {
      while ( 1 )
      {
        if ( v9 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v29 = (i + v9) >> 1;
        v10 = (char *)qword_140E2D860 + 16 * v29;
        if ( BugCheckParameter2 >= *(_QWORD *)v10 )
          break;
        if ( !v29 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)v10, 0LL);
        v9 = v29 - 1;
      }
      if ( v29 == dword_140E2D804 || BugCheckParameter2 < *((_QWORD *)v10 + 2) )
        break;
    }
    dword_140E2D800 = (i + v9) >> 1;
  }
  v53 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  v11 = *(_QWORD *)(v53 + 16) + 56320LL * *((unsigned int *)v10 + 2);
  if ( v6 < 0xFFFFDE0000000000uLL || v6 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL )
  {
    v41 = ((__int64)(v6 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
    MiStopHugePageAccessor(v6);
    v51 = MiHugePfnPartition(v6);
    v15 = MiPageToNode(v41 << 18);
    PfnPageSizeIndex = 0;
  }
  else
  {
    *(_DWORD *)(v6 + 32) &= ~0x80000u;
    if ( !MiLocatePageCollisionByPfn(*(_QWORD *)(v6 + 16), v3 / 48) )
      KeBugCheckEx(0x1Au, 0x1502uLL, v6, v13, BugCheckParameter4);
    _mm_lfence();
    *(_QWORD *)(v6 + 16) = MiMakeDemandZeroPte(4);
    v51 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
    v15 = MiPageToNode(v14);
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(v6);
  }
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(56320LL * v15 + *(_QWORD *)(v51 + 16) + 14192) + 80LL),
    -MiPageSizes[PfnPageSizeIndex]);
  if ( (a2 & 2) != 0 )
  {
    if ( (*(_QWORD *)(v3 - 0x21FFFFFFFFD8LL) & 0x10000000000LL) != 0 )
    {
      v7 = 3 - ((*(_DWORD *)(v3 - 0x21FFFFFFFFDCLL) >> 27) & 3);
      if ( v7 == 3 )
        v7 = 3;
    }
    v30 = MiPageSizes[v7];
    v31 = MiFreeZeroPageToColorHead(BugCheckParameter2);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v31 + 32));
    if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
    {
      v34 = BugCheckParameter2 & 0x1F;
      v35 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (BugCheckParameter2 >> 5);
      if ( v34 + v30 > 0x20 )
      {
        if ( (BugCheckParameter2 & 0x1F) != 0 )
        {
          v45 = BugCheckParameter2 & 0x1F;
          _InterlockedOr(v35, ((1 << (32 - v45)) - 1) << v34);
          v30 -= (unsigned int)(32 - v45);
          ++v35;
        }
        if ( v30 >= 0x20 )
        {
          v43 = v30 >> 5;
          v30 += -32LL * (v30 >> 5);
          do
          {
            *v35++ = -1;
            --v43;
          }
          while ( v43 );
        }
        if ( v30 )
          _InterlockedOr(v35, (1 << v30) - 1);
      }
      else if ( v30 == 32 )
      {
        *v35 = -1;
      }
      else
      {
        _InterlockedOr(v35, ((1 << v30) - 1) << v34);
      }
    }
    else if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
    {
      v32 = BugCheckParameter2 & 0x1F;
      v33 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (BugCheckParameter2 >> 5);
      if ( v32 + v30 > 0x20 )
      {
        if ( (BugCheckParameter2 & 0x1F) != 0 )
        {
          v44 = BugCheckParameter2 & 0x1F;
          _InterlockedAnd(v33, ~(((1 << (32 - v44)) - 1) << v32));
          v30 -= (unsigned int)(32 - v44);
          ++v33;
        }
        if ( v30 >= 0x20 )
        {
          v42 = v30 >> 5;
          v30 += -32LL * (v30 >> 5);
          do
          {
            *v33++ = 0;
            --v42;
          }
          while ( v42 );
        }
        if ( v30 )
          _InterlockedAnd(v33, -1 << v30);
      }
      else if ( v30 == 32 )
      {
        *v33 = 0;
      }
      else
      {
        _InterlockedAnd(v33, ~(((1 << v30) - 1) << v32));
      }
    }
    if ( v31 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v31 + 32), retaddr);
        return 0LL;
      }
      *(_DWORD *)(v31 + 32) = 0;
    }
    return 0LL;
  }
  v17 = 1;
  if ( a3 )
  {
    if ( v8 != 3
      || ((v46 = (unsigned int)MI_PAGE_TO_FULL_COLOR(BugCheckParameter2),
           !(unsigned int)MiColorHasSlists(v46, v47, v48, v49))
       || (unsigned int)MiFreeZeroPageSlistSufficient(v11, v46, 0))
      && *(_QWORD *)(*(_QWORD *)(v11 + 8 * ((v46 >> 18) & 3) + 4096) + 8LL * (unsigned int)MiColorGetCache(v46)) >= (unsigned __int64)(unsigned int)(4 * *(_DWORD *)(v53 + 17368)) )
    {
      a2 |= 0x80u;
      v17 = 1025;
    }
  }
  v18 = 14112LL;
  v19 = 14112LL;
  if ( v8 == 3 )
    v19 = 14104LL;
  v20 = *(_QWORD *)(v19 + v11);
  do
  {
    v21 = v20;
    v20 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v19 + v11),
            (v20 + 1) ^ ((v20 + 1) ^ v20) & 0xFFFFFFFFFFFF0000uLL,
            v20);
  }
  while ( v21 != v20 );
  v22 = v17 | 0x4000;
  MiUnlinkFreeOrZeroedPage(BugCheckParameter2);
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2, v22);
  v23 = v8 == 3;
  if ( v8 != 3 )
  {
    if ( a2 < 0 )
    {
      v36 = *(_QWORD *)(v6 + 16);
      if ( v36 )
      {
        if ( qword_140E2D8C0 )
        {
          v37 = qword_140E2D8C8 & v36;
          LODWORD(v36) = v36 & 0xFFFFFFEF;
          if ( (*(_QWORD *)(v6 + 16) & 0x10) == 0 )
            LODWORD(v36) = v37;
        }
      }
      v38 = (unsigned int)v36;
      v39 = (unsigned int)v36 | 0xFFFFFFFD00000000uLL;
      if ( qword_140E2D8C0 )
      {
        v40 = v38 | qword_140E2D8C0 | 0xFFFFFFFD00000000uLL;
        if ( (qword_140E2D8C0 & v39) != 0 )
          v40 = (unsigned int)v38 | 0xFFFFFFFD00000010uLL;
        v39 = v40;
      }
      *(_QWORD *)(v6 + 16) = v39;
    }
    v23 = v8 == 3;
  }
  if ( v23 )
    v18 = 14104LL;
  v24 = *(_QWORD *)(v18 + v11);
  do
  {
    v25 = (v24 - 1) ^ (v24 ^ (v24 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v24 == 1 )
      v25 ^= (v25 ^ (v25 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v26 = v24;
    v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + v11), v25, v24);
  }
  while ( v26 != v24 );
  return (v22 >> 10) & 1;
}
