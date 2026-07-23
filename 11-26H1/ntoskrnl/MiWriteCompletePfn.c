/*
 * XREFs of MiWriteCompletePfn @ 0x1404008A0
 * Callers:
 *     MiUnlockStoreLockedPages @ 0x1404006D4 (MiUnlockStoreLockedPages.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiReleaseMappedPages @ 0x1404FB928 (MiReleaseMappedPages.c)
 *     MiModwriterReturnUnusedPages @ 0x1407123A4 (MiModwriterReturnUnusedPages.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiIsPfnOriginalPteLost @ 0x140401748 (MiIsPfnOriginalPteLost.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiWriteCompletePfn(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  int CanPfnOriginalPteBeLost; // r14d
  int v7; // ecx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // r11
  __int64 v13; // rdx
  unsigned __int64 v14; // r10
  BOOL v15; // r9d
  _KPROCESS *v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 *v20; // r10
  int v21; // esi
  _KPROCESS *v22; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 PteShadow; // rax
  _DWORD *v28; // rax
  _DWORD *SubsectionFromPte; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-40h] BYREF
  __int64 v33[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v34; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  CanPfnOriginalPteBeLost = 0;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_3;
    v12 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) != 0
      && (CanPfnOriginalPteBeLost = MiCanPfnOriginalPteBeLost(BugCheckParameter2)) != 0 )
    {
      v15 = 0;
    }
    else
    {
      v13 = *(_QWORD *)(BugCheckParameter2 + 16);
      v14 = BugCheckParameter2 + 16;
      if ( BugCheckParameter2 + 16 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        a3 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( (v13 & 1) != 0 && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          v22 = MiPteHasShadow();
          if ( v22 )
          {
            KernelWaitTime = v22[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v24 = *(_QWORD *)(KernelWaitTime + 8 * ((v14 >> 3) & 0x1FF));
              if ( (v24 & 0x20) != 0 )
                a3 |= 0x20uLL;
              LOWORD(v13) = a3 | 0x42;
              if ( (v24 & 0x42) == 0 )
                LOWORD(v13) = a3;
            }
          }
        }
      }
      if ( (*(_WORD *)(*(_QWORD *)(v12 + 8LL * ((unsigned __int16)v13 >> 12) + 22304) + 172LL) & 0x10) != 0
        || (*(_WORD *)(*(_QWORD *)(v12 + 8LL * ((unsigned __int16)v13 >> 12) + 22304) + 172LL) & 0x20) != 0
        && (v13 & 4) != 0 )
      {
        v15 = 1;
      }
      else
      {
        v15 = 0;
        if ( (*(_DWORD *)v14 & 4) != 0 )
          v15 = ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 2;
      }
    }
    v3 = *(_QWORD *)v14;
    v33[0] = *(_QWORD *)v14;
    if ( (v33[0] & 8) != 0 )
    {
      *(_QWORD *)v14 &= ~8uLL;
      if ( v15 )
        goto LABEL_30;
      PteShadow = v33[0];
      if ( (unsigned __int64)v33 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v33 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v33, v33[0]);
      v33[0] = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
      v3 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
    }
    else
    {
      if ( v15 && (v3 & 4) != 0 )
        goto LABEL_30;
      v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    if ( !v15 )
      goto LABEL_3;
LABEL_30:
    *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
    goto LABEL_3;
  }
  CanPfnOriginalPteBeLost = MiIsPfnOriginalPteLost();
  if ( CanPfnOriginalPteBeLost )
  {
    if ( (a2 & 0x20) == 0 )
    {
      v32 = *v20;
      if ( (v32 & 8) != 0 )
      {
        *v20 &= ~8uLL;
        v30 = v32;
        if ( (unsigned __int64)&v32 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v32 <= 0xFFFFF6FB7DBED7F8uLL )
          v30 = MiReadPteShadow((unsigned __int64)&v32, v32);
        v32 = v30 & 0xFFFFFFFFFFFFFFFBuLL;
        v3 = v30 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      else
      {
        v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
    {
      v31 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( (v31 & 8) != 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
        v26 = v31;
        if ( (unsigned __int64)&v31 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v31 <= 0xFFFFF6FB7DBED7F8uLL )
          v26 = MiReadPteShadow((unsigned __int64)&v31, v31);
        v31 = v26 & 0xFFFFFFFFFFFFFFFBuLL;
        v3 = v26 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      else
      {
        v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
    }
    v21 = *(_DWORD *)(BugCheckParameter2 + 32);
    if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
      && (*(_QWORD *)(BugCheckParameter2 + 16) & 0x400000000000400LL) == 0x400 )
    {
      SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
        KeBugCheckEx(0x1Au, 0x8840uLL, BugCheckParameter2, 0LL, 1uLL);
    }
    if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
      && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) == 0 )
    {
      v28 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)v28 + 56LL) & 0x20) == 0 && (v28[38] & 1) == 0 )
        MiSetSubsectionModified(v28, 0LL);
    }
    if ( (v21 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(BugCheckParameter2)
      && (*(_BYTE *)(BugCheckParameter2 + 16) & 8) != 0
      && (v21 & 0x100000) == 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
    }
    *(_DWORD *)(BugCheckParameter2 + 32) = v21 | 0x100000;
  }
LABEL_3:
  *(_DWORD *)(BugCheckParameter2 + 32) &= ~0x80000u;
  if ( (a2 & 8) != 0 && (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 32) &= 0xF8FFFFFF;
  v7 = *(_DWORD *)(BugCheckParameter2 + 32);
  *(_DWORD *)(BugCheckParameter2 + 32) = v7 ^ (unsigned __int16)(v7 ^ (v7 - 1));
  if ( (_WORD)v7 == 1 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && (CanPfnOriginalPteBeLost || (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0) )
    {
      a3 = 0xFFFFF68000000000uLL;
      if ( (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
        || (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
        || (*(_BYTE *)(BugCheckParameter2 + 35) & 0x20) == 0 )
      {
        MiReturnCommit(
          *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)),
          1LL,
          0);
      }
    }
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(BugCheckParameter2, 1, a3);
    }
    else
    {
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
        KeBugCheckEx(
          0x4Eu,
          7uLL,
          (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48,
          *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL,
          0LL);
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) == 0 )
      {
        v8 = *(_QWORD *)(BugCheckParameter2 + 16);
        v9 = BugCheckParameter2 + 16;
        if ( BugCheckParameter2 + 16 >= 0xFFFFF6FB7DBED000uLL
          && v9 <= 0xFFFFF6FB7DBED7F8uLL
          && (v8 & 1) != 0
          && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          v16 = MiPteHasShadow();
          if ( v16 )
          {
            v18 = v16[2].KernelWaitTime;
            if ( v18 )
            {
              v19 = *(_QWORD *)(v18 + 8 * ((v9 >> 3) & 0x1FF));
              if ( (v19 & 0x20) != 0 )
                v17 |= 0x20uLL;
              v8 = v17 | 0x42;
              if ( (v19 & 0x42) == 0 )
                v8 = v17;
            }
          }
        }
        v10 = -65537LL;
        if ( (v8 & 0x400) != 0 )
          v10 = -5LL;
        *(_QWORD *)v9 = v8 & v10;
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) != 0 )
          MiInsertPageInList(BugCheckParameter2, 8u);
        else
          MiInsertPageInList(BugCheckParameter2, 4u);
        return v3;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x10) != 0 )
        *(_DWORD *)(BugCheckParameter2 + 32) &= ~0x10000000u;
      v34 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( (v34 & 0x400) == 0 )
      {
        v25 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( (v34 & 8) == 0 )
        {
          v25 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v34 & 4) != 0 )
            v25 = *(_QWORD *)(BugCheckParameter2 + 16);
        }
        if ( v25 )
        {
          MiReleasePageFileInfo(
            *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8
                                                           * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)),
            v25,
            1LL);
          MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48);
          return v3;
        }
      }
    }
    MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48);
  }
  return v3;
}
