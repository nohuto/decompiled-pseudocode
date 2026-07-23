/*
 * XREFs of MiDemoteValidLargePageOneLevel @ 0x1406F720C
 * Callers:
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiConvertLargePfnToSmall @ 0x140206E20 (MiConvertLargePfnToSmall.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiInitializeColorBase @ 0x1402A4DE8 (MiInitializeColorBase.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiInitializeUsedPtesCount @ 0x140342440 (MiInitializeUsedPtesCount.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUpdateDemotedSubPage @ 0x14042BCD0 (MiUpdateDemotedSubPage.c)
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiDemoteValidLargePageOneLevel(unsigned __int64 a1)
{
  int v2; // edi
  unsigned __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  _KPROCESS *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v11; // rax
  ULONG_PTR v12; // r9
  int v13; // eax
  __int64 *v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 *v17; // r8
  unsigned __int64 v18; // rsi
  _KPROCESS *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // eax
  int v26; // r8d
  int v27; // ebx
  __int64 v28; // r13
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rsi
  unsigned __int64 v36; // rbx
  __int64 v37; // rdi
  int v38; // edi
  void *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rsi
  int v42; // r12d
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // r13
  __int64 v46; // r15
  __int64 v47; // rbx
  __int64 v48; // rdx
  unsigned __int8 v49[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+34h] [rbp-CCh]
  int v51; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v53; // [rsp+40h] [rbp-C0h]
  __int64 v54; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v55; // [rsp+50h] [rbp-B0h]
  __int64 *ProcessorFlushList; // [rsp+58h] [rbp-A8h]
  __int64 *v57; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v58; // [rsp+68h] [rbp-98h]
  __int128 v59; // [rsp+70h] [rbp-90h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h]
  _BYTE v61[96]; // [rsp+90h] [rbp-70h] BYREF
  ULONG *v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+108h] [rbp+8h]
  _BYTE v64[40]; // [rsp+128h] [rbp+28h] BYREF

  v58 = a1;
  v49[0] = 0;
  v60 = 0LL;
  v59 = 0LL;
  memset_0(v61, 0, 0xB8uLL);
  ProcessorFlushList = 0LL;
  v50 = MI_IS_PHYSICAL_ADDRESS(a1);
  v2 = v50;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  v55 = 0x200000LL;
  v5 = 1LL;
  if ( v50 != 1 )
  {
    v6 = (unsigned int)(v50 - 1);
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      v5 <<= 9;
      --v6;
    }
    while ( v6 );
    v55 = v4;
  }
  v7 = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v8 = MiPteHasShadow();
    if ( v8 )
    {
      KernelWaitTime = v8[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v11 = *(_QWORD *)(KernelWaitTime + 8 * ((v3 >> 3) & 0x1FF));
        if ( (v11 & 0x20) != 0 )
          v9 |= 0x20uLL;
        v7 = v9 | 0x42;
        if ( (v11 & 0x42) == 0 )
          v7 = v9;
      }
    }
  }
  v53 = (v7 >> 12) & 0xFFFFFFFFFFLL;
  MiInitializeLargePfnList((__int64)v61);
  v62 = &MiSystemPartition;
  v52 = 3;
  v63 = 3;
  v13 = MiPageToNode(v12);
  MiInitializeColorBase(a1, v13 + 1, (__int64)v64);
  if ( (int)MiGetPageTablePages((__int64)v61, 1uLL, 2u, (__int64)&v59) < 0 )
    return 0LL;
  v15 = MiUnlinkPageChainHead((__int64)&v59);
  v57 = v15;
  *v15 = 0LL;
  v16 = 0xFFFFF68000000000uLL;
  v54 = (__int64)(v15 + 0x44000000000LL) / 48;
  v17 = (unsigned __int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v18 = *v17;
  if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v19 = MiPteHasShadow();
    if ( v19 )
    {
      v22 = v19[2].KernelWaitTime;
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 8 * ((v21 >> 3) & 0x1FF));
        if ( (v23 & 0x20) != 0 )
          v20 |= 0x20uLL;
        v18 = v20 | 0x42;
        if ( (v23 & 0x42) == 0 )
          v18 = v20;
      }
    }
  }
  v24 = (v18 >> 12) & 0xFFFFFFFFFFLL;
  v25 = -2080374780;
  if ( v2 == 1 )
    v25 = -2147483644;
  v26 = v25;
  v27 = v7 & 0x100;
  if ( v27 && v2 == 1 )
    v26 = v25 | 0x20000000;
  v28 = (v3 << 25) - (v16 << 25);
  ValidPte = MiMakeValidPte(v28 >> 16, v53, v26);
  v30 = ValidPte;
  if ( ((unsigned __int8)(1 << (v50 - 1)) & (unsigned __int8)byte_140E2D809) != 0 )
    v30 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
  v31 = MiMapPageInHyperSpaceWorker(v54, v49, 0x80000000);
  v32 = (unsigned __int64 *)v31;
  do
  {
    *v32++ = v30;
    v30 = ((v5 << 12) + v30) ^ (((v5 << 12) + v30) ^ v30) & 0xFFF0000000000FFFuLL;
  }
  while ( ((unsigned __int16)v32 & 0xFFF) != 0 );
  MiUnmapPageInHyperSpaceWorker(v31, v49[0], 0x80000000);
  v33 = MiMakeValidPte(v3, v53, v27 != 0LL ? -1476395004 : -2013265916);
  v34 = v24;
  v35 = v54;
  v36 = v33;
  MiInitializePfnForOtherProcess(v54, v3, v34, 2560);
  v37 = (__int64)v57;
  v51 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v51);
    while ( *(__int64 *)(v37 + 24) < 0 );
  }
  *(_QWORD *)(v37 + 24) = (*(_QWORD *)(v37 + 24) + 512LL) ^ (*(_QWORD *)(v37 + 24) ^ (*(_QWORD *)(v37 + 24) + 512LL)) & 0xC000000000000000uLL;
  MiInitializeUsedPtesCount(v37, 0x200u);
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v38 = v50;
  MiTransformValidPteInPlace(
    (volatile __int64 *)v3,
    v3,
    (v35 << 12) ^ ((v35 << 12) ^ v36) & 0xFFF0000000000FFFuLL,
    96,
    v50);
  if ( v38 == 3 )
  {
    v39 = MiVaToFlushVm(v58);
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v39, *((_DWORD *)ProcessorFlushList + 3), 8, 1);
    MiInsertLargeTbFlushEntry(v40, 3, v3);
  }
  v41 = 48 * v53 - 0x220000000000LL;
  if ( (*(_QWORD *)(v41 + 40) & 0x10000000000LL) != 0 )
    v52 = MiGetPfnPageSizeIndex(48 * v53 - 0x220000000000LL) + 1;
  v42 = v50;
  v43 = v41 + 24576 * v5;
  v44 = (v28 + 0x10000000) >> 16;
  v45 = 512LL;
  v46 = 48 * v5;
  v47 = v43 + 24;
  do
  {
    v43 -= v46;
    v51 = 0;
    v47 -= v46;
    v44 -= 8LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v47, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v51);
      while ( *(__int64 *)v47 < 0 );
    }
    if ( (*(_BYTE *)(v47 + 11) & 0x10) == 0 )
    {
      if ( (*(_QWORD *)(v47 + 16) & 0x10000000000LL) != 0 )
      {
        if ( v42 == 1 )
          MiConvertLargePfnToSmall(v41, v43, 0);
        else
          MiUpdateDemotedSubPage(v41, v43, v52);
      }
      v48 = v54;
      *(_QWORD *)(v47 - 16) = v44;
      MiSetPfnContainingFrame(v43, v48);
    }
    _InterlockedAnd64((volatile signed __int64 *)v47, 0x7FFFFFFFFFFFFFFFuLL);
    --v45;
  }
  while ( v45 );
  if ( v42 == 1 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v53, v55 >> 12, 6);
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  return 1LL;
}
