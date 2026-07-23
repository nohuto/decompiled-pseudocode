/*
 * XREFs of MiUnlockSystemVa @ 0x1402C7240
 * Callers:
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x14033B4D0 (MmCopyMemory.c)
 *     MiReleaseTrimViewResources @ 0x140361E24 (MiReleaseTrimViewResources.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiUnlockSystemVa(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    return;
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    if ( *(_WORD *)(a1 + 34) )
    {
      v4 = *(_BYTE *)(a1 + 37) & 2;
      v5 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 32) << 12) + (v3 << 25 >> 16 << 25 >> 16);
      if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v4 = (unsigned int)v4 | 5;
      }
      else if ( (*(_DWORD *)(v1 + 184) & 0xF) == 0 )
      {
        v4 = (unsigned int)v4 | 4;
      }
      MiAddWorkingSetEntries(v1, v5, *(unsigned __int16 *)(a1 + 34), v4);
      *(_WORD *)(a1 + 34) = 0;
    }
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v1 + 184) & 0xF) != 0
        || v6 < 0xFFFFF6FB7DBED000uLL
        || v6 > 0xFFFFF6FB7DBEDFFFuLL
        || (v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v1 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v12 = 2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3);
          _InterlockedAnd(
            (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4 * (v12 >> 5) + 4],
            ~(2 << (v12 & 0x1F)) & ~(1 << (v12 & 0x1F)));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v6, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v11 + 4 * ((v6 >> 3) & 0x1FF));
      }
      goto LABEL_14;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *(_DWORD *)(v1 + 184) & 0xF;
    if ( v9 )
    {
      if ( v9 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        goto LABEL_14;
      }
      v10 = 3LL;
      if ( v9 == 5 )
        v10 = 0LL;
    }
    else
    {
      v10 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v10]);
LABEL_14:
    *(_BYTE *)(a1 + 37) |= 4u;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v7 = *(unsigned __int8 *)(a1 + 36);
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v1, v7);
  else
    MiUnlockWorkingSetShared(v1, v7);
  *(_QWORD *)(a1 + 24) = 0LL;
}
