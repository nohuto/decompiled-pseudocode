/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x14031E3A4
 * Callers:
 *     MiWalkImageReleasePage @ 0x1402AE49C (MiWalkImageReleasePage.c)
 *     MiInsertProtectedStandbyPage @ 0x1402AEAF8 (MiInsertProtectedStandbyPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiSwapHardFaultPage @ 0x14031ED1C (MiSwapHardFaultPage.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     MiLockMirrorWritePages @ 0x140525140 (MiLockMirrorWritePages.c)
 *     MiNoPagesLastChance @ 0x140708830 (MiNoPagesLastChance.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiPfnReferenceCountIsZero(ULONG_PTR a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r9
  unsigned __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edx
  _KPROCESS *v8; // rax
  __int64 v9; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h]

  v2 = a1;
  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
      *(_DWORD *)(a1 + 32) &= ~0x10000000u;
    v14 = *(_QWORD *)(a1 + 16);
    if ( (v14 & 0x400) == 0 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      if ( (v14 & 8) == 0 )
      {
        v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (v14 & 4) != 0 )
          v13 = *(_QWORD *)(a1 + 16);
        v12 = v13;
      }
      if ( v12 )
        MiReleasePageFileInfo(
          *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
          v12,
          1LL);
    }
    MiInsertPageInFreeOrZeroedList(a2);
  }
  else
  {
    v4 = a1 + 16;
    v5 = *(_QWORD *)(a1 + 16);
    if ( a1 + 16 >= 0xFFFFF6FB7DBED000uLL
      && v4 <= 0xFFFFF6FB7DBED7F8uLL
      && (v5 & 1) != 0
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      v8 = MiPteHasShadow();
      if ( v8 )
      {
        KernelWaitTime = v8[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v11 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
          if ( (v11 & 0x20) != 0 )
            v9 |= 0x20uLL;
          v5 = v9 | 0x42;
          if ( (v11 & 0x42) == 0 )
            v5 = v9;
        }
      }
    }
    v6 = v5 & ((v5 & 0x400) != 0 ? -5LL : -65537LL);
    v7 = 8;
    *(_QWORD *)v4 = v6;
    if ( (*(_BYTE *)(v2 + 34) & 0x10) == 0 )
      v7 = 4;
    MiInsertPageInList(v2, v7);
  }
}
