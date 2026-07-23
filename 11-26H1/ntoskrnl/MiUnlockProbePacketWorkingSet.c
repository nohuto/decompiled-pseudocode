/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x1403A20A0
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402D0300 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockComplete @ 0x1403A1DB0 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MiFaultInProbeAddress @ 0x1403A2230 (MiFaultInProbeAddress.c)
 *     MiSplitReducedCommitClonePage @ 0x14052EFB8 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 112);
    if ( v1 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
        || v1 < 0xFFFFF6FB7DBED000uLL
        || v1 > 0xFFFFF6FB7DBEDFFFuLL
        || (v7 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBEDFFFuLL )
          _InterlockedAnd(
            (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4
                                                                         * ((unsigned __int64)(2
                                                                                             * (unsigned int)((__int64)(v1 + 0x90482413000LL) >> 3)) >> 5)
                                                                         + 4],
            ~(2 << ((2 * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                   * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)));
        else
          _InterlockedAnd64((volatile signed __int64 *)v1, 0xCFFFFFFFFFFFFFFFuLL);
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v7 + 4 * ((v1 >> 3) & 0x1FF)));
      }
      goto LABEL_9;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v5 )
    {
      if ( v5 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        goto LABEL_9;
      }
      v6 = 3LL;
      if ( v5 == 5 )
        v6 = 0LL;
    }
    else
    {
      v6 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v6]);
LABEL_9:
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 112), *(unsigned __int8 *)(a1 + 72));
}
