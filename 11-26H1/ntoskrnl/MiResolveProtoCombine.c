/*
 * XREFs of MiResolveProtoCombine @ 0x1403089FC
 * Callers:
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiMakeTransitionPteValid @ 0x1403035C0 (MiMakeTransitionPteValid.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     MiDiscardTransitionPfnEx @ 0x140369FE0 (MiDiscardTransitionPfnEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(signed __int64 *BugCheckParameter4, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rsi
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // r14
  struct _KEVENT *v10; // r13
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rbx
  ULONG_PTR v14; // rdi
  int v15; // ebx
  unsigned __int64 ValidPte; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 TransitionPteValid; // rax
  __int64 v21; // rcx
  int v23; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( !MiLockProtoPoolPage((ULONG_PTR)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable((ULONG_PTR)a3) - 0x220000000000LL;
  v7 = MiLockLeafPage(a3, 0);
  v8 = v7;
  if ( !v7 )
    goto LABEL_21;
  v9 = *a3;
  if ( (*a3 & 1) == 0 )
  {
    if ( (*a3 & 0xC00) == 0x800 )
    {
      v10 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v7 + 34) & 0x20) == 0 )
      {
        if ( (MiUnlinkPageFromListEx(v7, 0) & 3) == 0 )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
          *(_DWORD *)(v8 + 32) ^= (unsigned __int16)(*(_DWORD *)(v8 + 32) ^ (*(_DWORD *)(v8 + 32) + 1));
          *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x60000;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          v21 = *(_QWORD *)(v8 + 16);
          v9 = TransitionPteValid;
          if ( (v21 & 0x400) == 0 && (v21 & 8) != 0 && (unsigned __int16)v21 >> 12 == v10[54].Header.SignalState )
            v3 = MiCaptureDirtyBitToPfn(v8);
          *a3 = v9;
          goto LABEL_5;
        }
        MiDiscardTransitionPfnEx(v8, 0LL, v18, v19);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_21:
    MiUnlockProtoPoolPage(v6, 0x11u);
    return 0LL;
  }
  v10 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
LABEL_5:
  *(_QWORD *)(v8 + 24) = ((*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v8 + 24) ^ ((*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v6, 0x11u);
  if ( v3 )
    MiReleasePageFileInfo(v10, v3, 1);
  v11 = (v9 >> 12) & 0xFFFFFFFFFFLL;
  v12 = 48 * v11 - 0x220000000000LL;
  v13 = *(_QWORD *)(v12 + 16);
  v14 = 48 * MiGetContainingPageTable((ULONG_PTR)BugCheckParameter4) - 0x220000000000LL;
  v23 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  *(_QWORD *)(v14 + 24) = ((*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v14 + 24) ^ ((*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = (unsigned __int8)v13 >> 5;
  if ( (*(_DWORD *)(v12 + 32) & 0xC00000) != 0x400000 )
  {
    if ( (*(_DWORD *)(v12 + 32) & 0xC00000) != 0 )
    {
      if ( (*(_DWORD *)(v12 + 32) & 0xC00000) == 0x800000 )
        v15 |= 0x18u;
    }
    else
    {
      v15 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte((unsigned __int64)BugCheckParameter4, v11, v15);
  if ( (unsigned int)MiAllocateWsle(
                       a2,
                       BugCheckParameter4,
                       (_QWORD *)(48 * v11 - 0x220000000000LL),
                       0,
                       ValidPte,
                       0,
                       0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v11 - 0x220000000000LL);
  MiLockAndDecrementShareCount(v14);
  return 0LL;
}
