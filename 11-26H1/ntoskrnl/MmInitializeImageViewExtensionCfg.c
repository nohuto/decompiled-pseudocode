/*
 * XREFs of MmInitializeImageViewExtensionCfg @ 0x140D004C4
 * Callers:
 *     MmInitializeImageViewExtension @ 0x140D00404 (MmInitializeImageViewExtension.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiMapSinglePage @ 0x14036C61C (MiMapSinglePage.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiAllocateCombineBlock @ 0x140488D08 (MiAllocateCombineBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsInitializeScpCfgPages @ 0x140CDFC1C (PsInitializeScpCfgPages.c)
 */

unsigned __int64 __fastcall MmInitializeImageViewExtensionCfg(char a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // r13
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // ebx
  unsigned int v10; // ebx
  char v11; // al
  __int64 i; // rbp
  __int64 SlabPage; // r14
  _QWORD *CombineBlock; // rax
  _QWORD *v15; // rsi
  int v16; // edx
  __int64 v17; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v19; // rax
  int v21; // [rsp+20h] [rbp-88h]
  int v23; // [rsp+34h] [rbp-74h]
  int v24; // [rsp+38h] [rbp-70h] BYREF
  __int128 v25; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v26[2]; // [rsp+50h] [rbp-58h] BYREF

  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  v4 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 4u, a3, a4);
  v5 = (unsigned __int64 *)v4;
  if ( !v4 )
    goto LABEL_30;
  v6 = (__int64)(v4 << 25) >> 16;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v25);
  v9 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v25, 1u);
  v23 = 0;
  v10 = DWORD2(v25) & 0xFFFFFF00 | v9;
  v11 = a1;
  for ( i = 0LL; i < 32; i += 8LL )
  {
    if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 0LL) < 0 )
      goto LABEL_30;
    SlabPage = MiGetSlabPage((__int64)&MiSystemPartition, 7, v10, 2u, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
    if ( SlabPage == -1 )
    {
      SlabPage = MiGetPage((__int64)&MiSystemPartition, v10, 0);
      if ( SlabPage == -1 )
        goto LABEL_30;
    }
    CombineBlock = (_QWORD *)MiAllocateCombineBlock((__int64)&unk_140E3C338);
    v15 = CombineBlock;
    if ( !CombineBlock )
      goto LABEL_30;
    memset_0(CombineBlock, 0, 0x48uLL);
    v17 = 48 * SlabPage - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v16);
    }
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    MiInitializePfn(48 * SlabPage - 0x220000000000LL, (ULONG_PTR)(v15 + 4), 3, 7);
    *(_QWORD *)(v17 + 8) &= ~0x8000000000000000uLL;
    v15[4] = MiMakeValidPte((unsigned __int64)(v15 + 4), SlabPage, 3);
    *(_DWORD *)(v17 + 32) ^= (unsigned __int16)(*(_DWORD *)(v17 + 32) ^ (*(_DWORD *)(v17 + 32) + 1));
    if ( (*(_BYTE *)(v17 + 34) & 7) != 6 )
      MiBadShareCount(48 * SlabPage - 0x220000000000LL);
    v19 = *(_QWORD *)(v17 + 24);
    *(_QWORD *)(v17 + 24) = ((v19 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v19 ^ ((v19 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
    if ( (v19 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(48 * SlabPage - 0x220000000000LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v15[5] = 1LL;
    v15[7] = 1LL;
    v15[6] = 0x1000000000000000LL;
    v15[3] = 1LL;
    *(_QWORD *)((char *)v26 + i) = v6 + v23;
    MiMapSinglePage(v6 + v23, SlabPage, 1073741856LL, 0LL);
    v11 = a1;
    if ( a1 )
      *(_QWORD *)((char *)&MiState + i + 3552) = v15;
    else
      *(_QWORD *)((char *)&MiState + i + 3584) = v15;
    v23 += 4096;
  }
  if ( (int)PsInitializeScpCfgPages((__int64)v26, v7, v8, qword_140E2D7C8, v21, v11) < 0 )
LABEL_30:
    MxInstallMoreMemory(49);
  return MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, v5, 4u);
}
