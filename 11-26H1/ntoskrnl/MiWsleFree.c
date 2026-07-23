/*
 * XREFs of MiWsleFree @ 0x14031B9C0
 * Callers:
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiConfirmPageIsZero @ 0x14031C190 (MiConfirmPageIsZero.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14031D030 (MiRewriteTrimPteAsDemandZero.c)
 *     MiDiscardPtePrototype @ 0x140526F14 (MiDiscardPtePrototype.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
 */

ULONG_PTR __fastcall MiWsleFree(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4)
{
  ULONG_PTR v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // rdi
  unsigned int v10; // r15d
  BOOL v11; // r13d
  unsigned __int64 v12; // rcx
  int v13; // r12d
  unsigned int v14; // ebx
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  char v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 PteShadow; // rax
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 ContainingPageTable; // [rsp+28h] [rbp-50h]
  struct _KEVENT *v33; // [rsp+88h] [rbp+10h]
  int v34; // [rsp+90h] [rbp+18h] BYREF
  __int64 v35; // [rsp+98h] [rbp+20h]

  v34 = a3;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 48 * ((a4 >> 12) & 0xFFFFFFFFFFLL);
  v35 = v7;
  v8 = v7 - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    LODWORD(v9) = HIBYTE(a4) & 0xF | (16 * ((a4 >> 60) & 7));
  else
    v9 = (*(_QWORD *)v8 >> 46) & 7LL;
  v10 = 0;
  v11 = *(_QWORD *)(v8 + 40) >= 0LL;
  if ( (a3 & 0xC) != 0 )
    goto LABEL_14;
  if ( *(__int64 *)(v8 + 40) < 0 )
  {
    if ( *(__int64 *)(v8 + 8) > 0 && (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0
      || (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
    {
      goto LABEL_14;
    }
LABEL_8:
    if ( (unsigned __int16)*(_DWORD *)(v8 + 32) == 1 && (*(_DWORD *)(v8 + 32) & 0xC00000) == 0x400000 )
    {
      v13 = 1;
      if ( (*(_DWORD *)(v8 + 32) & 0x40000000) == 0 )
        goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
    && (MiGetPagePrivilege((_QWORD *)(v7 - 0x220000000000LL), 0LL, 0LL) & 0xFFFFFFFD) == 0 )
  {
    v12 = (__int64)(v6 << 25) >> 16;
    if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_8;
  }
LABEL_14:
  v13 = 0;
LABEL_15:
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  if ( v13 && (unsigned int)MiConfirmPageIsZero(v8) )
  {
    MiRewriteTrimPteAsDemandZero(a1, v8);
    v33 = 0LL;
    goto LABEL_34;
  }
  v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v33 = 0LL;
  if ( (a4 & 4) != 0 )
  {
LABEL_34:
    ContainingPageTable = MiGetContainingPageTable(v6);
    MiClearPfnReuseFields(v8, v18, v19, v20);
    *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
    *(_DWORD *)(v8 + 32) &= 0xFFFF0000;
    v30 = *(_QWORD *)(v8 + 16);
    if ( (v30 & 8) != 0 )
    {
      PteShadow = v30;
      if ( (unsigned __int64)&v30 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v30 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)&v30, v30);
      v30 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
      v15 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
    }
    else
    {
      v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    if ( v15 )
      v33 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
    MiInsertPageInFreeOrZeroedList(v35 / 48);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = 48 * ContainingPageTable - 0x220000000000LL;
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v34);
      while ( *(__int64 *)(v21 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v21 + 34) & 7) != 6 )
      MiBadShareCount(v21);
    v28 = *(_QWORD *)(v21 + 24);
    v29 = (v28 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v21 + 24) = v29 ^ (v28 ^ v29) & 0xC000000000000000uLL;
    if ( (v28 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v21, v29);
    goto LABEL_85;
  }
  if ( (a4 & 0x42) != 0 )
  {
    v15 = MiCaptureDirtyBitToPfn(v8);
    if ( v15 )
      v33 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  }
  if ( v11 )
    v16 = -1LL;
  else
    v16 = MiGetContainingPageTable(v6);
  v17 = v34;
  if ( (v34 & 1) != 0
    && (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned __int16)*(_DWORD *)(v8 + 32) == 1
    && (*(_DWORD *)(v8 + 32) & 0x100000) == 0 )
  {
    if ( (v23 = *(_DWORD *)(v8 + 32), (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) != 0)
      || (*(_DWORD *)(v8 + 32) & 0x8000000) != 0
      && (v8 < 0xFFFFDE0000000000uLL
       || v8 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
       || MiIsDecayPfn(v35 / 48)
       || (v23 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v8) == 9)
      || (v23 & 0x7000000) == 0x5000000 )
    {
      if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xF8FFFFFF | 0x4000000;
    }
  }
  if ( (v17 & 8) != 0 )
  {
    if ( v11 )
    {
      *(_QWORD *)(v8 + 24) = ((*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (((*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL)
                                                                                   - 1) ^ *(_QWORD *)(v8 + 24)) & 0xC000000000000000uLL;
      MiDiscardPteTransitionPage(v6);
    }
    else
    {
      if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
LABEL_27:
        MiBadShareCount(v8);
      v27 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v8 + 24) = v27 ^ (v27 ^ *(_QWORD *)(v8 + 24)) & 0xC000000000000000uLL;
      if ( !v27 )
        MiPfnShareCountIsZero(v8, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiDiscardPtePrototype(v6, a1);
    }
  }
  else
  {
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      goto LABEL_27;
    v24 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v8 + 24) = v24 ^ (v24 ^ *(_QWORD *)(v8 + 24)) & 0xC000000000000000uLL;
    if ( !v24 )
      MiPfnShareCountIsZero(v8, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v16 == -1LL )
    goto LABEL_86;
  v21 = 48 * v16 - 0x220000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v21 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v21 + 34) & 7) != 6 )
    MiBadShareCount(48 * v16 - 0x220000000000LL);
  v25 = (*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v21 + 24) = v25 ^ (v25 ^ *(_QWORD *)(v21 + 24)) & 0xC000000000000000uLL;
  if ( !v25 )
    MiPfnShareCountIsZero(48 * v16 - 0x220000000000LL, 0LL);
LABEL_85:
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_86:
  if ( v15 )
    MiReleasePageFileInfo(v33, v15, 1LL);
  return (unsigned int)v9 | ((v11 | (16 * (v6 & 0xFF8))) << 9) | 0x100;
}
