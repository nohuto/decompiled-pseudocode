/*
 * XREFs of MiDiscardPteTransitionPage @ 0x14052AE60
 * Callers:
 *     MiWsleFree @ 0x14031B9C0 (MiWsleFree.c)
 *     MiDiscardPte @ 0x1406F3B70 (MiDiscardPte.c)
 * Callees:
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiDiscardPteTransitionPage(unsigned __int64 *BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int16 v5; // si
  int v6; // ebx
  struct _KEVENT *v7; // rbp
  char v8; // al
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char v12; // r9
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  int v15; // r10d

  v2 = a2;
  if ( a2 )
  {
    v5 = 1;
  }
  else
  {
    result = MiLockTransitionLeafPageEx((ULONG_PTR)BugCheckParameter2, 0LL, 0);
    v2 = result;
    if ( !result )
      return result;
    v5 = 0;
  }
  v6 = *(_DWORD *)(v2 + 32);
  v7 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL));
  if ( (unsigned __int16)v6 <= v5 )
  {
    v13 = MiCaptureDirtyBitToPfn(v2);
    if ( v5 )
      *(_DWORD *)(v2 + 32) &= 0xFFFF0000;
    else
      MiUnlinkPageFromListEx(v2, 0);
    v15 = *(_DWORD *)(v2 + 32);
    if ( (v15 & 0x80000) != 0
      && MiCanPfnOriginalPteBeLost(v2)
      && (v15 & 0x100000) == 0
      && (*(_DWORD *)(v2 + 16) & 8) != 0 )
    {
      *(_QWORD *)(v2 + 16) &= ~8uLL;
    }
    *(_DWORD *)(v2 + 32) = v15 & 0xFFEFFFFF;
    *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 32) & 0xFFF8FFFF | 0x20000;
    MiDiscardTransitionPfnEx(v2, 0LL, v14);
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v13 )
      return 1LL;
    v10 = v13;
    goto LABEL_24;
  }
  if ( v5 )
    MiPfnShareCountIsZero(v2, 0LL);
  v8 = *(_BYTE *)(v2 + 34);
  if ( (v8 & 0x20) != 0 || (_WORD)v6 == 1 && (v8 & 8) != 0 )
  {
    MiChargeCommit((ULONG *)v7, 1uLL, 4u);
    v11 = MiTransferSoftwarePte(*(_QWORD *)(v2 + 16), 0LL, 0, 0);
    MiDeleteTransitionPte((ULONG_PTR)BugCheckParameter2, v2, 0x11u, v12);
    *BugCheckParameter2 = v11;
    _InterlockedDecrement64((volatile signed __int64 *)KeGetCurrentThread()->ApcState.Process[1].Padding);
  }
  else
  {
    MiZeroPhysicalPage(0LL, (v2 + 0x220000000000LL) / 48, 3, (*(_DWORD *)(v2 + 32) >> 22) & 3);
    v9 = MiCaptureDirtyBitToPfn(v2);
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v9 )
    {
      v10 = v9;
LABEL_24:
      MiReleasePageFileInfo(v7, v10, 1LL);
    }
  }
  return 1LL;
}
