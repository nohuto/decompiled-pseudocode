/*
 * XREFs of MiArePagefileContentsCorrupted @ 0x1402BD7B0
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14038ED2C (MiValidatePagefilePageHash.c)
 *     MiIsStandbyPageCorrupted @ 0x140503ABC (MiIsStandbyPageCorrupted.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReadEntirePageHashEntry @ 0x14048A5E8 (MiReadEntirePageHashEntry.c)
 *     MiPageHashBugCheck @ 0x140531E94 (MiPageHashBugCheck.c)
 */

__int64 __fastcall MiArePagefileContentsCorrupted(__int64 a1, __int128 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  unsigned int v6; // ebp
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r13
  unsigned __int64 v11; // rdi
  unsigned int v12; // ebx
  _DWORD *v13; // rsi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  unsigned __int64 v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 *v20; // rax
  unsigned __int64 v21; // r11
  __int64 v22; // rdx
  __int64 *v23; // r8
  unsigned __int64 v24; // r14
  __int64 v25; // rsi
  int v26; // ecx
  int v27; // r15d
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rcx
  _KPROCESS *v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  volatile signed __int32 *v33; // rsi
  unsigned int v34; // r14d
  __int64 i; // rcx
  unsigned __int64 v37; // rdi
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // edx
  unsigned __int64 v44; // [rsp+30h] [rbp-88h]
  __int64 v45; // [rsp+30h] [rbp-88h]
  __int128 v46; // [rsp+38h] [rbp-80h] BYREF
  __int128 v47; // [rsp+48h] [rbp-70h] BYREF
  int v48[4]; // [rsp+58h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]
  unsigned __int8 v51; // [rsp+C8h] [rbp+10h] BYREF
  int v52; // [rsp+D0h] [rbp+18h]

  v52 = a3;
  v3 = 48 * a1;
  *(_QWORD *)&v46 = 48 * a1;
  v5 = a1;
  *(_OWORD *)v48 = 0LL;
  v47 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)(48 * a1 - 0x220000000000LL + 16);
  v8 = (unsigned __int16)v7 >> 12;
  v9 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v10 = *(_QWORD *)(v9 + 8 * v8 + 22304);
  if ( (v7 & 8) != 0 )
  {
    v37 = *(_QWORD *)(48 * a1 - 0x220000000000LL + 16);
    if ( qword_140E2D8C0 && (v7 & 0x10) == 0 )
      v37 = qword_140E2D8C8 & v7;
    v11 = HIDWORD(v37);
  }
  else
  {
    LODWORD(v11) = 0;
  }
  v12 = (v7 >> 5) & 0x1F;
  if ( !a2 )
  {
    v13 = (_DWORD *)(v10 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v13);
      v14 = *v13 & 0x7FFFFFFF;
      while ( 1 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange(v13, v14 + 1, v14);
        if ( v15 == v14 )
          break;
        if ( v14 < 0 )
        {
          LOBYTE(v9) = -1;
          ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(v10 + 200), v9, v8);
          break;
        }
      }
    }
    else
    {
      LOBYTE(v9) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10 + 200, v9);
    }
    v16 = *(_QWORD *)(v10 + 184) + (unsigned int)(dword_140E360CC * v11);
    if ( (*(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
    {
      LODWORD(v47) = *(_DWORD *)v16;
      if ( dword_140E360D0 )
      {
        *((_QWORD *)&v47 + 1) = *(_QWORD *)(v16 + 8);
        DWORD1(v47) = *(_DWORD *)(v16 + 4);
      }
      else
      {
        *((_QWORD *)&v47 + 1) = 0LL;
        DWORD1(v47) = 0;
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v10 + 200));
    v3 = v46;
    a2 = &v47;
    v5 = a1;
  }
  v17 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 3 || v17 == 2 )
    return 0LL;
  if ( !v17 && (dword_140FBF210 & 1) == 0 && v12 != 31 )
  {
    if ( v12 >> 3 == 3 )
    {
      if ( (v12 & 7) != 0 )
        return 0LL;
    }
    else if ( v12 >> 3 == 1 )
    {
      return 0LL;
    }
  }
  v18 = *(_QWORD *)(v3 - 0x220000000000LL + 16);
  v44 = *(_QWORD *)(v3 - 0x220000000000LL + 8);
  if ( (v18 & 8) != 0 )
  {
    if ( qword_140E2D8C0 && (v18 & 0x10) == 0 )
      v18 &= qword_140E2D8C8;
    v19 = HIDWORD(v18);
  }
  else
  {
    LODWORD(v19) = 0;
  }
  v51 = 0;
  v20 = (__int64 *)MiMapPageInHyperSpaceWorker(v5, &v51, 0);
  v21 = (unsigned __int64)v20;
  v22 = *v20;
  v23 = v20 + 508;
  do
  {
    v22 += v20[4];
    v20 += 4;
  }
  while ( v20 != v23 );
  v24 = v51;
  v25 = v22 + v20[3] + v20[1] + v20[2];
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  v26 = v25;
  *(_QWORD *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (_BYTE)v24 != 17 )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
      v26 = v25;
    }
    __writecr8(v24);
  }
  v48[1] = v19;
  v27 = HIDWORD(v25) + v26;
  if ( (unsigned int)(HIDWORD(v25) + v26) < 3 )
    v27 = 3;
  v48[0] = v27;
  v28 = 0xFFFFF6FB7DBEDF68uLL;
  v29 = v44;
  v30 = (_KPROCESS *)a1;
  v31 = *(_DWORD *)a2;
  if ( (*(_QWORD *)(v46 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL) == a1 )
    v29 = 0xFFFFF6FB7DBEDF68uLL;
  v32 = v29 | 1;
  v45 = v32;
  *(_QWORD *)&v48[2] = v32;
  if ( v31 == 1 )
    goto LABEL_66;
  if ( v31 )
  {
    if ( dword_140E360D0 )
    {
      if ( *((_QWORD *)a2 + 1) == v32 )
      {
        v39 = 0;
        if ( *((_DWORD *)a2 + 1) != (_DWORD)v19 )
          v39 = 56;
        v34 = v39;
      }
      else
      {
        v34 = 59;
      }
    }
    else
    {
      v34 = 0;
    }
  }
  else
  {
    v33 = (volatile signed __int32 *)(v10 + 200);
    v34 = 0;
    v46 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(v33, 0x1Fu) )
        v34 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v10 + 200), 0xFFu);
      for ( i = *(unsigned int *)v33; (*v33 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v33 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(v33, 0x40000000u);
        if ( (++v34 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i, v30, v28) )
        {
          HvlNotifyLongSpinWait(v34);
        }
        else
        {
          _mm_pause();
        }
      }
      v34 = 0;
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v10 + 200), 0xFFu);
    }
    if ( (*(_QWORD *)((((*(_QWORD *)(v10 + 184) + (unsigned __int64)(unsigned int)(dword_140E360CC * v11)) >> 9) & 0x7FFFFFFFF8LL)
                    - 0x98000000000LL) & 1) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 200));
      return 0LL;
    }
    MiReadEntirePageHashEntry(*(_QWORD *)(v10 + 184) + (unsigned int)(dword_140E360CC * v11), &v46);
    if ( (_DWORD)v46 == v27 )
    {
      *(_DWORD *)a2 = v46;
      if ( dword_140E360D0 )
      {
        v42 = *((_QWORD *)&v46 + 1);
        v43 = DWORD1(v46);
        *((_QWORD *)a2 + 1) = *((_QWORD *)&v46 + 1);
        *((_DWORD *)a2 + 1) = v43;
        if ( dword_140E360D0 )
        {
          if ( v42 != v45 )
            v34 = 59;
          if ( v43 != (_DWORD)v19 )
            v34 = 56;
        }
      }
    }
    else if ( (*(_BYTE *)(48 * ((v41 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFDELL) & 0x10) != 0 )
    {
      if ( !stru_140E2ED08.SuspendEvent.Header.Type )
        v34 = 58;
    }
    else
    {
      *(_DWORD *)v40 = v27;
      if ( dword_140E360D0 )
      {
        *(_QWORD *)(v40 + 8) = v45;
        *(_DWORD *)(v40 + 4) = v19;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v33 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v10 + 200), retaddr);
    if ( !v34 )
      return 0LL;
    v30 = (_KPROCESS *)a1;
  }
  v38 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
LABEL_66:
    v34 = 60;
  }
  else if ( v38 == v27 || (unsigned int)(v38 - 2) <= 1 )
  {
    if ( !v34 )
      return 0LL;
  }
  else if ( v34 )
  {
    v34 = 57;
  }
  else
  {
    v34 = 63;
  }
  ++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[12];
  stru_140E2ED08.SavedApcState.Process = v30;
  if ( !*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[8] )
    MiPageHashBugCheck(v34, (unsigned int)v11, (int)v48);
  if ( *(_DWORD *)&stru_140E2ED08.SavedApcStateFill[8] == 1 )
    return 1;
  return v6;
}
