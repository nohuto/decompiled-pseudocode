/*
 * XREFs of MiAcquirePageListSynchronization @ 0x1402999B0
 * Callers:
 *     MiActivateDecayNode @ 0x140298EF4 (MiActivateDecayNode.c)
 * Callees:
 *     MiUnlockAllBatchPages @ 0x140298560 (MiUnlockAllBatchPages.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402AB91C (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiAcquirePageListSynchronization(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r10
  int v6; // r11d
  __int64 SlabAllocatorRepurposedStandbyList; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  int v10; // ebx
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // eax
  _DWORD *v18; // rcx
  signed __int32 v19; // eax
  __int64 v20; // rdx
  signed __int32 v21; // ett
  int v22; // r8d
  ULONG_PTR v23; // r13
  int v24; // ebx
  __int64 v25; // r11
  BOOL v26; // r10d
  __int64 v27; // r12
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rbp
  int v35; // r8d
  __int64 v36; // r14
  char *v37; // r9
  unsigned int v38; // esi
  __int64 v39; // rbx
  unsigned int v40; // esi
  unsigned __int8 v41; // dl
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rcx
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rcx
  __int64 v52; // rcx
  _QWORD *v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  int i; // r10d
  int v57; // edx
  unsigned __int8 v58; // cl
  unsigned int v59; // eax
  volatile LONG *v60; // rcx
  int v61; // [rsp+60h] [rbp+8h]

  v2 = *(unsigned int *)(a1 + 60);
  if ( (_DWORD)v2 != 64 )
  {
    *(_QWORD *)(a1 + 8 * v2 + 136) = a2;
    ++*(_DWORD *)(a1 + 60);
    ++*(_DWORD *)(a1 + 56);
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE *)(a2 + 34) & 7;
  SlabAllocatorRepurposedStandbyList = *(_QWORD *)(v5 + 8LL * (*(_BYTE *)(a2 + 34) & 7) + 7520);
  v8 = (unsigned __int128)((__int64)(a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v9 = (__int64)(a2 + 0x220000000000LL) / 48;
  if ( v9 < qword_140E34930 || v9 >= qword_140E34930 + 2048 )
  {
    if ( byte_140E3BEA6 )
    {
      if ( *(_BYTE *)(qword_140E3D240 + 2 * (v9 >> 9)) )
        v10 = *(unsigned __int8 *)(qword_140E3D240 + 2 * (v9 >> 9)) - 1;
      else
        v10 = 9;
    }
    else
    {
      v10 = 9;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) |= 2u;
    v10 = 9;
  }
  if ( (*(_DWORD *)a1 & 4) != 0 && *(_DWORD *)(a1 + 44) != v10 )
    goto LABEL_21;
  *(_DWORD *)(a1 + 4) |= 1u;
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
      goto LABEL_17;
    v54 = *(_QWORD *)(a2 + 16);
    if ( (v54 & 0x400) != 0 )
    {
      v14 = 88LL * (*(_BYTE *)(a2 + 36) & 0xF) + 6016;
      goto LABEL_16;
    }
    v8 = (unsigned __int16)v54 >> 12;
    if ( (v54 & 4) != 0 )
    {
      v14 = 88LL * ((unsigned __int16)v54 >> 12) + 4608;
      goto LABEL_16;
    }
    if ( (_DWORD)v8 == *(_DWORD *)(v5 + 1300) )
    {
      if ( qword_140E2D8C0 )
      {
        v8 = qword_140E2D8C8 & v54;
        if ( (v54 & 0x10) == 0 )
          v54 &= qword_140E2D8C8;
      }
      v55 = HIDWORD(v54);
      if ( (unsigned int)v55 >= 2 && (unsigned int)v55 < 5 && (v55 & 0xFFFFFFFB) != 0 )
      {
        if ( (_DWORD)v55 == 3 )
        {
          SlabAllocatorRepurposedStandbyList = v5 + 4480;
          goto LABEL_17;
        }
        if ( (_DWORD)v55 == 2 )
        {
          v14 = 88LL * *(unsigned int *)(v5 + 1300) + 4608;
          goto LABEL_16;
        }
      }
    }
    SlabAllocatorRepurposedStandbyList = v5 + 4352;
    goto LABEL_17;
  }
  v11 = *(_DWORD *)(a2 + 32);
  if ( (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_143;
  if ( (*(_DWORD *)(a2 + 32) & 0x8000000) == 0 )
    goto LABEL_11;
  if ( a2 < 0xFFFFDE0000000000uLL
    || (v8 = 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL, a2 >= v8)
    || (unsigned int)MiIsDecayPfn((__int64)(a2 + 0x220000000000LL) / 48) )
  {
LABEL_143:
    v12 = 5;
    goto LABEL_12;
  }
  if ( (v11 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(a2) == 9 )
  {
    v12 = 5;
    goto LABEL_12;
  }
LABEL_11:
  v12 = HIBYTE(v11) & 7;
LABEL_12:
  v13 = *(_DWORD *)(a1 + 4) | 4;
  *(_DWORD *)(a1 + 4) = v13;
  if ( (v13 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 4) = v13 & 0xFFFFFFFA;
  }
  else if ( v10 == 9 && (*(_DWORD *)(a2 + 32) & 0x8000000) != 0 )
  {
    *(_DWORD *)(a1 + 4) |= 8u;
    v14 = 88LL * v12 + 3648;
LABEL_16:
    SlabAllocatorRepurposedStandbyList = v5 + v14;
    goto LABEL_17;
  }
  SlabAllocatorRepurposedStandbyList = v5 + 88LL * v12 + 3648;
  if ( v10 < 9 )
  {
    if ( (*(_DWORD *)(a2 + 32) & 0x8000000) != 0 )
    {
      SlabAllocatorRepurposedStandbyList = MiGetSlabAllocatorRepurposedStandbyList(a2, (unsigned int)v10, 0LL);
      v59 = *(_DWORD *)(a1 + 4) | 0x10;
    }
    else
    {
      v59 = *(_DWORD *)(a1 + 4) & 0xFFFFFFFE;
    }
    *(_DWORD *)(a1 + 4) = v59;
    *(_DWORD *)(a1 + 4) = v59 & 0xFFFFFFFB;
  }
LABEL_17:
  v15 = *(_QWORD *)(a1 + 48);
  if ( !v15 )
  {
    *(_QWORD *)(a1 + 48) = SlabAllocatorRepurposedStandbyList;
    goto LABEL_19;
  }
  if ( v15 == SlabAllocatorRepurposedStandbyList )
  {
LABEL_19:
    v16 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 4) == 0 )
    {
      *(_DWORD *)(a1 + 44) = v10;
      *(_DWORD *)a1 = v16 | 4;
    }
  }
LABEL_21:
  v17 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 8) != 0 )
    return;
  if ( (v17 & 0x200) != 0 )
    goto LABEL_145;
  v18 = (_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v18);
    v19 = *v18 & 0x7FFFFFFF;
    while ( 1 )
    {
      v20 = (unsigned int)(v19 + 1);
      v21 = v19;
      v19 = _InterlockedCompareExchange(v18, v20, v19);
      if ( v21 == v19 )
        break;
      if ( v19 < 0 )
      {
        LOBYTE(v20) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v18, v20);
        break;
      }
    }
  }
  else
  {
    LOBYTE(v8) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v18, v8);
  }
  *(_DWORD *)a1 |= 1u;
  v22 = 0;
  v61 = 0;
  v23 = (__int64)(a2 + 0x220000000000LL) / 48;
  while ( !v22 )
  {
    v24 = 0;
    v25 = *(_QWORD *)(a1 + 48);
    v26 = v23 >= qword_140E34930 && v23 < qword_140E34930 + 2048;
    v27 = *(int *)(a1 + 44);
    if ( (int)v27 < 9 && *(_DWORD *)(v25 + 28) == 2 && (*(_DWORD *)(a2 + 32) & 0x8000000) != 0 )
      v24 = 1;
    v28 = *(_QWORD *)a2 & 0xFFFFFFFFFFLL;
    v29 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFLL;
    if ( v29 == 0x3FFFFFFFFFLL )
      v30 = v25 + 40;
    else
      v30 = 48 * v29 - 0x220000000000LL;
    v31 = *(unsigned int *)(a1 + 60);
    if ( (_DWORD)v31 == 64 )
      goto LABEL_150;
    if ( *(__int64 *)(v30 + 24) < 0 )
    {
      v32 = (_QWORD *)(a1 + 8 * (*(unsigned int *)(a1 + 60) + 17LL));
      while ( v32 != (_QWORD *)(a1 + 136) )
      {
        if ( *--v32 == v30 )
          goto LABEL_38;
      }
      goto LABEL_150;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      goto LABEL_150;
    *(_QWORD *)(a1 + 8 * v31 + 136) = v30;
    ++*(_DWORD *)(a1 + 60);
    ++*(_DWORD *)(a1 + 56);
LABEL_38:
    if ( v28 == 0x3FFFFFFFFFLL )
      v33 = v25 + 40;
    else
      v33 = 48 * v28 - 0x220000000000LL;
    if ( v28 != v29 )
    {
      v52 = *(unsigned int *)(a1 + 60);
      if ( (_DWORD)v52 == 64 )
        goto LABEL_150;
      if ( *(__int64 *)(v33 + 24) < 0 )
      {
        v53 = (_QWORD *)(a1 + 8 * (*(unsigned int *)(a1 + 60) + 17LL));
        while ( v53 != (_QWORD *)(a1 + 136) )
        {
          if ( *--v53 == v33 )
            goto LABEL_41;
        }
        goto LABEL_150;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
        goto LABEL_150;
      *(_QWORD *)(a1 + 8 * v52 + 136) = v33;
      ++*(_DWORD *)(a1 + 60);
      ++*(_DWORD *)(a1 + 56);
    }
LABEL_41:
    if ( *(_DWORD *)(v25 + 28) != 2 || v26 || v24 )
      return;
    v34 = 48 * v23 - 0x220000000000LL;
    v35 = dword_140E2D804;
    v36 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v34 + 40) >> 43) & 0x3FFLL));
    if ( dword_140E2D800 > (unsigned int)dword_140E2D804
      || (v37 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v23 < *(_QWORD *)v37)
      || dword_140E2D800 != dword_140E2D804 && v23 >= *((_QWORD *)v37 + 2) )
    {
      for ( i = 0; ; i = v57 + 1 )
      {
        while ( 1 )
        {
          if ( v35 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v23, 0LL, 0LL);
          v57 = (i + v35) >> 1;
          v37 = (char *)qword_140E2D860 + 16 * v57;
          if ( v23 >= *(_QWORD *)v37 )
            break;
          if ( !v57 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v23, (ULONG_PTR)v37, 0LL);
          v35 = v57 - 1;
        }
        if ( v57 == dword_140E2D804 || v23 < *((_QWORD *)v37 + 2) )
          break;
      }
      dword_140E2D800 = (i + v35) >> 1;
    }
    v38 = *(_DWORD *)(v34 + 32);
    v39 = *((unsigned int *)v37 + 2);
    if ( (*(_QWORD *)(v34 + 40) & 0x20000000000000LL) != 0 )
      goto LABEL_141;
    if ( (*(_DWORD *)(v34 + 32) & 0x8000000) == 0 )
      goto LABEL_49;
    if ( v34 < 0xFFFFDE0000000000uLL
      || v34 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
      || (unsigned int)MiIsDecayPfn((__int64)(48 * v23) / 48) )
    {
LABEL_141:
      v40 = 5;
    }
    else
    {
      if ( (v38 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v34) != 9 )
      {
LABEL_49:
        v40 = HIBYTE(v38) & 7;
        goto LABEL_50;
      }
      v40 = 5;
    }
LABEL_50:
    if ( qword_140E2D868 )
      v41 = *(_BYTE *)(MiSearchChannelTable(v23) + 12);
    else
      v41 = 0;
    v42 = *(_QWORD *)(v36 + 16) + 56320 * v39;
    if ( (int)v27 < 9 )
    {
      if ( (_DWORD)v27 == 8 )
        v58 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)((__int64)(48 * v23) / 48) >> 9) + 1) & 0x7F;
      else
        v58 = 0;
      v43 = *(_QWORD *)(232 * v27 + v42 + 14824) + 88 * (v40 + 8LL * v58);
    }
    else
    {
      v43 = v42 + 88 * (v40 + 8LL * v41) + 4160;
    }
    v44 = (8LL * (*(_DWORD *)(a2 + 36) & 0xFFE00000)) | (((*(_QWORD *)a2 >> 20) | *(_QWORD *)(a2 + 40) & 0xF80000000000000uLL) >> 20);
    if ( v44 == 0x3FFFFFFFFFLL )
      v45 = v43 + 40;
    else
      v45 = 48 * v44 - 0x220000000000LL;
    v46 = *(unsigned int *)(a1 + 60);
    if ( (_DWORD)v46 != 64 )
    {
      if ( *(__int64 *)(v45 + 24) >= 0 )
      {
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
        {
          *(_QWORD *)(a1 + 8 * v46 + 136) = v45;
          ++*(_DWORD *)(a1 + 60);
          ++*(_DWORD *)(a1 + 56);
LABEL_61:
          v48 = (*(_QWORD *)(a2 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(a2 + 36) & 0x1FFFFF) << 19);
          v49 = v48 == 0x3FFFFFFFFFLL ? v43 + 40 : 48 * v48 - 0x220000000000LL;
          v50 = *(unsigned int *)(a1 + 60);
          if ( (_DWORD)v50 != 64 )
          {
            if ( *(__int64 *)(v49 + 24) >= 0 )
            {
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
              {
                *(_QWORD *)(a1 + 8 * v50 + 136) = v49;
                ++*(_DWORD *)(a1 + 60);
                ++*(_DWORD *)(a1 + 56);
                return;
              }
            }
            else
            {
              v51 = (_QWORD *)(a1 + 8 * (*(unsigned int *)(a1 + 60) + 17LL));
              while ( v51 != (_QWORD *)(a1 + 136) )
              {
                if ( *--v51 == v49 )
                  return;
              }
            }
          }
        }
      }
      else
      {
        v47 = (_QWORD *)(a1 + 8 * (*(unsigned int *)(a1 + 60) + 17LL));
        while ( v47 != (_QWORD *)(a1 + 136) )
        {
          if ( *--v47 == v45 )
            goto LABEL_61;
        }
      }
    }
LABEL_150:
    MiUnlockAllBatchPages(a1, a2);
    v22 = ++v61;
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 32LL));
  v17 = *(_DWORD *)a1 & 0xFFFFFFFE;
LABEL_145:
  v60 = (volatile LONG *)(*(_QWORD *)(a1 + 48) + 32LL);
  *(_DWORD *)a1 = v17 | 2;
  ExAcquireSpinLockExclusiveAtDpcLevel(v60);
}
