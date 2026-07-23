/*
 * XREFs of MiWalkImageReleasePage @ 0x1402AE49C
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiReplaceTransitionPage @ 0x1402931E8 (MiReplaceTransitionPage.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 *     MiInsertProtectedStandbyPage @ 0x1402AEAF8 (MiInsertProtectedStandbyPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x14031F1B0 (MiRemoveLockedPageCharge.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiCreateDecayPfn @ 0x14045A320 (MiCreateDecayPfn.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiWalkImageReleasePage(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rcx
  ULONG_PTR v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rsi
  int v10; // ebx
  unsigned __int8 v11; // r15
  __int64 v12; // r10
  int PfnSlabType; // eax
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // bl
  int v17; // eax
  __int64 SlabPage; // rax
  char v19; // al
  bool v20; // cf
  unsigned int v21; // eax
  __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r9
  __int64 HasShadow; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  int v33; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 152);
  v4 = 2LL;
  if ( (v2 & 2) != 0 )
    *(_DWORD *)(a1 + 20) |= 2u;
  v5 = *(_QWORD *)(a1 + 128);
  v6 = 48 * v5 - 0x220000000000LL;
  v7 = (*(_QWORD *)(v6 + 40) >> 53) & 1LL;
  if ( *(_DWORD *)(a1 + 80) != 8 && !*(_QWORD *)(a1 + 56) && !(_DWORD)v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v4) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v4, a2);
    }
    *(_QWORD *)(a1 + 56) = MiCreateDecayPfn();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( (*(_DWORD *)(a1 + 20) & 4) != 0 && *(_QWORD *)(a1 + 88) == -1LL )
  {
    v17 = MI_PAGE_TO_FULL_COLOR(v5);
    SlabPage = MiGetSlabPage(*(_QWORD *)(a1 + 64), *(_DWORD *)(a1 + 96), v17, 0, -1LL, 0);
    *(_QWORD *)(a1 + 88) = SlabPage;
    if ( SlabPage == -1 )
      *(_DWORD *)(a1 + 20) &= ~4u;
  }
  v8 = 0LL;
  v9 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v10 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
  v11 = KeGetCurrentIrql();
  if ( v11 != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(v4) = v11;
    KiRaiseIrqlProcessIrqlFlags(v4, a2);
  }
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  v12 = 1024LL;
  if ( (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 )
  {
    v14 = *(_DWORD *)(a1 + 20);
    if ( (v14 & 4) != 0 )
      *(_DWORD *)(a1 + 20) = v14 & 0xFFFFFFFB;
  }
  else if ( (*(_DWORD *)(a1 + 152) & 1) != 0 )
  {
    v27 = v6 + 16;
    a2 = *(_QWORD *)(v6 + 16);
    if ( (unsigned __int64)(v6 + 16) >= 0xFFFFF6FB7DBED000uLL
      && v27 <= 0xFFFFF6FB7DBED7F8uLL
      && (a2 & 1) != 0
      && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(v4, a2, *(_QWORD *)(v6 + 16));
      if ( HasShadow )
      {
        v30 = *(_QWORD *)(HasShadow + 1288);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 8 * ((v27 >> 3) & 0x1FF));
          if ( (v31 & 0x20) != 0 )
            v29 |= 0x20uLL;
          a2 = v29 | 0x42;
          if ( (v31 & 0x42) == 0 )
            a2 = v29;
        }
      }
    }
    *(_QWORD *)v27 = a2 & ((v12 & a2) != 0 ? -5LL : -65537LL);
  }
  if ( *(int *)(v6 + 32) < 0 )
    *(_DWORD *)(a1 + 20) &= ~4u;
  if ( (v10 & 1) == 0 && ((v10 & 0x40) != 0 || (v10 & 0x80u) != 0) && (*(_QWORD *)(v6 + 16) & v12) == 0 )
  {
    v9 = MiCaptureDirtyBitToPfn(48 * v5 - 0x220000000000LL);
    v8 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  }
  if ( (*(_DWORD *)(a1 + 20) & 4) != 0 && (*(_BYTE *)(v6 + 34) & 7) == 6 )
  {
    LOBYTE(a2) = v11;
    MiTrimSharedPage(48 * v5 - 0x220000000000LL, a2, 0LL);
    v26 = KeGetCurrentIrql();
    if ( (_BYTE)v26 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v25) = 2;
      KiRaiseIrqlProcessIrqlFlags(v26, v25);
    }
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v33);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    if ( (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 )
      *(_DWORD *)(a1 + 20) &= ~4u;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(48 * v5 - 0x220000000000LL) )
  {
    if ( (_DWORD)v7
      || *(_DWORD *)(a1 + 80) == 8
      || (*(_BYTE *)(v6 + 34) & 0x10) != 0
      || (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0
      || (*(_DWORD *)(a1 + 20) & 4) != 0 )
    {
      MiPfnReferenceCountIsZero(48 * v5 - 0x220000000000LL, v5);
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 56);
      if ( v15 )
        MiInsertProtectedStandbyPage(v15, 48 * v5 - 0x220000000000LL);
      else
        MiPfnReferenceCountIsZero(48 * v5 - 0x220000000000LL, v5);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v11 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        __writecr8(v11);
      }
      v11 = 17;
    }
  }
  PfnSlabType = *(_DWORD *)(a1 + 20);
  if ( (PfnSlabType & 4) != 0 )
  {
    v19 = *(_BYTE *)(v6 + 34) & 7;
    v20 = v19 == 2;
    LOBYTE(PfnSlabType) = v19 - 2;
    if ( v20 || (_BYTE)PfnSlabType == 1 )
    {
      PfnSlabType = *(_DWORD *)(v6 + 32);
      if ( !(_WORD)PfnSlabType )
      {
        PfnSlabType = *(_DWORD *)(v6 + 32) >> 31;
        if ( *(int *)(v6 + 32) >= 0 )
        {
          PfnSlabType = MiGetPfnSlabType(48LL * *(_QWORD *)(a1 + 88) - 0x220000000000LL);
          if ( PfnSlabType != 9 )
          {
            v21 = MiGetPfnSlabType(48 * v5 - 0x220000000000LL);
            LOBYTE(PfnSlabType) = MiReplaceTransitionPage(48 * v5 - 0x220000000000LL, v22, v21, 0);
            *(_DWORD *)(a1 + 20) ^= ((unsigned __int8)*(_DWORD *)(a1 + 20) ^ (unsigned __int8)(4 * PfnSlabType)) & 4;
            if ( (PfnSlabType & 1) != 0 )
            {
              *(_QWORD *)(a1 + 88) = -1LL;
              *(_QWORD *)(v6 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
              v23 = *(_QWORD *)(v6 + 16);
              if ( v23 )
                DemandZeroPte = v23 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
              else
                DemandZeroPte = MiMakeDemandZeroPte(4);
              *(_QWORD *)(v6 + 16) = DemandZeroPte;
              LOBYTE(PfnSlabType) = MiReturnFreeZeroPage(48 * v5 - 0x220000000000LL, 0);
            }
          }
        }
      }
    }
  }
  if ( v11 != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 )
    LOBYTE(PfnSlabType) = MiReleasePageFileInfo(v8, v9, 1LL);
  if ( v11 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    LOBYTE(PfnSlabType) = v11;
    __writecr8(v11);
  }
  return PfnSlabType;
}
