/*
 * XREFs of MiReplaceTransitionPageInList @ 0x1402DE8B0
 * Callers:
 *     MiReplaceTransitionPage @ 0x1402931E8 (MiReplaceTransitionPage.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiDetermineModifiedPageListHead @ 0x140297EF0 (MiDetermineModifiedPageListHead.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402AC370 (MiReplaceSecondaryListStandbyPage.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiAcquirePageListLock @ 0x1402DD540 (MiAcquirePageListLock.c)
 *     MiReplaceStandbyLookaside @ 0x1402DDCB0 (MiReplaceStandbyLookaside.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiUpdateTransitionPteFrame @ 0x1402F0200 (MiUpdateTransitionPteFrame.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiReplaceTransitionPageInList(__int64 a1)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // r12
  ULONG_PTR v4; // r13
  int v5; // edi
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  unsigned int v8; // r14d
  int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned int v11; // r14d
  int v12; // ebx
  __int64 v13; // r10
  __int64 v14; // rdx
  ULONG_PTR v15; // r11
  ULONG_PTR v16; // r8
  __int64 v17; // r10
  __int64 v18; // r9
  signed __int64 v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // r9
  unsigned __int64 *v23; // r11
  int v24; // r15d
  ULONG_PTR v25; // r8
  volatile signed __int32 *v26; // r9
  ULONG_PTR v27; // r8
  unsigned __int64 v28; // r10
  volatile signed __int32 *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 updated; // rax
  __int64 v33; // r11
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // r12d
  unsigned __int64 v37; // rcx
  int v38; // r12d
  unsigned __int64 v39; // rcx
  int v40; // [rsp+30h] [rbp-E8h]
  unsigned int v41; // [rsp+38h] [rbp-E0h]
  __int64 v42; // [rsp+38h] [rbp-E0h]
  _QWORD *v43; // [rsp+40h] [rbp-D8h]
  __int64 v44; // [rsp+48h] [rbp-D0h]
  __int64 v45; // [rsp+50h] [rbp-C8h]
  __int64 v46; // [rsp+58h] [rbp-C0h]
  __int64 v47; // [rsp+60h] [rbp-B8h]
  _BYTE v48[16]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+80h] [rbp-98h]
  char v50; // [rsp+88h] [rbp-90h]
  __int64 v51; // [rsp+98h] [rbp-80h]
  char v52; // [rsp+A0h] [rbp-78h]
  __int64 v53; // [rsp+B0h] [rbp-68h]
  char v54; // [rsp+B8h] [rbp-60h]
  __int64 v55; // [rsp+C8h] [rbp-50h]
  char v56; // [rsp+D0h] [rbp-48h]
  void *retaddr; // [rsp+118h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 32);
  v44 = *(_QWORD *)a1;
  v40 = *(_DWORD *)(a1 + 36);
  v41 = *(_DWORD *)(a1 + 40);
  memset_0(v48, 0, 0x68uLL);
  v6 = 48 * v3 - 0x220000000000LL;
  v45 = 48 * v4;
  v43 = (_QWORD *)v6;
  v7 = 48 * v4 - 0x220000000000LL;
  v8 = 0xFFFFFF;
  v9 = *(_DWORD *)(v2 + 28);
  LOBYTE(v10) = 1;
  v46 = v7;
  if ( v9 != 2 )
  {
    if ( v9 == 3 )
    {
      if ( (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      {
        v2 = 88LL * v41 + v44 + 6016;
      }
      else
      {
        v31 = MiDetermineModifiedPageListHead(v7, v44, 0);
        v6 = 48 * v3 - 0x220000000000LL;
        v2 = v31;
      }
    }
    MiAcquirePageListLock(v2, v6, (unsigned int)v5, 1, (__int64)v48);
    goto LABEL_13;
  }
  if ( v5 < 9 && (*(_DWORD *)(v6 + 32) & 0x8000000) != 0 )
  {
    MiUnlinkPageFromListEx(48 * v3 - 0x220000000000LL, 0);
    *(_DWORD *)(v46 + 32) &= ~0x8000000u;
    *(_DWORD *)(a1 + 48) |= 4u;
    return;
  }
  v11 = *(_DWORD *)(v6 + 32);
  if ( (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_73;
  if ( (*(_DWORD *)(v6 + 32) & 0x8000000) == 0 )
  {
LABEL_5:
    v8 = HIBYTE(v11) & 7;
    goto LABEL_6;
  }
  if ( v6 < 0xFFFFDE0000000000uLL
    || v6 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || MiIsDecayPfn((__int64)(48 * v3) / 48) )
  {
LABEL_73:
    v8 = 5;
  }
  else
  {
    if ( (v11 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v6) != 9 )
      goto LABEL_5;
    v8 = 5;
  }
LABEL_6:
  v42 = 88LL * v8 + v44 + 3648;
  if ( v5 == 9 && (*(_DWORD *)(v6 + 32) & 0x8000000) != 0 )
    *(_DWORD *)(a1 + 48) |= 2u;
  v12 = MiPageToNode(v3);
  if ( v12 == (unsigned int)MiPageToNode(v4)
    && v5 == v40
    && ((unsigned int)MiGetPfnSlabType(v43) != 8
     || ((*(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)(v45 / 48) >> 9) + 1) ^ *(_BYTE *)(qword_140E3D240
                                                                                               + 2
                                                                                               * ((unsigned __int64)((__int64)(48 * v3) / 48) >> 9)
                                                                                               + 1)) & 0x7F) == 0) )
  {
    v2 = 88LL * v8 + v44 + 3648;
    MiAcquirePageListLock(v42, v13, (unsigned int)v5, 1, (__int64)v48);
    MiReplaceStandbyLookaside(v3, v4, v5, v48[0]);
  }
  else
  {
    v2 = 88LL * v8 + v44 + 3648;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v42 + 32));
    MiReplaceStandbyLookaside(v3, 0xFFFFFFFFFFFFFFFFuLL, v5, 0);
    v34 = -9LL;
    v35 = *(_QWORD *)(v45 - 0x21FFFFFFFFF0LL);
    if ( (v35 & 0x400) == 0 )
      v34 = -268435457LL;
    *(_QWORD *)(v45 - 0x21FFFFFFFFF0LL) = v35 & v34;
  }
LABEL_13:
  v14 = v43[3];
  v15 = *v43 & 0xFFFFFFFFFFLL;
  v16 = v14 & 0xFFFFFFFFFFLL;
  v47 = v14 & 0xFFFFFFFFFFLL;
  *(_QWORD *)v46 = *v43 ^ (*v43 ^ *(_QWORD *)v46) & 0xFFFFFF0000000000uLL;
  v17 = 48 * v3 - 0x220000000000LL;
  *(_QWORD *)(v46 + 24) = v14 ^ (v14 ^ *(_QWORD *)(v46 + 24)) & 0xFFFFFF0000000000uLL;
  if ( v15 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v2 + 8) = v4;
    v22 = v4 & 0xFFFFFFFFFFLL;
  }
  else
  {
    v18 = 48 * v15 - 0x220000000000LL;
    if ( v8 != 0xFFFFFF && (*(_DWORD *)(a1 + 48) & 2) != 0 && MiIsDecayPfn(v15) )
    {
      MiSetPfnContainingFrame(v18, v4);
      v16 = v47;
      v17 = 48 * v3 - 0x220000000000LL;
      v22 = v4 & 0xFFFFFFFFFFLL;
    }
    else
    {
      v19 = *(_QWORD *)(v18 + 24);
      v20 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v18 + 24),
              v4 ^ (v4 ^ v19) & 0xFFFFFF0000000000uLL,
              v19);
      if ( v19 != v20 )
      {
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v18 + 24),
                  v4 ^ (v4 ^ v20) & 0xFFFFFF0000000000uLL,
                  v20);
        }
        while ( v21 != v20 );
      }
      v22 = v4 & 0xFFFFFFFFFFLL;
    }
  }
  if ( v16 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)v2 = v4;
  }
  else
  {
    v23 = (unsigned __int64 *)(48 * v16 - 0x220000000000LL);
    if ( v8 != 0xFFFFFF && (*(_DWORD *)(a1 + 48) & 2) != 0 && MiIsDecayPfn(v16) )
    {
      updated = MiUpdateTransitionPteFrame(v23[2], v4);
      *(_QWORD *)(v33 + 16) = updated;
    }
    else
    {
      *v23 = v22 | *v23 & 0xFFFFFF0000000000uLL;
    }
  }
  if ( v8 == 0xFFFFFF )
    goto LABEL_50;
  if ( v5 >= 9 )
  {
    if ( v40 >= 9 )
      goto LABEL_27;
    if ( v5 == 9 )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v2 + 16));
      v30 = 7616LL;
      if ( *(__int64 *)(v17 + 40) >= 0 )
        v30 = 16704LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v30 + v44));
      MiDecreaseAvailablePages(v44, 1LL, 0xFFFFFFFFFFFFFFFFuLL, 0);
    }
  }
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
  {
LABEL_50:
    v24 = v40;
    goto LABEL_28;
  }
  v17 = 48 * v3 - 0x220000000000LL;
LABEL_27:
  v24 = v40;
  MiReplaceSecondaryListStandbyPage(v17, v46, v5, v40, v48);
LABEL_28:
  if ( v5 == 9 )
    MiUpdateLargePageCandidateValue(v44, v3, 3, 2, 0LL);
  if ( v24 == 9 )
    MiUpdateLargePageCandidateValue(v44, v4, 3, 3, 0LL);
  if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
  {
    v27 = v3 & 0x1F;
    LOBYTE(v28) = 1;
    v29 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v3 >> 5);
    if ( v27 + 1 > 0x20 )
    {
      if ( (v3 & 0x1F) == 0 )
        goto LABEL_62;
      v38 = v3 & 0x1F;
      _InterlockedOr(v29, ((1 << (32 - v38)) - 1) << v27);
      v28 = 1LL - (unsigned int)(32 - v38);
      ++v29;
      if ( v28 >= 0x20 )
      {
        v39 = v28 >> 5;
        v28 += -32LL * (v28 >> 5);
        do
        {
          *v29++ = -1;
          --v39;
        }
        while ( v39 );
      }
      if ( v28 )
LABEL_62:
        _InterlockedOr(v29, (1 << v28) - 1);
    }
    else
    {
      _InterlockedOr(v29, 1 << v27);
    }
  }
  else if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
  {
    v25 = v3 & 0x1F;
    v26 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v3 >> 5);
    if ( v25 + 1 > 0x20 )
    {
      if ( (v3 & 0x1F) == 0 )
        goto LABEL_60;
      v36 = v3 & 0x1F;
      _InterlockedAnd(v26, ~(((1 << (32 - v36)) - 1) << v25));
      v10 = 1LL - (unsigned int)(32 - v36);
      ++v26;
      if ( v10 >= 0x20 )
      {
        v37 = v10 >> 5;
        v10 += -32LL * (v10 >> 5);
        do
        {
          *v26++ = 0;
          --v37;
        }
        while ( v37 );
      }
      if ( v10 )
LABEL_60:
        _InterlockedAnd(v26, -1 << v10);
    }
    else
    {
      _InterlockedAnd(v26, ~(1 << v25));
    }
  }
  if ( v48[0] )
  {
    if ( v50 )
      _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v52 )
      _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v54 )
      _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v56 )
      _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)(v2 + 32), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 32));
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2 + 32, retaddr);
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 32));
  }
}
