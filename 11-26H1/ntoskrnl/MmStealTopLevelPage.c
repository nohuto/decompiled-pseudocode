/*
 * XREFs of MmStealTopLevelPage @ 0x1404BC7D4
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x140307D60 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x1404BCA10 (MiLockWorkingSetExclusiveAtDpc.c)
 */

__int64 __fastcall MmStealTopLevelPage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // rbp
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned __int64 v7; // r10
  __int64 *v8; // r9
  __int64 PteShadow; // rcx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  MiLockWorkingSetExclusiveAtDpc(&Process[2].ReadyListHead.Blink);
  MiReplacePageTablePage(a1);
  v5 = 0;
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    _InterlockedIncrement(&dword_140EF9008);
    v7 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 32), 0LL, 0x80000000);
    v8 = (__int64 *)(v7 + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    PteShadow = *v8;
    v10 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)v8, *v8);
    *v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *v8 = (v6 << 12) ^ (PteShadow ^ (v6 << 12)) & 0xFFF0000000000FFFuLL;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( *(_DWORD *)(a1 + 64) )
    {
      v12 = ((Process[2].KernelWaitTime >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v13 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= v10 )
        v13 = MiReadPteShadow(v12, *(_QWORD *)v12);
      *(_QWORD *)v12 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry((__int64)(v12 << 25) >> 16, 2LL);
      v14 = (v6 << 12) ^ v13;
      v15 = v6 << 12;
      v16 = KiFlushPcid == 0;
      *(_QWORD *)v12 = v15 ^ v14 & 0xFFF0000000000FFFuLL;
      if ( !v16 )
        v15 |= 1uLL;
      Process->UserDirectoryTableBase = v15;
    }
    else
    {
      v11 = v6 << 12;
      if ( KiFlushPcid )
        v11 |= 2uLL;
      Process->DirectoryTableBase = v11;
    }
    v5 = 1;
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, 0x11u);
  return v5;
}
