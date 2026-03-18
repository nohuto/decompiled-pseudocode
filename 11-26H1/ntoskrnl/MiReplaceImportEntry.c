/*
 * XREFs of MiReplaceImportEntry @ 0x1406E6D18
 * Callers:
 *     MmReplaceImportEntry @ 0x1406E7088 (MmReplaceImportEntry.c)
 *     MiReplacePatchImportEntry @ 0x1406FCE30 (MiReplacePatchImportEntry.c)
 *     MiReplaceImportEntriesForVerifier @ 0x14086A738 (MiReplaceImportEntriesForVerifier.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     MiCopyOnWrite @ 0x14036AD38 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A2E0C (MiCopyOnWriteCheckConditions.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040DF60 (MiUnmapPageInHyperSpaceWorker.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall MiReplaceImportEntry(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  char *AnyMultiplexedVm; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  ULONG_PTR v17; // rsi
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rax
  struct _KEVENT *v24; // rcx
  __int64 v25; // rdx
  unsigned int v27; // [rsp+78h] [rbp+20h] BYREF

  v27 = 0;
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(BugCheckParameter2 + 48), 1, 0xCu, &v27);
  if ( !v6 || !v27 || BugCheckParameter3 < v6 || BugCheckParameter3 >= v6 + v27 )
    KeBugCheckEx(0x1Au, 0x1014uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  _InterlockedIncrement64((volatile signed __int64 *)&stru_140E2D150.ThreadListEntry.Blink);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(BugCheckParameter3) )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
    return;
  }
  v7 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v12 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v10, v11);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v8 )
      {
        if ( ((BugCheckParameter3 >> 9) & 0xFF8) != 0 )
          goto LABEL_12;
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v8);
      }
      v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal((signed __int64)AnyMultiplexedVm, v8, 0);
LABEL_12:
      v13 = *(_QWORD *)v7;
      if ( (*(_QWORD *)v7 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v8);
      LOBYTE(v14) = v12;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v14);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v15, v16);
      MiLockPageTableInternal((signed __int64)AnyMultiplexedVm, v8, 0);
    }
    v17 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v17 + 40) >= 0 )
      break;
    v18 = MiCopyOnWrite(BugCheckParameter3, v7, -1LL, 0, 0LL);
    if ( v18 < 0 )
    {
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v8);
      LOBYTE(v19) = v12;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v19);
      MiCopyOnWriteCheckConditions((__int64)AnyMultiplexedVm, v18, 0LL);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v20, v21);
      MiLockPageTableInternal((signed __int64)AnyMultiplexedVm, v8, 0);
    }
  }
  if ( (v13 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v22 = (_QWORD *)(MiMapPageInHyperSpaceWorker((v13 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                   + (BugCheckParameter3 & 0xFFF));
    *v22 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v22, 0x11u, 0x80000000);
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    v23 = MiCaptureDirtyBitToPfn(v17);
    v24 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v23 )
      MiReleasePageFileInfo(v24, v23, 1);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v8);
  LOBYTE(v25) = v12;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v25);
}
