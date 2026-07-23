/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x1403A4B6C
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiMakeProtoPrivate @ 0x140313500 (MiMakeProtoPrivate.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiLockAweVadsShared @ 0x14050D428 (MiLockAweVadsShared.c)
 *     MiSplitReducedCommitClonePage @ 0x14052EFB8 (MiSplitReducedCommitClonePage.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 */

void __fastcall MiCopyOnWriteCheckConditions(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *v3; // rdx
  unsigned __int8 v4; // r8
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rdi
  struct _KTHREAD *v8; // rax

  if ( a2 == -1073740748 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      v8 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0];
      if ( v8 )
      {
        if ( v8 != CurrentThread )
        {
          LOCK_ADDRESS_SPACE_SHARED(CurrentThread, CurrentThread->ApcState.Process, a3, a3);
          UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
        }
      }
    }
  }
  else if ( a2 == -1073741801
         && KeGetCurrentIrql() < 2u
         && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
         && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
  {
    if ( a3 )
    {
      MiReplenishSlabAllocator(a3, 1uLL, 0x20000u, a3);
    }
    else
    {
      v3 = KeGetCurrentThread();
      v4 = v3[1].SavedApcStateFill[15];
      if ( v4 == 0xFF || (BYTE2(v3[1].Queue) & 1) != 0 )
        v4 = BYTE6(v3->ApcState.Process[3].PerProcessorCycleTimes);
      v5 = 3LL;
      if ( v4 == 0xFF )
        v5 = 1LL;
      MiWaitForFreePage(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174)), v5);
    }
  }
}
