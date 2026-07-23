/*
 * XREFs of MiResolveProtoCombine @ 0x1402EAA7C
 * Callers:
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiMakeTransitionPteValid @ 0x1402E5640 (MiMakeTransitionPteValid.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(signed __int64 *BugCheckParameter4, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rsi
  ULONG_PTR v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  ULONG_PTR v10; // rdi
  unsigned __int64 v11; // r14
  struct _KEVENT *v12; // r13
  unsigned __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  ULONG_PTR v17; // rdi
  int v18; // ebx
  unsigned __int64 ValidPte; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 TransitionPteValid; // rax
  __int64 v24; // rcx
  int v26; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( !MiLockProtoPoolPage((ULONG_PTR)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable((ULONG_PTR)a3) - 0x220000000000LL;
  v7 = MiLockLeafPage(a3, 0);
  v10 = v7;
  if ( !v7 )
    goto LABEL_21;
  v11 = *a3;
  if ( (*a3 & 1) == 0 )
  {
    if ( (*a3 & 0xC00) == 0x800 )
    {
      v12 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v7 + 34) & 0x20) == 0 )
      {
        if ( (MiUnlinkPageFromListEx(v7, 0) & 3) == 0 )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
          *(_DWORD *)(v10 + 32) ^= (unsigned __int16)(*(_DWORD *)(v10 + 32) ^ (*(_DWORD *)(v10 + 32) + 1));
          *(_DWORD *)(v10 + 32) = *(_DWORD *)(v10 + 32) & 0xFFF8FFFF | 0x60000;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          v24 = *(_QWORD *)(v10 + 16);
          v11 = TransitionPteValid;
          if ( (v24 & 0x400) == 0 && (v24 & 8) != 0 && (unsigned __int16)v24 >> 12 == v12[54].Header.SignalState )
            v3 = MiCaptureDirtyBitToPfn(v10);
          *a3 = v11;
          goto LABEL_5;
        }
        MiDiscardTransitionPfnEx(v10, 0LL, v21, v22);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_21:
    LOBYTE(v8) = 17;
    MiUnlockProtoPoolPage(v6, v8, v9);
    return 0LL;
  }
  v12 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
LABEL_5:
  v13 = ((*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v10 + 24) ^ ((*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL)
                                                                                       + 1)) & 0xC000000000000000uLL;
  *(_QWORD *)(v10 + 24) = v13;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v13) = 17;
  MiUnlockProtoPoolPage(v6, v13, v9);
  if ( v3 )
    MiReleasePageFileInfo(v12, v3, 1LL);
  v14 = (v11 >> 12) & 0xFFFFFFFFFFLL;
  v15 = 48 * v14 - 0x220000000000LL;
  v16 = *(_QWORD *)(v15 + 16);
  v17 = 48 * MiGetContainingPageTable((ULONG_PTR)BugCheckParameter4) - 0x220000000000LL;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(__int64 *)(v17 + 24) < 0 );
  }
  *(_QWORD *)(v17 + 24) = ((*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v17 + 24) ^ ((*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = (unsigned __int8)v16 >> 5;
  if ( (*(_DWORD *)(v15 + 32) & 0xC00000) != 0x400000 )
  {
    if ( (*(_DWORD *)(v15 + 32) & 0xC00000) != 0 )
    {
      if ( (*(_DWORD *)(v15 + 32) & 0xC00000) == 0x800000 )
        v18 |= 0x18u;
    }
    else
    {
      v18 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte((unsigned __int64)BugCheckParameter4, v14, v18);
  if ( (unsigned int)MiAllocateWsle(
                       a2,
                       BugCheckParameter4,
                       (_QWORD *)(48 * v14 - 0x220000000000LL),
                       0,
                       ValidPte,
                       0,
                       0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v14 - 0x220000000000LL);
  MiLockAndDecrementShareCount(v17);
  return 0LL;
}
