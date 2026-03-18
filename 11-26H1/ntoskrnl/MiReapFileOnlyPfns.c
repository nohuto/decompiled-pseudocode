/*
 * XREFs of MiReapFileOnlyPfns @ 0x1406FABB0
 * Callers:
 *     MiFileOnlyReaperWorker @ 0x1406F9D60 (MiFileOnlyReaperWorker.c)
 *     MiAddPhysicalMemory @ 0x14086501C (MiAddPhysicalMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     MiRetryFileOnlyFailedReapPages @ 0x1402A5FD8 (MiRetryFileOnlyFailedReapPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertPageChainHead @ 0x14033A060 (MiInsertPageChainHead.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiGetFileOnlyPagesToReap @ 0x1406FA25C (MiGetFileOnlyPagesToReap.c)
 *     MiWaitForExtentDeletions @ 0x1406FAE6C (MiWaitForExtentDeletions.c)
 *     MiRemovePhysicalMemory @ 0x140866D5C (MiRemovePhysicalMemory.c)
 */

void __fastcall MiReapFileOnlyPfns(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int BasePriority; // r15d
  unsigned __int64 v9; // rax
  volatile unsigned __int8 *v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  ULONG_PTR FileOnlyPagesToReap; // rax
  ULONG_PTR v14; // rsi
  KIRQL v15; // al
  KIRQL v16; // dl
  __int64 v17; // r14
  KIRQL v18; // r8
  __int64 *v19; // rdx
  __int64 *v20; // r9
  __int64 v21; // rdx
  _QWORD *v22; // rsi
  __int64 v23; // r8
  _QWORD *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+48h] [rbp+10h] BYREF

  v27 = 0LL;
  if ( !a1 )
  {
    MiRetryFileOnlyFailedReapPages(1);
    v4 = ExAcquireSpinLockExclusive(&dword_140E399E0);
    if ( BYTE1(stru_140E2D150.ThreadLock) )
    {
      LOBYTE(v5) = v4;
      MiWaitForExtentDeletions(v6, v5);
    }
    else if ( v4 == 17 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E399E0);
    }
    else
    {
      ExReleaseSpinLockExclusive(&dword_140E399E0, v4);
    }
    return;
  }
  CurrentThread = KeGetCurrentThread();
  BasePriority = CurrentThread->BasePriority;
  v9 = KeAbPreAcquire((__int64)&stru_140E2D150, 0LL, 0LL, a4);
  v12 = v9;
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v10) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v9 + 33), v10, 1);
    }
    else
    {
      *(_BYTE *)(v9 + 10) = 1;
    }
    KeSetActualBasePriorityThread((__int64)CurrentThread, 4LL, v11);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      FileOnlyPagesToReap = MiGetFileOnlyPagesToReap(&v27);
      v14 = FileOnlyPagesToReap;
      if ( FileOnlyPagesToReap == -1LL )
        break;
      v17 = v27;
      if ( (int)MiRemovePhysicalMemory(FileOnlyPagesToReap) < 0 )
      {
        v18 = ExAcquireSpinLockExclusive(&dword_140E399E0);
        v19 = (__int64 *)(48 * v14 - 0x220000000000LL);
        v20 = &v19[6 * v17 - 6];
        while ( v19 <= v20 )
        {
          MiInsertPageChainHead((__int64 *)&xmmword_140E2D130, v19);
          v19 = (__int64 *)(v21 + 48);
        }
        if ( v18 == 17 )
          goto LABEL_21;
        v16 = v18;
LABEL_23:
        ExReleaseSpinLockExclusive(&dword_140E399E0, v16);
      }
    }
    v15 = ExAcquireSpinLockExclusive(&dword_140E399E0);
    if ( !qword_140E2D128 )
      break;
    if ( v15 != 17 )
    {
      v16 = v15;
      goto LABEL_23;
    }
LABEL_21:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E399E0);
  }
  v22 = *(_QWORD **)&stru_140E2D150.Header.Lock;
  *(_QWORD *)&stru_140E2D150.Header.Lock = 0LL;
  BYTE1(stru_140E2D150.ThreadLock) = 0;
  if ( v15 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E399E0);
  else
    ExReleaseSpinLockExclusive(&dword_140E399E0, v15);
  if ( v22 )
  {
    do
    {
      v24 = (_QWORD *)*v22;
      KeSignalGate((__int64)(v22 + 1), 1LL, v23);
      v22 = v24;
    }
    while ( v24 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, BasePriority, v23);
  if ( v12 )
    KeAbPostReleaseEx(&stru_140E2D150, v12, v25, v26);
}
