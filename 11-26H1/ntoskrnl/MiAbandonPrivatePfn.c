/*
 * XREFs of MiAbandonPrivatePfn @ 0x1402ED8CC
 * Callers:
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14046BF10 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAbandonPrivatePfn(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v3; // rdi
  __int64 *v5; // r15
  char v6; // bl
  __int64 v7; // rcx
  char v8; // r12
  __int64 v10; // rax
  int v11; // ebx
  unsigned __int64 v12; // rcx
  _DWORD *SubsectionFromPte; // r8
  _DWORD *v14; // r14
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rax
  int v18; // ebx
  _DWORD *v19; // r8
  _DWORD *v20; // r14
  __int64 v21; // rbp
  int v22; // eax

  v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 )
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v10 & 1) == 0 )
    {
      if ( qword_140E2D8C0 && (v10 & 0x10) == 0 )
        LOWORD(v10) = qword_140E2D8C8 & v10;
      if ( (v10 & 0x400) == 0 && (v10 & 0x800) == 0 && (v10 & 8) == 0 )
      {
        v11 = *(_DWORD *)(BugCheckParameter2 + 32);
        if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
        {
          v12 = *(_QWORD *)(BugCheckParameter2 + 16);
          if ( (v12 & 0x400000000000400LL) == 0x400 )
          {
            SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(v12);
            if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
              && (SubsectionFromPte[8] & 0x20000) == 0 )
            {
              goto LABEL_48;
            }
          }
        }
        if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
          && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0
          && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) == 0 )
        {
          v14 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)v14 + 56LL) & 0x20) == 0 && (v14[38] & 1) == 0 )
          {
            v15 = *(_QWORD *)v14;
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v14 + 72LL));
            v16 = v14[38];
            if ( (v16 & 1) == 0 )
              v14[38] = v16 | 1;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
          }
        }
        if ( (v11 & 0x80000) != 0
          && (unsigned int)MiCanPfnOriginalPteBeLost(BugCheckParameter2)
          && (v11 & 0x100000) == 0
          && (*(_BYTE *)(BugCheckParameter2 + 16) & 8) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
        }
        *(_DWORD *)(BugCheckParameter2 + 32) = v11 | 0x100000;
      }
    }
  }
  v5 = (__int64 *)(BugCheckParameter2 + 16);
  v6 = 0;
  v7 = *(_QWORD *)(BugCheckParameter2 + 16);
  v8 = 0;
  if ( (v7 & 4) != 0 )
  {
    if ( a2
      || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(
                         *(_QWORD *)(stru_140E2ED08.ThreadLock
                                   + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)),
                         BugCheckParameter2 + 16) )
    {
      v6 = 1;
    }
    else
    {
      v3 = *v5;
    }
    v8 = 1;
    if ( !v6 )
    {
LABEL_23:
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
      return v3;
    }
  }
  else if ( !a2 || (v7 & 8) == 0 )
  {
    return v3;
  }
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( (v3 & 8) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
  }
  else
  {
    v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( (v3 & 4) != 0 )
      v17 = *(_QWORD *)(BugCheckParameter2 + 16);
    v3 = v17;
  }
  v18 = *(_DWORD *)(BugCheckParameter2 + 32);
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
    && (*(_QWORD *)(BugCheckParameter2 + 16) & 0x400000000000400LL) == 0x400 )
  {
    v19 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)v19 + 56LL) & 0x820) == 0x20 && (v19[8] & 0x20000) == 0 )
LABEL_48:
      KeBugCheckEx(0x1Au, 0x8840uLL, BugCheckParameter2, 0LL, 1uLL);
  }
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
    && (*(_DWORD *)v5 & 0x400LL) != 0
    && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) == 0 )
  {
    v20 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)v20 + 56LL) & 0x20) == 0 && (v20[38] & 1) == 0 )
    {
      v21 = *(_QWORD *)v20;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v20 + 72LL));
      v22 = v20[38];
      if ( (v22 & 1) == 0 )
        v20[38] = v22 | 1;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v21 + 72));
    }
  }
  if ( (v18 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(BugCheckParameter2)
    && (v18 & 0x100000) == 0
    && (*(_BYTE *)v5 & 8) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
  }
  *(_DWORD *)(BugCheckParameter2 + 32) = v18 | 0x100000;
  if ( v8 )
    goto LABEL_23;
  return v3;
}
