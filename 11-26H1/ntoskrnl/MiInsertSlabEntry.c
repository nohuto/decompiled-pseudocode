/*
 * XREFs of MiInsertSlabEntry @ 0x1404BCC44
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     MiCreateBootSlabEntries @ 0x140D043F0 (MiCreateBootSlabEntries.c)
 *     MmUpdateSlabRangeType @ 0x140D04B0C (MmUpdateSlabRangeType.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x140207480 (MiGetSlabCurrentTime.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSlabEntryPageFreed @ 0x14036BAC4 (MiSlabEntryPageFreed.c)
 *     MiSlabEntryBecameEmpty @ 0x14036BE10 (MiSlabEntryBecameEmpty.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x14036BE78 (MiUpdateSlabTypeAvailablePages.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall MiInsertSlabEntry(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  volatile LONG *v6; // rcx
  unsigned __int64 v10; // r12
  KIRQL v11; // r14
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rdx
  BOOLEAN v16; // r8
  _RTL_BALANCED_NODE *v17; // r8
  unsigned __int64 v18; // rax
  __int64 *v19; // r8
  __int64 v20; // r9
  __int64 **v21; // rax
  signed __int64 v22; // rdi
  __int64 v23; // rax
  volatile LONG *v24; // rcx

  v4 = 0;
  v6 = (volatile LONG *)(a2 + 16);
  v10 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a2 + 136) >> 3) & 3]);
  if ( (a4 & 2) != 0 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v6);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v6);
  }
  if ( ((a4 & 1) == 0 || !qword_140E2EC80) && !qword_140E2EC98 )
  {
LABEL_25:
    v15 = *(_QWORD *)a2;
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v15 )
      v15 ^= a2;
    v16 = 0;
    if ( v15 )
    {
      v17 = *(_RTL_BALANCED_NODE **)(a3 + 40);
      while ( 1 )
      {
        if ( (unsigned __int64)v17 > *(_QWORD *)(v15 + 48) || (unsigned __int64)v17 >= *(_QWORD *)(v15 + 40) )
        {
          v18 = *(_QWORD *)(v15 + 8);
          if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_42;
            v18 ^= v15;
          }
          if ( !v18 )
          {
LABEL_42:
            v16 = 1;
            break;
          }
        }
        else
        {
          v18 = *(_QWORD *)v15;
          if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_36;
            v18 ^= v15;
          }
          if ( !v18 )
          {
LABEL_36:
            v16 = 0;
            break;
          }
        }
        v15 = v18;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)a2, (PRTL_BALANCED_NODE)v15, v16, (PRTL_BALANCED_NODE)a3);
    if ( *(_DWORD *)(a2 + 128) == 8 )
    {
      v19 = (__int64 *)(a3 + 24);
      v20 = *(_QWORD *)(a2 + 88) + 16LL * ((*(_DWORD *)(a3 + 92) >> 3) & 0x3F);
      v21 = *(__int64 ***)(v20 + 8);
      if ( *v21 != (__int64 *)v20 )
        __fastfail(3u);
      *v19 = v20;
      *(_QWORD *)(a3 + 32) = v21;
      *v21 = v19;
      *(_QWORD *)(v20 + 8) = v19;
    }
    v22 = *(unsigned int *)(a3 + 84);
    if ( (_DWORD)v22 )
      MiSlabEntryPageFreed(a2, a3);
    *(_QWORD *)(a2 + 96) += v22;
    MiUpdateSlabTypeAvailablePages(a1, *(_DWORD *)(a2 + 128), v22);
    ++*(_QWORD *)(a2 + 120);
    if ( (*(_DWORD *)(a3 + 92) & 2) != 0 )
    {
      v23 = 23504LL;
      *(_QWORD *)(a2 + 112) += v10;
    }
    else
    {
      v23 = 23512LL;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v23 + a1), v10);
    if ( (_DWORD)v22 == (_DWORD)v10 )
    {
      *(_QWORD *)(a2 + 168) = MiGetSlabCurrentTime();
      MiSlabEntryBecameEmpty(a2, a3);
    }
    goto LABEL_54;
  }
  v12 = 48LL * *(_QWORD *)(a3 + 40) - 0x220000000000LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2EC90);
  v13 = (_QWORD *)qword_140E2EC80;
  v14 = 0LL;
  while ( v13 )
  {
    if ( v12 > v13[3] )
    {
      v13 = (_QWORD *)v13[1];
    }
    else
    {
      if ( v12 >= v13[3] )
        goto LABEL_14;
      v14 = v13;
      v13 = (_QWORD *)*v13;
    }
  }
  v13 = v14;
LABEL_14:
  if ( v13 && v13[3] <= (unsigned __int64)(48LL * *(_QWORD *)(a3 + 48) - 0x220000000000LL) )
    v4 = 1;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EC90);
  if ( !v4 )
  {
    if ( qword_140E2EC98 )
    {
      while ( v12 <= 48LL * *(_QWORD *)(a3 + 48) - 0x220000000000LL )
      {
        if ( (*(_DWORD *)(v12 + 32) & 0x40000000) != 0 )
        {
          v4 = 1;
          goto LABEL_54;
        }
        v12 += 48LL;
      }
    }
    goto LABEL_25;
  }
LABEL_54:
  v24 = (volatile LONG *)(a2 + 16);
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v24);
  else
    ExReleaseSpinLockExclusive(v24, v11);
  return v4;
}
