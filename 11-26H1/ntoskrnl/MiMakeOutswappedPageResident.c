/*
 * XREFs of MiMakeOutswappedPageResident @ 0x1404296E4
 * Callers:
 *     MmInSwapProcess @ 0x140485F04 (MmInSwapProcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiInitializeUsedPtesCount @ 0x140342440 (MiInitializeUsedPtesCount.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 */

unsigned __int64 __fastcall MiMakeOutswappedPageResident(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v5; // r12d
  int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // r12d
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  ULONG_PTR v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rbx
  char v16; // al
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  int v19; // r8d
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 *v23; // rcx
  unsigned __int64 TransitionPte; // r14
  unsigned int v26; // edi
  int v27; // esi
  unsigned int v28; // esi
  __int64 v29; // r15
  __int64 Page; // rax
  __int64 v31; // rsi
  char v32; // dl
  __int16 v33; // di
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // ebx
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v42; // rax
  _DWORD *v43; // r14
  int v44; // eax
  volatile signed __int64 *v45; // rax
  unsigned __int8 v46; // [rsp+30h] [rbp-28h]
  struct _KEVENT *v47; // [rsp+38h] [rbp-20h]
  __int128 v48; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v50; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v51; // [rsp+B0h] [rbp+58h]
  PEX_SPIN_LOCK SpinLock; // [rsp+B8h] [rbp+60h] BYREF

  v51 = a3;
  LOBYTE(SpinLock) = 0;
  v48 = 0LL;
  v4 = a1;
  v5 = a1 + 808;
  if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
    v5 = a2;
  v6 = *(unsigned __int16 *)(a1 + 260);
  v7 = *(unsigned __int16 *)(a1 + 1198);
  v8 = (v5 >> 3) & 0x1FF;
  v47 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v7);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = 2;
      LOBYTE(v7) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7, v4);
      v4 = a1;
    }
    v50 = CurrentIrql;
    if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v10 = (unsigned __int64 *)(v4 + 808);
      v11 = MiLockTransitionLeafPageEx(v4 + 808, (char *)&SpinLock, 0);
      v12 = *v10;
      v13 = v11;
    }
    else
    {
      v12 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v13 = 0LL;
    }
    if ( (v12 & 0x800) == 0 )
      break;
    LOBYTE(SpinLock) = CurrentIrql;
    v14 = (__int64)(v13 + 0x220000000000LL) / 48;
    v15 = v51;
    if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
      v15 = (__int64)(v13 + 0x220000000000LL) / 48;
    v16 = *(_BYTE *)(v13 + 34) & 7;
    v51 = v15;
    if ( v16 == 6 )
    {
      *(_QWORD *)(v13 + 24) = (*(_QWORD *)(v13 + 24) + 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0xC000000000000000uLL;
LABEL_22:
      v18 = MiCaptureDirtyBitToPfn(v13);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql >= 2u )
        goto LABEL_26;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
LABEL_25:
      __writecr8(CurrentIrql);
      goto LABEL_26;
    }
    if ( (MiUnlinkPageFromListEx(v13, 0) & 3) == 0 )
    {
      *(_DWORD *)(v13 + 32) = (*(_DWORD *)(v13 + 32) + 1) ^ ((*(_DWORD *)(v13 + 32) + 1) ^ *(_DWORD *)(v13 + 32)) & 0xFFFF0000;
      *(_DWORD *)(v13 + 32) = *(_DWORD *)(v13 + 32) & 0xFFF8FFFF | 0x60000;
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(v13 + 24) & 0xC000000000000000uLL | 1;
      goto LABEL_22;
    }
    MiDiscardTransitionPfnEx(v13, 0LL, v17);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = a1;
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v4 = a1;
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  MiInitializePageColorBase(0LL, 3, v6 + 1, (__int64)&v48);
  TransitionPte = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v26 = 0;
  v27 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v48, 1u);
  v28 = DWORD2(v48) & 0xFFFFFF00 | v27;
  if ( v12 )
  {
    v29 = (v12 >> 5) & 0x1F;
  }
  else
  {
    v26 = 48;
    LOBYTE(v29) = 4;
  }
  Page = MiGetPage((__int64)v47, v28, v26);
  for ( SpinLock = (PEX_SPIN_LOCK)Page; Page == -1; SpinLock = (PEX_SPIN_LOCK)Page )
  {
    MiWaitForFreePage((__int64)v47, 0);
    Page = MiGetPage((__int64)v47, v28, v26);
  }
  v31 = 48 * Page - 0x220000000000LL;
  if ( v12 )
  {
    v32 = v29;
    v14 = (__int64)SpinLock;
    TransitionPte = MiMakeTransitionPte((__int64)SpinLock, v32);
  }
  else
  {
    v14 = (__int64)SpinLock;
  }
  v33 = 512;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v33 = 2560;
    v51 = v14;
    *(_QWORD *)(a1 + 808) = TransitionPte;
  }
  else if ( v12 )
  {
    v34 = MiMapPageInHyperSpaceWorker(v51, &v50, 0x80000000);
    LOBYTE(v35) = v50;
    v36 = (unsigned __int64 *)(v34 + 8LL * v8);
    *v36 = TransitionPte;
    MiUnmapPageInHyperSpaceWorker(v36, v35, 0x80000000LL);
  }
  MiInitializePfnForOtherProcess(v14, a2, v51, v33);
  *(_QWORD *)(v31 + 16) = v12;
  if ( v12 )
    MiReadPagefilePage(v14, a2);
  CurrentIrql = KeGetCurrentIrql();
  v46 = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v37) = 2;
    LOBYTE(v38) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v38, v37);
  }
  LODWORD(SpinLock) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&SpinLock);
    while ( *(__int64 *)(v31 + 24) < 0 );
  }
  if ( v12 )
    v18 = *(_QWORD *)(v31 + 16);
  else
    v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *(_QWORD *)(v31 + 16) = MiMakeDemandZeroPte(4);
  v39 = 1024;
  v40 = *(_DWORD *)(v31 + 32);
  if ( *(__int64 *)(v31 + 40) < 0 && (*(_QWORD *)(v31 + 16) & 0x400000000000400LL) == 0x400 )
  {
    SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v31 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
      KeBugCheckEx(0x1Au, 0x8840uLL, v31, 0LL, 1uLL);
  }
  if ( *(__int64 *)(v31 + 40) < 0
    && (*(_DWORD *)(v31 + 16) & v39) != 0
    && (*(_QWORD *)(v31 + 24) & 0x4000000000000000LL) == 0 )
  {
    v42 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v31 + 16));
    v43 = v42;
    if ( (*(_DWORD *)(*(_QWORD *)v42 + 56LL) & 0x20) == 0 && (v42[38] & 1) == 0 )
    {
      SpinLock = (PEX_SPIN_LOCK)(*(_QWORD *)v42 + 72LL);
      ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
      v44 = v43[38];
      if ( (v44 & 1) == 0 )
        v43[38] = v44 | 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    }
    CurrentIrql = v46;
  }
  if ( (v40 & 0x80000) != 0
    && MiCanPfnOriginalPteBeLost(v31)
    && (*(_QWORD *)(v31 + 16) & 8LL) != 0
    && (v40 & 0x100000) == 0 )
  {
    *(_QWORD *)(v31 + 16) &= ~8uLL;
  }
  *(_DWORD *)(v31 + 32) = v40 | 0x100000;
  if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
  {
    MiInitializeUsedPtesCount(v31, 1u);
    if ( (*(_DWORD *)(a1 + 1208) & 0xF) == 1 )
      v45 = (volatile signed __int64 *)&unk_140E379B8;
    else
      v45 = (volatile signed __int64 *)(a1 + 1272);
    _InterlockedIncrement64(v45);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    goto LABEL_25;
  }
LABEL_26:
  if ( v18 )
    MiReleasePageFileInfo(v47, v18, 0LL);
  v19 = -1744830460;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    v19 = -2147483644;
  ValidPte = MiMakeValidPte(a2, v14, v19);
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v8 = 493;
    *(_QWORD *)(a1 + 808) = ValidPte;
  }
  v21 = MiMapPageInHyperSpaceWorker(v51, &v50, 0x80000000);
  LOBYTE(v22) = v50;
  v23 = (unsigned __int64 *)(v21 + 8LL * v8);
  *v23 = ValidPte;
  MiUnmapPageInHyperSpaceWorker(v23, v22, 0x80000000LL);
  return ValidPte;
}
