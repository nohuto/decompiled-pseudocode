/*
 * XREFs of MiHandleForkTransitionPte @ 0x1402F04A0
 * Callers:
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiFinalizePageAttribute @ 0x1402BA3A0 (MiFinalizePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402ED5D4 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402ED5EC (MiTransferPageFileOwnership.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiUnlockClonePageTable @ 0x1402ED6FC (MiUnlockClonePageTable.c)
 *     MiWriteUselessChildPte @ 0x1402EF15C (MiWriteUselessChildPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiReplenishCloneLeafPage @ 0x1402F0A60 (MiReplenishCloneLeafPage.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiReturnCloneCharges @ 0x14036E844 (MiReturnCloneCharges.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(__int64 a1)
{
  ULONG_PTR v1; // r15
  unsigned __int64 *v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 PrototypePteDirect; // rdi
  __int64 v7; // r11
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  struct _KEVENT *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned int v13; // esi
  __int64 v14; // rax
  ULONG_PTR v15; // rbp
  __int64 v16; // r13
  unsigned int v17; // r15d
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // r9d
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  int v25; // ecx
  unsigned __int64 ContainingPageTable; // rsi
  __int64 v27; // rsi
  __int64 v28; // rbx
  char v29; // al
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // [rsp+20h] [rbp-68h]
  __int64 *BugCheckParameter4; // [rsp+28h] [rbp-60h]
  unsigned __int64 *v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  int v39; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+98h] [rbp+10h]
  _QWORD *v41; // [rsp+A0h] [rbp+18h]
  struct _KEVENT *v42; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 304);
  v3 = *(unsigned __int64 **)(a1 + 312);
  v4 = *(_QWORD *)(a1 + 320);
  v34 = *(_QWORD *)a1;
  v37 = *(_QWORD *)(a1 + 8);
  v41 = (_QWORD *)v1;
  v36 = v3;
  BugCheckParameter4 = (__int64 *)v4;
  v5 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  PrototypePteDirect = MiMakePrototypePteDirect(v4);
  v8 = *(unsigned __int16 *)(v7 + 1198);
  v9 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v40 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v10 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v8);
  v12 = *(unsigned __int16 *)(v11 + 1198);
  v42 = v10;
  v13 = (v10 != *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v12) ? 5 : 0) | 2;
  if ( (*(_BYTE *)(a1 + 248) & 1) == 0 )
    v13 = v10 != *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v12) ? 5 : 0;
  if ( v13 && !(unsigned int)MiGetCloneCharges(v10) )
  {
    MiWriteUselessChildPte(a1, v3);
    return 0LL;
  }
  while ( 1 )
  {
    v14 = MiLockTransitionLeafPageEx(v1);
    v15 = v14;
    if ( !v14 )
    {
LABEL_8:
      MiUnlockClonePageTable(a1, v5);
      goto LABEL_9;
    }
    v16 = (*(_QWORD *)v1 >> 5) & 0x1FLL;
    if ( !(unsigned __int16)*(_DWORD *)(v14 + 32) && ((*(_QWORD *)v1 >> 5) & 0x18) != 0x10 )
    {
      v20 = *(_QWORD *)(v14 + 16);
      if ( (v20 & 0x400) != 0 || (v20 & 0x8000000) == 0 )
      {
        *BugCheckParameter4 = *(_QWORD *)v1;
        MI_MAKE_PROTECT_WRITE_COPY(BugCheckParameter4);
        v22 = BugCheckParameter4[2];
        if ( (*(_DWORD *)(a1 + 248) & 1) != 0 )
        {
          v22 = v22 & 0xF00000000000001FuLL | 0x20;
          ++*(_QWORD *)(a1 + 256);
        }
        BugCheckParameter4[2] = (unsigned int)v16 | v22 & 0xFFFFFFFFFFFFFFE0uLL;
        if ( (v13 & 5) != 0 )
          BugCheckParameter4[1] = 1LL;
        if ( (*(_QWORD *)(v15 + 16) & 4) != 0 )
        {
          v9 = *(_QWORD *)(v15 + 16);
          v29 = *(_BYTE *)(v15 + 34) & 7;
          v40 = v9;
          if ( v29 == 3 )
          {
            MiUnlinkPageFromListEx(v15, 0);
            v30 = 1;
          }
          else
          {
            v30 = v21;
          }
          *(_QWORD *)(v15 + 16) &= ~4uLL;
          if ( v30 )
            MiInsertPageInList(v15, 8u);
        }
        *(_QWORD *)(v15 + 8) = BugCheckParameter4;
        v23 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
        if ( (*(_BYTE *)(v15 + 34) & 7) != 2 || (unsigned int)MiGetPfnSlabType(v15) == 9 )
        {
          v25 = 1;
          if ( *(__int64 *)(v15 + 40) < 0 )
            _InterlockedDecrement64((volatile signed __int64 *)(v23 + 7616));
          else
            _InterlockedDecrement64((volatile signed __int64 *)(v23 + 16704));
        }
        else
        {
          v25 = v24;
        }
        *(_QWORD *)(v15 + 40) |= 0x8000000000000000uLL;
        if ( v25 )
        {
          if ( *(__int64 *)(v15 + 40) >= 0 )
            _InterlockedAdd64((volatile signed __int64 *)(v23 + 16704), 1uLL);
          else
            _InterlockedAdd64((volatile signed __int64 *)(v23 + 7616), 1uLL);
        }
        MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v15 + 16));
        ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)BugCheckParameter4);
        v38 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL;
        MiSetPfnContainingFrame(v15, ContainingPageTable);
        MiTransferPageFileOwnership(v15, (__int64)v41);
        v27 = 48 * ContainingPageTable;
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 - 0x220000000000LL + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v39);
          while ( *(__int64 *)(v27 - 0x220000000000LL + 24) < 0 );
        }
        *(_QWORD *)(v27 - 0x220000000000LL + 24) = (*(_QWORD *)(v27 - 0x220000000000LL + 24) + 1LL) ^ ((*(_QWORD *)(v27 - 0x220000000000LL + 24) + 1LL) ^ *(_QWORD *)(v27 - 0x220000000000LL + 24)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v27 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *v41 = PrototypePteDirect;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v9 )
        {
          if ( (v9 & 8) != 0 )
          {
            v40 &= ~8uLL;
            v9 = v40;
          }
          MiReleasePageFileInfo(v42, v9, 1LL);
        }
        if ( (*(_DWORD *)(a1 + 248) & 1) != 0 && (_DWORD)v16 != 24 )
          PrototypePteDirect |= 8uLL;
        v28 = *(_QWORD *)(a1 + 328);
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v39);
          while ( *(__int64 *)(v28 + 24) < 0 );
        }
        *v36 = PrototypePteDirect;
        MiIncreaseUsedPtesInPfn(*(_QWORD *)(a1 + 328), 1);
        _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 328) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        MiLockAndDecrementShareCount(48 * v38 - 0x220000000000LL, 2LL);
        _InterlockedDecrement64((volatile signed __int64 *)(v34 + 648));
        BugCheckParameter4[3] = 2LL;
        *(_QWORD *)(a1 + 320) += 32LL;
        return 0LL;
      }
    }
    v17 = (*(_DWORD *)(v15 + 32) >> 22) & 3;
    if ( *(_QWORD *)(a1 + 336) != -1LL )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReplenishCloneLeafPage(a1);
    v1 = (ULONG_PTR)v41;
    if ( (*v41 & 0x401LL) != 0 )
      goto LABEL_8;
  }
  MiReturnCloneCharges(v42, v13);
  v13 = 0;
  v19 = 48LL * *(_QWORD *)(a1 + 336) - 0x220000000000LL;
  v39 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v39);
    while ( *(__int64 *)(v19 + 24) < 0 );
  }
  MiFinalizePageAttribute(v19, v17, 9LL);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(v15 + 34) & 0x28) == 0x28 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockClonePageTable(a1, v5);
    LOBYTE(v31) = *(_BYTE *)(a1 + 40);
    MiUnlockWorkingSetShared(v34 + 1024, v31);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    *(_BYTE *)(a1 + 40) = MiLockWorkingSetShared(v34 + 1024, v32, v33);
    goto LABEL_9;
  }
  if ( (int)MiDuplicateCloneLeaf(a1) < 0 )
  {
LABEL_9:
    MiReturnCloneCharges(v42, v13);
    return 3221226029LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v37 + 648));
  return 0LL;
}
