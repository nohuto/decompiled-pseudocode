/*
 * XREFs of MiFreePageToSlabAllocator @ 0x14036B704
 * Callers:
 *     MiFreeSlabPage @ 0x14036B368 (MiFreeSlabPage.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiAbortCombineScan @ 0x14036AF70 (MiAbortCombineScan.c)
 *     VslSetPlaceholderPages @ 0x14036B140 (VslSetPlaceholderPages.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiReInitializeFreeSlabPfn @ 0x14036BA38 (MiReInitializeFreeSlabPfn.c)
 *     MiSlabEntryPageFreed @ 0x14036BAC4 (MiSlabEntryPageFreed.c)
 *     MiFreePageToSlabEntry @ 0x14036BB5C (MiFreePageToSlabEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiFreePageToSlabAllocator(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // r14
  unsigned __int8 v6; // bp
  volatile LONG *v7; // r12
  __int64 *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r15
  unsigned int v13; // eax
  _QWORD *v14; // rsi
  ULONG_PTR BugCheckParameter4; // rbx
  struct _KTHREAD *CurrentThread; // rcx

  v4 = (unsigned __int128)((a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 3);
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = CurrentThread[1].SavedApcStateFill[15];
    if ( v6 == 0xFF || (BYTE2(CurrentThread[1].Queue) & 1) != 0 )
      v6 = BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes);
  }
  else
  {
    v6 = -1;
  }
  v7 = (volatile LONG *)(a1 + 16);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v8 = (__int64 *)(a1 + 40);
LABEL_5:
    if ( v8 )
    {
      v9 = *v8;
      if ( v9 )
      {
        if ( v5 <= *(_QWORD *)(v9 + 48) && v5 >= *(_QWORD *)(v9 + 40) )
          goto LABEL_15;
      }
    }
    goto LABEL_9;
  }
  if ( v6 != 0xFF )
  {
    v8 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * v6);
    goto LABEL_5;
  }
LABEL_9:
  v9 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v9 )
    v9 ^= a1;
  while ( v9 )
  {
    if ( v5 > *(_QWORD *)(v9 + 48) )
    {
      v10 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      if ( v5 >= *(_QWORD *)(v9 + 40) )
        break;
      v10 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
LABEL_15:
  if ( (*(_BYTE *)(a1 + 136) & 4) != 0 && (*(_BYTE *)(a2 + 34) & 7) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 160));
    if ( (*(_DWORD *)(a2 + 32) & 0xC00000) == 0x400000 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
      MiZeroPhysicalPage(0LL, v5, 0, 1);
      *(_DWORD *)(a2 + 32) &= 0xFFF8FFFF;
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
    }
  }
  v11 = *(_DWORD *)(a1 + 128);
  if ( v11 <= 4 && v11 != 2 )
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 32) & 0xFFF8FFFF | 0x10000;
  MiReInitializeFreeSlabPfn(a2, a1);
  v12 = *(unsigned int *)(a1 + 128);
  if ( (unsigned int)v12 <= 4 && (_DWORD)v12 != 2 )
  {
    MiSetPfnIdentity(48 * v5 - 0x220000000000LL, 3u);
    MiAbortCombineScan(48 * v5 - 0x220000000000LL);
    BugCheckParameter4 = *((int *)MiSlabTypeToMmSlabType + v12);
    if ( (MiFlags & 0x10000) != 0 && (int)VslSetPlaceholderPages(v5, 1LL, 0, BugCheckParameter4) < 0 )
      KeBugCheckEx(0x1Au, 0x5150FuLL, v5, 0LL, BugCheckParameter4);
  }
  MiFreePageToSlabEntry(a2, v9, a1);
  v13 = *(_DWORD *)(v9 + 92);
  if ( (v13 & 4) != 0 && v6 == 0xFF )
    v6 = (v13 >> 3) & 0x3F;
  MiSlabEntryPageFreed(a1, v9);
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( v6 == 0xFF )
      goto LABEL_23;
    v14 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL * v6);
  }
  else
  {
    v14 = (_QWORD *)(a1 + 40);
  }
  if ( v14 )
    *v14 = v9;
LABEL_23:
  ExReleaseSpinLockSharedFromDpcLevel(v7);
}
