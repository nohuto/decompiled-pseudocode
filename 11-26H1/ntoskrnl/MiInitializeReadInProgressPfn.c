/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x140375570
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiInitializePageFileInPageSupport @ 0x140375F68 (MiInitializePageFileInPageSupport.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiPfPrepareForPageFileRead @ 0x1406FBBF0 (MiPfPrepareForPageFileRead.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 */

int __fastcall MiInitializeReadInProgressPfn(unsigned __int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v7; // r15d
  __int64 v8; // r11
  __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  unsigned __int64 TransitionPte; // rax
  __int64 v12; // rsi
  __int64 v13; // r10
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int64 DemandZeroPte; // rax
  __int64 v17; // r8
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // ebp
  __int64 v22; // rax
  signed __int64 v23; // rcx
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rax
  struct _LIST_ENTRY *Address; // rbp
  __int64 v31; // [rsp+20h] [rbp-68h]
  unsigned __int64 ContainingPageTable; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+30h] [rbp-58h]
  unsigned __int64 v34; // [rsp+38h] [rbp-50h]
  unsigned int v36; // [rsp+98h] [rbp+10h]
  __int64 *v37; // [rsp+A8h] [rbp+20h]

  v37 = (__int64 *)a4;
  v7 = 0;
  v8 = 0x3FFFFFFFFFLL;
  v9 = 0LL;
  ContainingPageTable = 0x3FFFFFFFFFLL;
  v10 = a1;
  v31 = 0LL;
  TransitionPte = (unsigned __int64)&a2[a3];
  v12 = 0LL;
  v34 = TransitionPte;
  v13 = 0x3FFFFFFFFFLL;
  if ( (unsigned __int64)a2 >= TransitionPte )
    return TransitionPte;
  do
  {
    LODWORD(TransitionPte) = 0;
    v14 = 48 * *a2 - 0x220000000000LL;
    if ( v14 == qword_140E36170 )
      goto LABEL_39;
    if ( (*(_DWORD *)(v14 + 32) & 0x70000) == 0x70000 )
    {
      TransitionPte = *(_QWORD *)(v14 + 8);
      if ( TransitionPte == -3LL )
        goto LABEL_39;
    }
    v15 = *(_QWORD *)a4;
    v17 = (unsigned __int8)a6;
    DemandZeroPte = *(_QWORD *)a4;
    LOBYTE(v17) = (a6 & 0x40) != 0;
    LODWORD(v18) = 0;
    if ( (a6 & 0x40) != 0 )
    {
      LOBYTE(v27) = MiIsPrototypePteVadLookup(*(_QWORD *)a4);
      if ( v27 )
        v28 = v15;
      else
        v28 = *(_QWORD *)(48 * ((*(_QWORD *)MiGetPrototypePteDirect(v15) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
      LODWORD(v18) = MmMakeProtectNotWriteCopy[(v28 >> 5) & 0x1F];
      DemandZeroPte = MiMakeDemandZeroPte(v18);
    }
    else if ( (*(_QWORD *)a4 & 0xC00LL) == 0x800 )
    {
      if ( qword_140E2D8C0 )
      {
        DemandZeroPte = v15 & 0xFFFFFFFFFFFFFFEFuLL;
        if ( (v15 & 0x10) == 0 )
          DemandZeroPte = qword_140E2D8C8 & v15;
      }
      DemandZeroPte = *(_QWORD *)(48 * ((DemandZeroPte >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
    }
    *(_QWORD *)(v14 + 16) = DemandZeroPte;
    if ( (_BYTE)v17 )
    {
      v19 = v18;
    }
    else
    {
      v18 = (DemandZeroPte >> 5) & 0x1F;
      if ( (a6 & 0x10) != 0 )
        *(_QWORD *)(v14 + 40) |= 0x8000000000000000uLL;
      v19 = (DemandZeroPte >> 5) & 0x1F;
      if ( (_DWORD)v18 == 24 )
      {
        if ( v10 >= 0x7FFFFFFF0000LL )
        {
          LOBYTE(v18) = 24;
          v36 = 1;
LABEL_12:
          if ( v19 >> 3 == 3 )
          {
            if ( (v19 & 7) != 0 )
              v36 = 2;
          }
          else if ( v19 >> 3 == 1 )
          {
            v36 = 0;
          }
          goto LABEL_15;
        }
        MiLockVadTree(1u, v9, v17);
        Address = MiLocateAddress(v10);
        MiUnlockVadTree(1, 0x11u);
        LOBYTE(v18) = 24;
        a4 = (__int64)v37;
        v8 = 0x3FFFFFFFFFLL;
        v13 = ContainingPageTable;
        v19 = (LODWORD(Address[3].Flink) >> 5) & 0x1F;
      }
    }
    if ( v19 )
    {
      v36 = 1;
      if ( v19 != 31 )
        goto LABEL_12;
      v36 = 1;
    }
    else
    {
      v36 = 3;
    }
LABEL_15:
    if ( v13 == v8 )
    {
      ContainingPageTable = MiGetContainingPageTable(a4);
      a4 = (__int64)v37;
      v12 = 48 * ContainingPageTable - 0x220000000000LL;
    }
    v20 = a4 & 0x7FFFFFFFFFFFFFFFLL;
    v21 = 0;
    if ( (a6 & 0x20) == 0 )
      v20 = a4;
    v33 = v20;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v21);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    *(_DWORD *)(v14 + 32) |= 0x200000u;
    v22 = a5 + 32;
    if ( !a5 )
      v22 = 0LL;
    *(_QWORD *)v14 = v22;
    if ( ((*(_DWORD *)(v14 + 32) >> 22) & 3) != v36 )
      MiChangePageAttribute(v14, v36);
    *(_QWORD *)(v14 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
    *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
    *(_DWORD *)(v14 + 32) = *(_DWORD *)(v14 + 32) & 0xFFFF0000 | 1;
    if ( (a6 & 8) != 0 && (*(_QWORD *)(v14 + 40) & 0x20000000000000LL) == 0 )
      *(_DWORD *)(v14 + 32) = (a6 << 24) ^ ((a6 << 24) ^ *(_DWORD *)(v14 + 32)) & 0xF8FFFFFF;
    v23 = *(_QWORD *)(v14 + 40);
    v13 = ContainingPageTable;
    v24 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v14 + 40),
            ContainingPageTable ^ (ContainingPageTable ^ v23) & 0xFFFFFF0000000000uLL,
            v23);
    if ( v23 != v24 )
    {
      do
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v14 + 40),
                ContainingPageTable ^ (ContainingPageTable ^ v24) & 0xFFFFFF0000000000uLL,
                v24);
      }
      while ( v25 != v24 );
    }
    *(_QWORD *)(v14 + 8) = v33;
    LODWORD(TransitionPte) = *(_DWORD *)(v14 + 32) & 0xFFF8FFFF | 0x20000;
    *(_DWORD *)(v14 + 32) = TransitionPte;
    if ( a6 < 0 )
      *(_BYTE *)(v14 + 35) |= 0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v15 & 0x400) != 0 )
    {
      v26 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C1FuLL | (32
                                                                   * (((*a2 & 0xFFFFFFFFFFLL) << 7) | v18 & 0x1F | 0x40));
      LODWORD(TransitionPte) = qword_140E2D8C0;
      if ( qword_140E2D8C0 )
      {
        if ( (qword_140E2D8C0 & v26) != 0 )
          v26 |= 0x10uLL;
        else
          v26 |= qword_140E2D8C0;
      }
      a4 = (__int64)v37;
      *v37 = v26;
    }
    else if ( (v15 & 0x800) != 0 )
    {
      a4 = (__int64)v37;
    }
    else
    {
      TransitionPte = MiMakeTransitionPte(*a2, v18);
      a4 = (__int64)v37;
      *v37 = TransitionPte;
    }
    v8 = 0x3FFFFFFFFFLL;
    v9 = v31;
    v10 = a1;
    if ( (a6 & 0x40) == 0 )
      v9 = ++v31;
LABEL_39:
    a4 += 8LL;
    ++a2;
    v37 = (__int64 *)a4;
  }
  while ( (unsigned __int64)a2 < v34 );
  if ( v9 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    TransitionPte = (*(_QWORD *)(v12 + 24) + v31) ^ ((*(_QWORD *)(v12 + 24) + v31) ^ *(_QWORD *)(v12 + 24)) & 0xC000000000000000uLL;
    *(_QWORD *)(v12 + 24) = TransitionPte;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return TransitionPte;
}
