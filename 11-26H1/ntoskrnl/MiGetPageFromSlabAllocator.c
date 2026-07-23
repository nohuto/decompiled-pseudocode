/*
 * XREFs of MiGetPageFromSlabAllocator @ 0x14033C53C
 * Callers:
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiAsyncSlabReplenish @ 0x1402A4ED4 (MiAsyncSlabReplenish.c)
 *     MiRepurposeStandbySlabPage @ 0x1402AB348 (MiRepurposeStandbySlabPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiGetPageFromSlabEntry @ 0x1403599BC (MiGetPageFromSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14036B030 (MiUpdateSlabPagePlaceholderState.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x14036B420 (MiGetRepurposedSlabStandbyPage.c)
 *     MiGetPageFromSlabAllocatorByIdentity @ 0x1404FCF8C (MiGetPageFromSlabAllocatorByIdentity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetPageFromSlabAllocator(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v4; // bp
  __int64 v5; // rax
  char v6; // si
  volatile LONG *v7; // rcx
  int v8; // r12d
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 PageFromSlabEntry; // rdi
  unsigned __int64 *v14; // r14
  unsigned __int64 v15; // r14
  unsigned int v16; // ecx
  unsigned __int64 v17; // r13
  volatile LONG *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  volatile LONG *v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rsi
  _QWORD **v26; // rcx
  _QWORD *v27; // rax
  _QWORD *i; // rcx
  unsigned __int64 *v29; // rdx
  unsigned __int8 CurrentIrql; // bp
  volatile LONG *v31; // rcx
  unsigned int v32; // eax
  char v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v38; // [rsp+28h] [rbp-50h]
  int OldIrql; // [rsp+80h] [rbp+8h] BYREF
  int v40; // [rsp+88h] [rbp+10h]
  char v41; // [rsp+90h] [rbp+18h]
  _QWORD *v42; // [rsp+98h] [rbp+20h] BYREF

  v40 = a2;
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = CurrentThread[1].SavedApcStateFill[15];
    if ( v4 == 0xFF || (BYTE2(CurrentThread[1].Queue) & 1) != 0 )
      v4 = BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes);
  }
  else
  {
    v4 = -1;
  }
  v5 = *(_QWORD *)(a1 + 96);
  v6 = v4;
  v41 = v4;
  if ( !v5 )
    goto LABEL_123;
  v38 = -1LL;
  v7 = (volatile LONG *)(a1 + 16);
  v8 = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    LOBYTE(OldIrql) = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v7);
  }
  else
  {
    LOBYTE(OldIrql) = ExAcquireSpinLockShared(v7);
  }
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( v4 == 0xFF )
      goto LABEL_34;
    v9 = v4;
    v10 = (__int64 *)(*(_QWORD *)(a1 + 32) + 8LL * v4);
  }
  else
  {
    v10 = (__int64 *)(a1 + 32);
  }
  if ( !v10 )
    goto LABEL_34;
  v11 = *v10;
  if ( !v11 )
    goto LABEL_34;
  if ( v4 != 0xFF )
  {
    if ( v11 != 1 )
    {
      v12 = *(_DWORD *)(v11 + 92);
      if ( (v12 & 4) != 0 && ((v12 >> 3) & 0x3F) == v4 )
        goto LABEL_26;
    }
    if ( *(int *)(a1 + 140) >= 512 )
    {
      if ( v11 != 1 )
        v38 = *(_QWORD *)(v11 + 40);
      v11 = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 140), 0);
      goto LABEL_28;
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 140));
  }
  if ( v11 != 1 )
  {
LABEL_26:
    PageFromSlabEntry = MiGetPageFromSlabEntry(v11, a1);
    if ( PageFromSlabEntry != -1 )
      goto LABEL_98;
    v11 = 0LL;
  }
LABEL_28:
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( v4 == 0xFF )
      goto LABEL_34;
    v9 = *(_QWORD *)(a1 + 32) + 8LL * v4;
  }
  else
  {
    v9 = a1 + 32;
  }
  if ( v9 )
    *(_QWORD *)v9 = v11;
LABEL_34:
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( v4 == 0xFF )
    {
LABEL_39:
      v42 = 0LL;
      goto LABEL_45;
    }
    v14 = (unsigned __int64 *)(*(_QWORD *)(a1 + 40) + 8LL * v4);
  }
  else
  {
    v14 = (unsigned __int64 *)(a1 + 40);
  }
  if ( !v14 )
    goto LABEL_39;
  v15 = *v14;
  v42 = (_QWORD *)v15;
  if ( v15 )
  {
    if ( v4 == 0xFF || (v16 = *(_DWORD *)(v15 + 92), (v16 & 4) != 0) && ((v16 >> 3) & 0x3F) == v4 )
    {
      PageFromSlabEntry = MiGetPageFromSlabEntry(v15, a1);
      if ( PageFromSlabEntry != -1 )
        goto LABEL_91;
    }
  }
LABEL_45:
  v17 = 0LL;
  if ( v4 == 0xFF )
    goto LABEL_72;
  LOBYTE(v9) = v4;
  PageFromSlabEntry = MiGetPageFromSlabAllocatorByIdentity(a1, v9, &v42);
  if ( PageFromSlabEntry == -1 && *(_QWORD *)(a1 + 176) )
  {
    v18 = (volatile LONG *)(a1 + 16);
    if ( (_BYTE)OldIrql == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v18);
    else
      ExReleaseSpinLockShared(v18, OldIrql);
    LOBYTE(v19) = v4;
    PageFromSlabEntry = MiRepurposeStandbySlabPage(a1, v19);
    if ( PageFromSlabEntry != -1 )
    {
      CurrentIrql = 17;
      goto LABEL_102;
    }
    v41 = -1;
    v22 = (volatile LONG *)(a1 + 16);
    if ( v8 )
    {
      LOBYTE(OldIrql) = 17;
      ExAcquireSpinLockSharedAtDpcLevel(v22);
    }
    else
    {
      LOBYTE(OldIrql) = ExAcquireSpinLockShared(v22);
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
    if ( v38 != -1LL )
    {
      v15 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v15 )
        v15 ^= a1;
      if ( v15 )
      {
        do
        {
          if ( v38 > *(_QWORD *)(v15 + 48) )
          {
            v23 = *(_QWORD *)(v15 + 8);
          }
          else
          {
            if ( v38 >= *(_QWORD *)(v15 + 40) )
              break;
            v23 = *(_QWORD *)v15;
          }
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v23 )
            v15 ^= v23;
          else
            v15 = v23;
        }
        while ( v15 );
        if ( v15 )
        {
          PageFromSlabEntry = MiGetPageFromSlabEntry(v15, a1);
          if ( PageFromSlabEntry != -1 )
            goto LABEL_91;
        }
      }
    }
LABEL_72:
    v24 = *(_QWORD *)(a1 + 8);
    if ( (v24 & 1) != 0 )
    {
      if ( v24 == 1 )
        goto LABEL_97;
      v25 = (_QWORD *)(v24 ^ (a1 | 1));
    }
    else
    {
      v25 = *(_QWORD **)(a1 + 8);
    }
    if ( v25 )
    {
      do
      {
        v15 = (unsigned __int64)v25;
        if ( v25 == *(_QWORD **)(a1 + 48) )
        {
          v17 = (unsigned __int64)v25;
        }
        else
        {
          PageFromSlabEntry = MiGetPageFromSlabEntry(v25, a1);
          if ( PageFromSlabEntry != -1 )
            goto LABEL_91;
        }
        v26 = (_QWORD **)v25[1];
        v27 = v25;
        if ( v26 )
        {
          v25 = (_QWORD *)v25[1];
          for ( i = *v26; i; i = (_QWORD *)*i )
            v25 = i;
        }
        else
        {
          while ( 1 )
          {
            v25 = (_QWORD *)(v25[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v25 || (_QWORD *)*v25 == v27 )
              break;
            v27 = v25;
          }
        }
      }
      while ( v25 );
      if ( v17 )
      {
        if ( !*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) )
        {
          *(_QWORD *)(a1 + 48) = v17 | 2;
          PageFromSlabEntry = MiGetPageFromSlabEntry(v17, a1);
          if ( PageFromSlabEntry != -1 )
            goto LABEL_91;
        }
      }
    }
LABEL_97:
    PageFromSlabEntry = -1LL;
    goto LABEL_98;
  }
  v15 = (unsigned __int64)v42;
LABEL_91:
  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v29 = (unsigned __int64 *)(a1 + 32);
LABEL_95:
    if ( v29 )
      *v29 = v15;
    goto LABEL_98;
  }
  if ( v4 != 0xFF )
  {
    v29 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 8LL * v4);
    goto LABEL_95;
  }
LABEL_98:
  CurrentIrql = 17;
  v31 = (volatile LONG *)(a1 + 16);
  if ( (_BYTE)OldIrql == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v31);
  else
    ExReleaseSpinLockShared(v31, OldIrql);
LABEL_102:
  if ( PageFromSlabEntry == -1 )
  {
    v6 = v41;
LABEL_123:
    PageFromSlabEntry = MiGetRepurposedSlabStandbyPage(a1);
    if ( PageFromSlabEntry == -1 )
    {
      if ( *(_QWORD *)(a1 + 176) )
      {
        LOBYTE(v35) = v6;
        PageFromSlabEntry = MiRepurposeStandbySlabPage(a1, v35);
        if ( PageFromSlabEntry == -1 && v6 != -1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
          LOBYTE(v36) = -1;
          PageFromSlabEntry = MiRepurposeStandbySlabPage(a1, v36);
        }
      }
    }
    goto LABEL_128;
  }
  v32 = *(_DWORD *)(a1 + 128);
  if ( v32 > 4 || v32 == 2 )
  {
LABEL_128:
    v33 = v40;
    goto LABEL_129;
  }
  v33 = v40;
  v34 = 48 * PageFromSlabEntry - 0x220000000000LL;
  if ( (v40 & 0x10) != 0 )
  {
    OldIrql = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&OldIrql);
      while ( *(__int64 *)(v34 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v20) = 2;
      LOBYTE(v21) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v21, v20);
    }
    OldIrql = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&OldIrql);
      while ( *(__int64 *)(v34 + 24) < 0 );
    }
  }
  MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a1 + 128), PageFromSlabEntry, 1LL, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
LABEL_129:
  if ( *(_QWORD *)(a1 + 104)
    && !*(_QWORD *)(a1 + 208)
    && *(_QWORD *)(a1 + 96) + *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) <= *(_QWORD *)(a1 + 104) >> 1 )
  {
    MiAsyncSlabReplenish(a1, 0LL, (v33 & 0x10 | 4u) >> 2);
  }
  return PageFromSlabEntry;
}
