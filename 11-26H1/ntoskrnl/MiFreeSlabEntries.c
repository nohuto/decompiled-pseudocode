/*
 * XREFs of MiFreeSlabEntries @ 0x1402A6AEC
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1402A6920 (MiFreeUnusedSlabPages.c)
 *     MiDefragFreeEmptySlabEntries @ 0x14070AE90 (MiDefragFreeEmptySlabEntries.c)
 *     MiDeleteSlabAllocator @ 0x14070B460 (MiDeleteSlabAllocator.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x140207480 (MiGetSlabCurrentTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiSlabUpdateRecentFailure @ 0x1402A6D10 (MiSlabUpdateRecentFailure.c)
 *     MiFreeSlabEntry @ 0x1402A6E7C (MiFreeSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x1402A8C10 (MiRemoveSlabEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     MiSlabEntryBecameEmpty @ 0x14036BE10 (MiSlabEntryBecameEmpty.c)
 *     MiPurgeSlabEntries @ 0x1404BB48C (MiPurgeSlabEntries.c)
 */

__int64 __fastcall MiFreeSlabEntries(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r13
  volatile LONG *v8; // r12
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD **v13; // rcx
  _QWORD *v14; // r15
  _DWORD *v15; // rbp
  _QWORD *v16; // rax
  _QWORD *i; // rcx
  _QWORD *v18; // rdx
  _RTL_BITMAP *v19; // rcx

  v6 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a2 + 136) >> 3) & 3]);
  MiSlabUpdateRecentFailure(a2 + 176);
  if ( a3 != 1
    && ((*(_WORD *)(a2 + 138) & 1) == 0
     || !a3 && MiGetSlabCurrentTime() - *(_QWORD *)(a2 + 168) < 0x2FAF080
     || *(_QWORD *)(a2 + 104)
     && *(_QWORD *)(a2 + 96) + *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) < (unsigned __int64)(*(_QWORD *)(a2 + 104) + v6)) )
  {
    return 0LL;
  }
  MiPurgeSlabEntries(a2);
  v8 = (volatile LONG *)(a2 + 16);
  v9 = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
  *(_WORD *)(a2 + 138) &= ~1u;
  if ( *(_DWORD *)(a2 + 128) == 8 && *(_DWORD *)(a1 + 22064) )
  {
    v19 = (_RTL_BITMAP *)(*(_QWORD *)(56320LL * *(unsigned int *)(a2 + 132)
                                    + *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL)
                                    + 56112)
                        + 314064LL);
    RtlClearBits(v19, 0, v19->SizeOfBitMap);
  }
  v11 = *(_QWORD *)(a2 + 8);
  if ( (v11 & 1) == 0 )
  {
    v12 = *(_QWORD **)(a2 + 8);
LABEL_12:
    if ( v12 )
    {
      do
      {
        v13 = (_QWORD **)v12[1];
        v14 = v12;
        v15 = v12;
        v16 = v12;
        if ( v13 )
        {
          v12 = (_QWORD *)v12[1];
          for ( i = *v13; i; i = (_QWORD *)*i )
            v12 = i;
        }
        else
        {
          while ( 1 )
          {
            v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v12 || (_QWORD *)*v12 == v16 )
              break;
            v16 = v12;
          }
        }
        if ( (v15[23] & 1) == 0 )
        {
          if ( v15[21] == (_DWORD)v6 )
          {
            MiRemoveSlabEntry(a1, a2, v15);
            *v14 = v9;
            v9 = v15;
          }
          else if ( v15[21] + v15[22] >= (unsigned int)v6 )
          {
            MiSlabEntryBecameEmpty(a2, v15);
          }
        }
      }
      while ( v12 );
      v8 = (volatile LONG *)(a2 + 16);
    }
    goto LABEL_23;
  }
  if ( v11 != 1 )
  {
    v12 = (_QWORD *)(v11 ^ (a2 | 1));
    goto LABEL_12;
  }
LABEL_23:
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  while ( 1 )
  {
    v18 = v9;
    if ( !v9 )
      break;
    v9 = (_QWORD *)*v9;
    MiFreeSlabEntry(a2, v18);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  __writecr8(v10);
  return 0LL;
}
