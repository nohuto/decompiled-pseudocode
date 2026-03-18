/*
 * XREFs of MiArePagefileContentsCorrupted @ 0x1402DB9F0
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14038CF80 (MiValidatePagefilePageHash.c)
 *     MiIsStandbyPageCorrupted @ 0x14050A00C (MiIsStandbyPageCorrupted.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReadEntirePageHashEntry @ 0x140490A98 (MiReadEntirePageHashEntry.c)
 *     MiPageHashBugCheck @ 0x14052F994 (MiPageHashBugCheck.c)
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
  unsigned __int64 v28; // rcx
  _KPROCESS *v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  volatile signed __int32 *v32; // rsi
  unsigned int v33; // r14d
  volatile signed __int32 i; // ecx
  unsigned __int64 v36; // rdi
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  int v42; // edx
  unsigned __int64 v43; // [rsp+30h] [rbp-88h]
  __int64 v44; // [rsp+30h] [rbp-88h]
  __int128 v45; // [rsp+38h] [rbp-80h] BYREF
  __int128 v46; // [rsp+48h] [rbp-70h] BYREF
  int v47[4]; // [rsp+58h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]
  unsigned __int8 v50; // [rsp+C8h] [rbp+10h] BYREF
  int v51; // [rsp+D0h] [rbp+18h]

  v51 = a3;
  v3 = 48 * a1;
  *(_QWORD *)&v45 = 48 * a1;
  v5 = a1;
  *(_OWORD *)v47 = 0LL;
  v46 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)(48 * a1 - 0x220000000000LL + 16);
  v8 = (unsigned __int16)v7 >> 12;
  v9 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v10 = *(_QWORD *)(v9 + 8 * v8 + 22304);
  if ( (v7 & 8) != 0 )
  {
    v36 = *(_QWORD *)(48 * a1 - 0x220000000000LL + 16);
    if ( qword_140E2D740 && (v7 & 0x10) == 0 )
      v36 = qword_140E2D748 & v7;
    v11 = HIDWORD(v36);
  }
  else
  {
    LODWORD(v11) = 0;
  }
  v12 = (v7 >> 5) & 0x1F;
  if ( !a2 )
  {
    v13 = (_DWORD *)(v10 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    v16 = *(_QWORD *)(v10 + 184) + (unsigned int)(dword_140E35F4C * v11);
    if ( (*(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
    {
      LODWORD(v46) = *(_DWORD *)v16;
      if ( dword_140E35F50 )
      {
        *((_QWORD *)&v46 + 1) = *(_QWORD *)(v16 + 8);
        DWORD1(v46) = *(_DWORD *)(v16 + 4);
      }
      else
      {
        *((_QWORD *)&v46 + 1) = 0LL;
        DWORD1(v46) = 0;
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v10 + 200));
    v3 = v45;
    a2 = &v46;
    v5 = a1;
  }
  v17 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 3 || v17 == 2 )
    return 0LL;
  if ( !v17 && (dword_140FBE210 & 1) == 0 && v12 != 31 )
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
  v43 = *(_QWORD *)(v3 - 0x220000000000LL + 8);
  if ( (v18 & 8) != 0 )
  {
    if ( qword_140E2D740 && (v18 & 0x10) == 0 )
      v18 &= qword_140E2D748;
    v19 = HIDWORD(v18);
  }
  else
  {
    LODWORD(v19) = 0;
  }
  v50 = 0;
  v20 = (__int64 *)MiMapPageInHyperSpaceWorker(v5, &v50, 0);
  v21 = (unsigned __int64)v20;
  v22 = *v20;
  v23 = v20 + 508;
  do
  {
    v22 += v20[4];
    v20 += 4;
  }
  while ( v20 != v23 );
  v24 = v50;
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
  v47[1] = v19;
  v27 = HIDWORD(v25) + v26;
  if ( (unsigned int)(HIDWORD(v25) + v26) < 3 )
    v27 = 3;
  v47[0] = v27;
  v28 = v43;
  v29 = (_KPROCESS *)a1;
  v30 = *(_DWORD *)a2;
  if ( (*(_QWORD *)(v45 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL) == a1 )
    v28 = 0xFFFFF6FB7DBEDF68uLL;
  v31 = v28 | 1;
  v44 = v31;
  *(_QWORD *)&v47[2] = v31;
  if ( v30 == 1 )
    goto LABEL_66;
  if ( v30 )
  {
    if ( dword_140E35F50 )
    {
      if ( *((_QWORD *)a2 + 1) == v31 )
      {
        v38 = 0;
        if ( *((_DWORD *)a2 + 1) != (_DWORD)v19 )
          v38 = 56;
        v33 = v38;
      }
      else
      {
        v33 = 59;
      }
    }
    else
    {
      v33 = 0;
    }
  }
  else
  {
    v32 = (volatile signed __int32 *)(v10 + 200);
    v33 = 0;
    v45 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      if ( _interlockedbittestandset(v32, 0x1Fu) )
        v33 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v10 + 200), 0xFFu);
      for ( i = *v32; (*v32 & 0xBFFFFFFF) != 0x80000000; i = *v32 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(v32, 0x40000000u);
        if ( (++v33 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v33);
        }
        else
        {
          _mm_pause();
        }
      }
      v33 = 0;
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v10 + 200), 0xFFu);
    }
    if ( (*(_QWORD *)((((*(_QWORD *)(v10 + 184) + (unsigned __int64)(unsigned int)(dword_140E35F4C * v11)) >> 9) & 0x7FFFFFFFF8LL)
                    - 0x98000000000LL) & 1) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 200));
      return 0LL;
    }
    MiReadEntirePageHashEntry(*(_QWORD *)(v10 + 184) + (unsigned int)(dword_140E35F4C * v11), &v45);
    if ( (_DWORD)v45 == v27 )
    {
      *(_DWORD *)a2 = v45;
      if ( dword_140E35F50 )
      {
        v41 = *((_QWORD *)&v45 + 1);
        v42 = DWORD1(v45);
        *((_QWORD *)a2 + 1) = *((_QWORD *)&v45 + 1);
        *((_DWORD *)a2 + 1) = v42;
        if ( dword_140E35F50 )
        {
          if ( v41 != v44 )
            v33 = 59;
          if ( v42 != (_DWORD)v19 )
            v33 = 56;
        }
      }
    }
    else if ( (*(_BYTE *)(48 * ((v40 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFDELL) & 0x10) != 0 )
    {
      if ( !stru_140E2EB88.SuspendEvent.Header.Type )
        v33 = 58;
    }
    else
    {
      *(_DWORD *)v39 = v27;
      if ( dword_140E35F50 )
      {
        *(_QWORD *)(v39 + 8) = v44;
        *(_DWORD *)(v39 + 4) = v19;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *v32 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v10 + 200), retaddr);
    if ( !v33 )
      return 0LL;
    v29 = (_KPROCESS *)a1;
  }
  v37 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
LABEL_66:
    v33 = 60;
  }
  else if ( v37 == v27 || (unsigned int)(v37 - 2) <= 1 )
  {
    if ( !v33 )
      return 0LL;
  }
  else if ( v33 )
  {
    v33 = 57;
  }
  else
  {
    v33 = 63;
  }
  ++*(_DWORD *)&stru_140E2EB88.SavedApcStateFill[12];
  stru_140E2EB88.SavedApcState.Process = v29;
  if ( !*(_DWORD *)&stru_140E2EB88.SavedApcStateFill[8] )
    MiPageHashBugCheck(v33, (unsigned int)v11, (int)v47);
  if ( *(_DWORD *)&stru_140E2EB88.SavedApcStateFill[8] == 1 )
    return 1;
  return v6;
}
