/*
 * XREFs of MiReleaseWalkLocks @ 0x140364CA0
 * Callers:
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 *     MiYieldPageTableWalk @ 0x140364BF0 (MiYieldPageTableWalk.c)
 *     MiDeleteEmptyPageTableTail @ 0x140443810 (MiDeleteEmptyPageTableTail.c)
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     MiUnlockPhysicalPageByVa @ 0x1406EF080 (MiUnlockPhysicalPageByVa.c)
 *     MiCombineWorkingSetTail @ 0x140709450 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  v1 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
    goto LABEL_2;
  if ( (*(_DWORD *)a1 & 0x800) != 0 )
  {
    if ( v1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      *(_QWORD *)(a1 + 56) = 0LL;
      goto LABEL_2;
    }
    goto LABEL_9;
  }
  if ( v1 != 0xFFFFF6FB7DBEDF68uLL )
  {
LABEL_9:
    if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
      || v1 < 0xFFFFF6FB7DBED000uLL
      || v1 > 0xFFFFF6FB7DBEDFFFuLL
      || (v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v9 = 2 * (unsigned int)((__int64)(v1 + 0x90482413000LL) >> 3);
        _InterlockedAnd(
          (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4 * (v9 >> 5) + 4],
          ~(2 << (v9 & 0x1F)) & ~(1 << (v9 & 0x1F)));
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v1, 0xCFFFFFFFFFFFFFFFuLL);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v8 + 4 * ((v1 >> 3) & 0x1FF)));
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    goto LABEL_2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *(_DWORD *)(v3 + 184) & 0xF;
  if ( v6 )
  {
    if ( v6 == 7 )
    {
      v7 = 1LL;
    }
    else
    {
      v7 = 3LL;
      if ( v6 == 5 )
        v7 = 0LL;
    }
  }
  else
  {
    v7 = 2LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v7]);
  *(_QWORD *)(a1 + 56) = 0LL;
LABEL_2:
  v4 = *(unsigned __int8 *)(a1 + 9);
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiUnlockWorkingSetShared(v3, v4);
  else
    MiUnlockWorkingSetExclusive(v3, v4);
  *(_DWORD *)(a1 + 4) |= 0x10001u;
}
