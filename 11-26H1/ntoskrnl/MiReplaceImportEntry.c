/*
 * XREFs of MiReplaceImportEntry @ 0x1406EB9C8
 * Callers:
 *     MmReplaceImportEntry @ 0x1406EBD38 (MmReplaceImportEntry.c)
 *     MiReplacePatchImportEntry @ 0x140701B00 (MiReplacePatchImportEntry.c)
 *     MiReplaceImportEntriesForVerifier @ 0x140870B18 (MiReplaceImportEntriesForVerifier.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiReplaceImportEntry(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  PVOID v6; // rax
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
  ULONG v27; // [rsp+78h] [rbp+20h] BYREF

  v27 = 0;
  v6 = RtlImageDirectoryEntryToData(*(PVOID *)(BugCheckParameter2 + 48), 1u, 0xCu, &v27);
  if ( !v6 || !v27 || BugCheckParameter3 < (unsigned __int64)v6 || BugCheckParameter3 >= (unsigned __int64)v6 + v27 )
    KeBugCheckEx(0x1Au, 0x1014uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  _InterlockedIncrement64((volatile signed __int64 *)&stru_140E2D2D0.ThreadListEntry.Blink);
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
    v24 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v23 )
      MiReleasePageFileInfo(v24, v23, 1LL);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v8);
  LOBYTE(v25) = v12;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v25);
}
