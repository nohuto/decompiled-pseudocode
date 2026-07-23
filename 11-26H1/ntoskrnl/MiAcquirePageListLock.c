/*
 * XREFs of MiAcquirePageListLock @ 0x1402DD540
 * Callers:
 *     MiUnlinkPageFromBadList @ 0x1402A9E2C (MiUnlinkPageFromBadList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 *     MiUpdatePageAttributeStamp @ 0x1404C69C8 (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAcquirePageListLock(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v6; // r12d
  int v8; // r15d
  int v9; // ecx
  int v10; // r11d
  __int64 v12; // r14
  __int64 v13; // rdx
  ULONG_PTR v14; // r14
  int v15; // ebp
  _DWORD *v16; // rsi
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r15
  char v24; // cl
  __int64 v25; // r10
  unsigned __int64 v26; // r8
  int v27; // r9d
  char *v28; // rbx
  unsigned int v29; // ebp
  __int64 v30; // rbx
  unsigned int v31; // ebp
  unsigned __int8 v32; // dl
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v42; // rdx
  unsigned __int64 j; // rcx
  int i; // r10d
  int v45; // edx
  unsigned __int8 v46; // cl
  __int64 v47; // r8
  _QWORD *v48; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v50; // [rsp+70h] [rbp+8h]
  int v51; // [rsp+80h] [rbp+18h]
  int v53; // [rsp+90h] [rbp+28h]

  v51 = a3;
  v6 = 0;
  v8 = a4;
  v9 = 0;
  v53 = 0;
  v10 = a3;
  v12 = (unsigned __int128)((a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v13 = 1LL;
  v14 = ((unsigned __int64)v12 >> 63) + (v12 >> 3);
  if ( v14 < qword_140E34930 || (v15 = 1, v14 >= qword_140E34930 + 2048) )
    v15 = 0;
  if ( (int)a3 < 9 && *(_DWORD *)(a1 + 28) == 2 )
  {
    if ( (*(_DWORD *)(a2 + 32) & 0x8000000) != 0 )
      v9 = 1;
    v53 = v9;
  }
  *(_BYTE *)a5 = 1;
  v16 = (_DWORD *)(a1 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v16);
    v17 = *v16 & 0x7FFFFFFF;
    while ( 1 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange(v16, v17 + 1, v17);
      if ( v18 == v17 )
        break;
      if ( v17 < 0 )
      {
        LOBYTE(v13) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(a1 + 32), v13, a3);
        goto LABEL_71;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(a1 + 32), 0xFFu);
LABEL_71:
    v10 = v51;
  }
  v19 = *(_QWORD *)a2 & 0xFFFFFFFFFFLL;
  v20 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFLL;
  if ( v20 == 0x3FFFFFFFFFLL )
    v21 = a1 + 40;
  else
    v21 = 48 * v20 - 0x220000000000LL;
  v22 = a1 + 40;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    *(_QWORD *)(a5 + 16) = v21;
    v23 = a5 + 16;
    *(_QWORD *)(a5 + 8) = v20;
    *(_BYTE *)(a5 + 24) = 1;
    if ( v19 != 0x3FFFFFFFFFLL )
      v22 = 48 * v19 - 0x220000000000LL;
    if ( v19 == v20 )
    {
      v24 = 0;
    }
    else
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
LABEL_42:
        v8 = a4;
        goto LABEL_43;
      }
      *(_QWORD *)(a5 + 40) = v22;
      v24 = 1;
      *(_QWORD *)(a5 + 32) = v19;
    }
    *(_BYTE *)(a5 + 48) = v24;
    if ( *(_DWORD *)(a1 + 28) != 2 || v15 || v53 )
      return 1LL;
    v25 = 48 * v14;
    v26 = 48 * v14 - 0x220000000000LL;
    v27 = dword_140E2D804;
    v50 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v26 + 40) >> 43) & 0x3FFLL));
    if ( dword_140E2D800 > (unsigned int)dword_140E2D804
      || (v28 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v14 < *(_QWORD *)v28)
      || dword_140E2D800 != dword_140E2D804 && v14 >= *((_QWORD *)v28 + 2) )
    {
      for ( i = 0; ; i = v45 + 1 )
      {
        while ( 1 )
        {
          if ( v27 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v14, 0LL, 0LL);
          v45 = (i + v27) >> 1;
          v28 = (char *)qword_140E2D860 + 16 * v45;
          if ( v14 >= *(_QWORD *)v28 )
            break;
          if ( !v45 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v14, (ULONG_PTR)qword_140E2D860, 0LL);
          v27 = v45 - 1;
        }
        if ( v45 == dword_140E2D804 || v14 < *((_QWORD *)v28 + 2) )
          break;
      }
      v25 = 48 * v14;
      dword_140E2D800 = v45;
    }
    v29 = *(_DWORD *)(v26 + 32);
    v30 = *((unsigned int *)v28 + 2);
    if ( (*(_QWORD *)(v26 + 40) & 0x20000000000000LL) != 0 )
      goto LABEL_102;
    if ( (*(_DWORD *)(v26 + 32) & 0x8000000) == 0 )
    {
LABEL_23:
      v31 = HIBYTE(v29) & 7;
      goto LABEL_24;
    }
    if ( v26 < 0xFFFFDE0000000000uLL || v26 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL || MiIsDecayPfn(v25 / 48) )
    {
LABEL_102:
      v31 = 5;
    }
    else
    {
      if ( (v29 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v47) != 9 )
        goto LABEL_23;
      v31 = 5;
    }
LABEL_24:
    if ( qword_140E2D868 )
    {
      v48 = MiSearchChannelTable(v14);
      v10 = v51;
      v32 = *((_BYTE *)v48 + 12);
    }
    else
    {
      v32 = 0;
    }
    v33 = *(_QWORD *)(v50 + 16) + 56320 * v30;
    if ( v10 < 9 )
    {
      if ( v10 == 8 )
        v46 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)((__int64)(48 * v14) / 48) >> 9) + 1) & 0x7F;
      else
        v46 = 0;
      v34 = *(_QWORD *)(232LL * v10 + v33 + 14824) + 88 * (v31 + 8LL * v46);
    }
    else
    {
      v34 = v33 + 88 * (v31 + 8LL * v32) + 4160;
    }
    v35 = v34 + 40;
    v36 = (8LL * (*(_DWORD *)(a2 + 36) & 0xFFE00000)) | (((*(_QWORD *)a2 >> 20) | *(_QWORD *)(a2 + 40) & 0xF80000000000000uLL) >> 20);
    if ( v36 == 0x3FFFFFFFFFLL )
      v37 = v34 + 40;
    else
      v37 = 48 * v36 - 0x220000000000LL;
    v19 = (*(_QWORD *)(a2 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(a2 + 36) & 0x1FFFFF) << 19);
    if ( v19 != 0x3FFFFFFFFFLL )
      v35 = 48 * v19 - 0x220000000000LL;
    v38 = 0LL;
    v39 = a5 + 16;
    while ( v38 < 4 )
    {
      if ( *(_BYTE *)(v39 + 8) && v37 == *(_QWORD *)v39 )
        goto LABEL_36;
      ++v38;
      v39 += 24LL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
      goto LABEL_42;
    *(_BYTE *)(a5 + 96) = 1;
LABEL_36:
    *(_QWORD *)(a5 + 88) = v37;
    v40 = 0LL;
    *(_QWORD *)(a5 + 80) = v36;
    while ( v40 < 4 )
    {
      if ( *(_BYTE *)(v23 + 8) && v35 == *(_QWORD *)v23 )
        return 1LL;
      ++v40;
      v23 += 24LL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
      goto LABEL_42;
    *(_QWORD *)(a5 + 64) = v35;
    *(_QWORD *)(a5 + 56) = v19;
    *(_BYTE *)(a5 + 72) = 1;
    return 1LL;
  }
LABEL_43:
  if ( *(_BYTE *)a5 )
  {
    if ( *(_BYTE *)(a5 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a5 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a5 + 24) = 0;
    }
    if ( *(_BYTE *)(a5 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a5 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a5 + 48) = 0;
    }
    if ( *(_BYTE *)(a5 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a5 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a5 + 72) = 0;
    }
    if ( *(_BYTE *)(a5 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a5 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a5 + 96) = 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v16, 0xBFFFFFFF);
      _InterlockedDecrement(v16);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v16, retaddr);
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
  }
  *(_BYTE *)a5 = 0;
  if ( v8 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(v16, 0x1Fu) )
        v6 = ExpWaitForSpinLockExclusiveAndAcquire(v16, 0xFFu);
      v42 = (unsigned int)*v16;
      for ( j = v42 & 0xFFFFFFFFBFFFFFFFuLL; (v42 & 0xBFFFFFFF) != 0x80000000; j = v42 & 0xFFFFFFFFBFFFFFFFuLL )
      {
        if ( (v42 & 0x40000000) == 0 )
          _InterlockedOr(v16, 0x40000000u);
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(j, v42, v19) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
        v42 = (unsigned int)*v16;
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16, 0xFFu);
    }
    return 1LL;
  }
  return 0LL;
}
