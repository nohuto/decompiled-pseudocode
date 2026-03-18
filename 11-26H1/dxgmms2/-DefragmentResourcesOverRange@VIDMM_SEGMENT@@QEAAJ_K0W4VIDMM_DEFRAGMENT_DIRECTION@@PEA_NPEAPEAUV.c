/*
 * XREFs of ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z @ 0x1400B6084
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400A1420 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009DCA0 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@ZXZ @ 0x14009E72C (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@ZXZ.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1400BF7D8 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z@Z @ 0x1400BFF54 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1401226BC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::DefragmentResourcesOverRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  VIDMM_GLOBAL *v10; // rcx
  bool (__fastcall *MoveableResourceCallback)(const struct VIDMM_PHYSICAL_ALLOC_LEGACY *); // rax
  VIDMM_LINEAR_POOL *v12; // rcx
  bool v14; // dl
  __int64 v15; // r8
  VIDMM_GLOBAL *v16; // r10
  __int64 v17; // rax
  bool v18; // si
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(VIDMM_SEGMENT *__hidden, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, bool *, void *); // [rsp+58h] [rbp-61h] BYREF
  int v23; // [rsp+60h] [rbp-59h]
  _QWORD v24[16]; // [rsp+68h] [rbp-51h] BYREF

  VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(*(VIDMM_GLOBAL **)(a1 + 8));
  memset(v24, 0, 0x78uLL);
  v10 = *(VIDMM_GLOBAL **)(a1 + 8);
  v24[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  v24[0] = a2;
  v24[1] = a3;
  LODWORD(v24[2]) = a4;
  MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v10);
  v12 = *(VIDMM_LINEAR_POOL **)(a1 + 256);
  LODWORD(v24[8]) |= 4u;
  v24[4] = MoveableResourceCallback;
  v24[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v24[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v24[7] = VIDMM_SEGMENT::GetAlignmentCB;
  VIDMM_LINEAR_POOL::DefragmentRange(v12, (struct VIDMM_DEFRAGMENT_ARGS *)v24);
  if ( !*(_BYTE *)(a1 + 480) )
    return 0LL;
  *(_BYTE *)(a1 + 480) = 0;
  v14 = a2 == *(_QWORD *)(a1 + 424) && a3 == *(_QWORD *)(a1 + 432);
  v15 = *(unsigned __int16 *)(a1 + 68);
  v16 = *(VIDMM_GLOBAL **)(a1 + 8);
  v17 = *(_QWORD *)(*((_QWORD *)v16 + 3) + 3032LL);
  v18 = (*(_DWORD *)(v17 + 352 * v15 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v17 + 352 * v15 + 16) & 8) != 0 && v14 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v16, v15, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(unsigned __int16 *)(a1 + 68));
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 41070LL) = 1;
  }
  v19 = *(_QWORD *)(a1 + 256);
  v22 = VIDMM_SEGMENT::MoveOneResource;
  v23 = 0;
  v20 = (int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(v19, a2, a3, a4, (__int64)&v22, a1, 0LL, a6, a5);
  if ( v18 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(
      *(VIDMM_GLOBAL **)(a1 + 8),
      *(unsigned __int16 *)(a1 + 68),
      0,
      0LL,
      0LL,
      0,
      1u);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(unsigned __int16 *)(a1 + 68));
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 41070LL) = 0;
  }
  if ( (int)v20 < 0 )
  {
    WdLogSingleEntry1(3LL, v20);
    v21 = *(_QWORD *)(a1 + 256);
    WdLogGlobalForLineNumber = 5159;
    VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(v21, a2, a3, a4);
  }
  return (unsigned int)v20;
}
