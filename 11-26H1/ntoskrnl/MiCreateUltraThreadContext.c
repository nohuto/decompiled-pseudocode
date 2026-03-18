/*
 * XREFs of MiCreateUltraThreadContext @ 0x1402F45F0
 * Callers:
 *     MiFindContiguousPagesPrepare @ 0x14028F3C8 (MiFindContiguousPagesPrepare.c)
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiThreadWorker @ 0x1403C32F0 (MiThreadWorker.c)
 *     MiInitializeNewUltraHugeContext @ 0x14048DA98 (MiInitializeNewUltraHugeContext.c)
 *     MiHugePageOperation @ 0x140705138 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x1407063E4 (MiDefragmentSlabWorker.c)
 *     MiCreateZeroThreadContext @ 0x140773624 (MiCreateZeroThreadContext.c)
 *     MiInitializeScrubPacket @ 0x14087DA14 (MiInitializeScrubPacket.c)
 *     MiInitializeForkMaps @ 0x140961828 (MiInitializeForkMaps.c)
 *     MiCombineIdenticalPages @ 0x140B49E94 (MiCombineIdenticalPages.c)
 *     MmRelocatePfnList @ 0x140B6D1F4 (MmRelocatePfnList.c)
 *     MmInitializeProcessor @ 0x140C0013C (MmInitializeProcessor.c)
 * Callees:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiReleaseFreshPage @ 0x140292190 (MiReleaseFreshPage.c)
 *     MiReplenishUltraPageTables @ 0x1402F445C (MiReplenishUltraPageTables.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F60D0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiGetSlabPage @ 0x14033A284 (MiGetSlabPage.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 */

__int64 __fastcall MiCreateUltraThreadContext(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // r12d
  int v6; // eax
  __int64 v7; // rbx
  unsigned int i; // edi
  signed __int32 v10; // eax
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  signed __int32 v13; // ett
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int32 CachedResidentAvailable; // edx
  bool v16; // zf
  signed __int32 v17; // eax
  __int64 v18; // rbp
  int v19; // edx
  unsigned int v20; // ebx
  int v21; // esi
  __int64 v22; // rdx
  __int64 SlabPage; // r8
  int v24; // r9d
  _QWORD *v25; // rbx
  __int64 v26; // rax

  v5 = a4;
  v6 = a3;
  v7 = a1;
  for ( i = 0; ; ++i )
  {
    if ( i >= 4 )
      return 1LL;
    if ( _bittest(&v6, i) )
      break;
LABEL_4:
    ;
  }
  v10 = dword_140E34BE4;
  v11 = v7 + 32LL * i;
  v12 = i;
  do
  {
    if ( v10 == dword_140E34BE0 )
      goto LABEL_30;
    v13 = v10;
    v10 = _InterlockedCompareExchange(&dword_140E34BE4, v10 + 1, v10);
  }
  while ( v13 != v10 );
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 8) = -1LL;
  *(_QWORD *)(v11 + 16) = -1LL;
  if ( !i )
  {
LABEL_26:
    v6 = a3;
    *(_WORD *)(v11 + 24) = 1;
    goto LABEL_4;
  }
  if ( i > 2uLL )
    v12 = 2LL;
  if ( !(unsigned int)MiChargeCommit(&MiSystemPartition, v12, 0LL, a4) )
    goto LABEL_29;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
  while ( v12 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
  {
    v17 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            CachedResidentAvailable - v12,
            CachedResidentAvailable);
    v16 = CachedResidentAvailable == v17;
    CachedResidentAvailable = v17;
    if ( v16 )
      goto LABEL_17;
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(&MiSystemPartition, v12, 0LL) )
  {
    MiReturnCommit(&MiSystemPartition, v12, 0LL);
LABEL_29:
    _InterlockedDecrement(&dword_140E34BE4);
LABEL_30:
    MiDeleteUltraThreadContext(v7);
    return 0LL;
  }
LABEL_17:
  if ( byte_140E2D71A )
    MiReplenishUltraPageTables((*(_DWORD *)(a2 + 8) >> 9) & 0x3F, v5);
  v18 = 0LL;
  while ( 2 )
  {
    if ( (unsigned int)v18 >= v12 )
    {
      v7 = a1;
      goto LABEL_26;
    }
    v19 = *(_DWORD *)(a2 + 8);
    v20 = v19 & 0xFFF7FF00 ^ (unsigned __int8)_InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) | 0x40000;
    if ( (v5 & 8) == 0 )
    {
      v21 = v5 & 4;
      break;
    }
    v24 = 28;
    v21 = v5 & 4;
    if ( (v5 & 4) == 0 )
      v24 = 12;
    SlabPage = MiGetSlabPage((unsigned int)&MiSystemPartition, 7, v20, v24, 0LL, 0);
    if ( SlabPage != -1 )
    {
LABEL_24:
      *(_QWORD *)(48 * SlabPage - 0x21FFFFFFFFF0LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *(_QWORD *)(v11 + 8 * v18 + 8) = SlabPage;
      v18 = (unsigned int)(v18 + 1);
      continue;
    }
    break;
  }
  SlabPage = MiGetPage((__int64)&MiSystemPartition, v20, (unsigned int)(v21 != 0) + 176);
  if ( SlabPage != -1 )
    goto LABEL_24;
  _InterlockedDecrement(&dword_140E34BE4);
  if ( (_DWORD)v18 )
  {
    v25 = (_QWORD *)(v11 + 8 * ((unsigned int)v18 + 1LL));
    do
    {
      v26 = *--v25;
      MiReleaseFreshPage(48 * v26 - 0x220000000000LL, v22, SlabPage);
      *v25 = -1LL;
      LODWORD(v18) = v18 - 1;
    }
    while ( (_DWORD)v18 );
  }
  MiReleaseNonPagedResources((__int64)&MiSystemPartition, v12);
  MiDeleteUltraThreadContext(a1);
  return 0LL;
}
