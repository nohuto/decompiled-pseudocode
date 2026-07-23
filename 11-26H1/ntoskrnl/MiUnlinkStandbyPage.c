/*
 * XREFs of MiUnlinkStandbyPage @ 0x1402DBCA0
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14045B25C (MiUnlinkProtectedStandbyPfn.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlinkStandbyPage(__int64 a1, char *a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  __int64 v6; // rdi
  ULONG_PTR v9; // rsi
  ULONG_PTR v10; // r8
  unsigned __int64 v11; // r10
  volatile signed __int32 *v12; // r9
  unsigned int v13; // eax
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r10
  volatile signed __int64 *v17; // r9
  volatile signed __int64 v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  __int64 v23; // rdi
  unsigned int v24; // ebp
  unsigned __int8 v25; // dl
  __int64 v26; // rdi
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r10
  volatile signed __int64 *v29; // rbp
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r11
  signed __int64 v32; // rdx
  volatile signed __int64 *v33; // r9
  signed __int64 v34; // rax
  unsigned __int64 v35; // r11
  signed __int64 v36; // rdx
  volatile signed __int32 *v37; // rcx
  unsigned int v38; // ebx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 result; // rax
  ULONG_PTR v42; // r8
  unsigned __int64 v43; // r10
  volatile signed __int32 *v44; // r9
  __int64 v45; // r8
  volatile signed __int64 v46; // rcx
  signed __int64 v47; // rax
  signed __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // [rsp+30h] [rbp-58h]
  __int64 v52; // [rsp+38h] [rbp-50h]
  __int64 BugCheckParameter2; // [rsp+40h] [rbp-48h]
  __int64 v54; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v57; // [rsp+A0h] [rbp+18h]
  int v58; // [rsp+A8h] [rbp+20h]

  v6 = 48 * a4;
  v9 = 48 * a4 - 0x220000000000LL;
  if ( !*(_QWORD *)(a3 + 16) )
    KeBugCheckEx(0x4Eu, 1uLL, a3, *(_QWORD *)(a1 + 22464), 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 16));
  if ( (a5 & 0x400000) != 0 )
    goto LABEL_9;
  if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
  {
    v42 = a4 & 0x1F;
    LOBYTE(v43) = 1;
    v44 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (a4 >> 5);
    if ( v42 + 1 > 0x20 )
    {
      if ( (a4 & 0x1F) == 0 )
        goto LABEL_50;
      _InterlockedOr(v44, ((1 << (32 - (a4 & 0x1F))) - 1) << v42);
      v43 = 1LL - (32 - (unsigned int)(a4 & 0x1F));
      ++v44;
      if ( v43 >= 0x20 )
      {
        v50 = v43 >> 5;
        v43 += -32LL * (v43 >> 5);
        do
        {
          *v44++ = -1;
          --v50;
        }
        while ( v50 );
      }
      if ( v43 )
LABEL_50:
        _InterlockedOr(v44, (1 << v43) - 1);
    }
    else
    {
      _InterlockedOr(v44, 1 << v42);
    }
    goto LABEL_9;
  }
  if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
  {
    v10 = a4 & 0x1F;
    LOBYTE(v11) = 1;
    v12 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (a4 >> 5);
    if ( v10 + 1 > 0x20 )
    {
      if ( (a4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v12, ~(((1 << (32 - (a4 & 0x1F))) - 1) << v10));
        v11 = 1LL - (32 - (unsigned int)(a4 & 0x1F));
        ++v12;
        if ( v11 >= 0x20 )
        {
          v49 = v11 >> 5;
          v11 += -32LL * (v11 >> 5);
          do
          {
            *v12++ = 0;
            --v49;
          }
          while ( v49 );
        }
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = -1 << v11;
    }
    else
    {
      v13 = ~(1 << v10);
    }
    _InterlockedAnd(v12, v13);
  }
LABEL_9:
  if ( (*(_DWORD *)(v9 + 32) & 0x8000000) != 0 )
  {
    MiUnlinkProtectedStandbyPfn(v6 - 0x220000000000LL, 0xFFFFFFFFFFLL, 0xFFFFDE0000000018uLL, 0xFFFFDE0000000000uLL);
    v58 = 1;
  }
  else
  {
    v58 = 0;
    v14 = *(_QWORD *)v9 & 0xFFFFFFFFFFLL;
    v15 = *(_QWORD *)(v9 + 24);
    v16 = v15 & 0xFFFFFFFFFFLL;
    if ( (v15 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFFLL )
      *(_QWORD *)a3 = v14;
    else
      *(_QWORD *)(48 * v16 - 0x220000000000LL) = *(_QWORD *)v9 ^ (*(_QWORD *)v9 ^ *(_QWORD *)(48 * v16 - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
    if ( v14 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(a3 + 8) = v16;
    }
    else
    {
      v17 = (volatile signed __int64 *)(48 * v14 - 0x21FFFFFFFFE8LL);
      v18 = *v17;
      v19 = _InterlockedCompareExchange64(v17, v15 ^ (v15 ^ *v17) & 0xFFFFFF0000000000uLL, *v17);
      if ( v18 != v19 )
      {
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange64(v17, v15 ^ (v15 ^ v19) & 0xFFFFFF0000000000uLL, v19);
        }
        while ( v20 != v19 );
      }
    }
  }
  v57 = *a2;
  BugCheckParameter2 = v6 / 48;
  v52 = 48 * (v6 / 48);
  v51 = v52 - 0x220000000000LL;
  v54 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v52 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v21 = MiPageToNode(v6 / 48);
  v22 = *(_DWORD *)(v52 - 0x220000000000LL + 32);
  v23 = v21;
  if ( (*(_QWORD *)(v52 - 0x220000000000LL + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_58;
  if ( (*(_DWORD *)(v51 + 32) & 0x8000000) == 0 )
  {
LABEL_17:
    v24 = HIBYTE(v22) & 7;
    goto LABEL_18;
  }
  if ( v51 < 0xFFFFDE0000000000uLL || v51 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL || MiIsDecayPfn(v52 / 48) )
  {
LABEL_58:
    v24 = 5;
  }
  else
  {
    if ( (v22 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v45) != 9 )
      goto LABEL_17;
    v24 = 5;
  }
LABEL_18:
  if ( qword_140E2D868 )
    v25 = *((_BYTE *)MiSearchChannelTable(BugCheckParameter2) + 12);
  else
    v25 = 0;
  v26 = *(_QWORD *)(v54 + 16) + 88 * (v24 + 8 * (v25 + 80 * v23));
  v27 = (8LL * (*(_DWORD *)(v9 + 36) & 0xFFE00000)) | (((*(_QWORD *)v9 >> 20) | *(_QWORD *)(v9 + 40) & 0xF80000000000000uLL) >> 20);
  v28 = (*(_QWORD *)(v9 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v9 + 36) & 0x1FFFFF) << 19);
  if ( v27 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v26 + 4168) = v28;
  }
  else
  {
    v29 = (volatile signed __int64 *)(48 * v27 - 0x21FFFFFFFFE8LL);
    v30 = v28 << 40;
    if ( v57 )
    {
      *(_QWORD *)(48 * v27 - 0x21FFFFFFFFE8LL) = v30 ^ (v30 ^ *v29) & 0xF80000FFFFFFFFFFuLL;
    }
    else
    {
      v46 = *v29;
      v47 = _InterlockedCompareExchange64(v29, v30 ^ (v30 ^ *v29) & 0xF80000FFFFFFFFFFuLL, *v29);
      if ( v46 != v47 )
      {
        do
        {
          v48 = v47;
          v47 = _InterlockedCompareExchange64(v29, v30 ^ (v30 ^ v47) & 0xF80000FFFFFFFFFFuLL, v47);
        }
        while ( v48 != v47 );
      }
    }
    *(_DWORD *)(48 * v27 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(48 * v27 - 0x21FFFFFFFFDCLL) & 0xFFE00000 | (v28 >> 19);
  }
  if ( v28 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v26 + 4160) = v27;
  }
  else
  {
    *(_QWORD *)(48 * v28 - 0x220000000000LL) = *(_QWORD *)(48 * v28 - 0x220000000000LL) & 0xFFFFFFFFFFLL | (v27 << 40);
    *(_DWORD *)(48 * v28 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(48 * v28 - 0x21FFFFFFFFDCLL) & 0x1FFFFF | ((unsigned int)(v27 >> 24) << 21);
    v31 = v27 >> 35;
    v32 = *(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL);
    v33 = (volatile signed __int64 *)(48 * v28 - 0x21FFFFFFFFD8LL);
    v34 = _InterlockedCompareExchange64(v33, v32 & 0xF07FFFFFFFFFFFFFuLL | (v31 << 55), v32);
    if ( v32 != v34 )
    {
      v35 = v31 << 55;
      do
      {
        v36 = v34;
        v34 = _InterlockedCompareExchange64(v33, v35 ^ v34 & 0xF07FFFFFFFFFFFFFuLL, v34);
      }
      while ( v36 != v34 );
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)(v26 + 4176));
  if ( v58 )
    *(_DWORD *)(v9 + 32) &= ~0x8000000u;
  if ( *a2 )
  {
    if ( a2[24] )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a2 + 2) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      a2[24] = 0;
    }
    if ( a2[48] )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a2 + 5) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      a2[48] = 0;
    }
    if ( a2[72] )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a2 + 8) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      a2[72] = 0;
    }
    if ( a2[96] )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a2 + 11) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      a2[96] = 0;
    }
    v37 = (volatile signed __int32 *)(a3 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v37, 0xBFFFFFFF);
      _InterlockedDecrement(v37);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v37, retaddr);
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a3 + 32));
  }
  MiUpdateLargePageCandidateValue(a1, a4, 3, 2, 0LL);
  v38 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, a5);
  *(_QWORD *)(v9 + 24) &= 0xFFFFFF0000000000uLL;
  MiRestoreTransitionPte(v9, 0, v39);
  v40 = 7616LL;
  if ( *(__int64 *)(v9 + 40) >= 0 )
    v40 = 16704LL;
  result = v38;
  _InterlockedDecrement64((volatile signed __int64 *)(v40 + a1));
  return result;
}
