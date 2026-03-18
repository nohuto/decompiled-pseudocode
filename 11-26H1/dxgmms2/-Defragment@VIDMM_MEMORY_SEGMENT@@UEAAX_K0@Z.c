/*
 * XREFs of ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400BE480
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@ZXZ @ 0x14009E72C (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@ZXZ.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400BEEBC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1400BF7D8 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z@Z @ 0x1400BFF54 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1401226BC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x140124994 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::Defragment(VIDMM_MEMORY_SEGMENT *this, unsigned __int64 a2, unsigned __int64 a3)
{
  VIDMM_GLOBAL *v6; // rcx
  bool (__fastcall *MoveableResourceCallback)(const struct VIDMM_PHYSICAL_ALLOC_LEGACY *); // rax
  __int64 v8; // r9
  int v9; // ecx
  unsigned __int64 v10; // rsi
  VIDMM_LINEAR_POOL *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int128 v15; // [rsp+50h] [rbp-59h]
  _QWORD v16[16]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v17; // [rsp+E0h] [rbp+37h] BYREF
  char v18; // [rsp+110h] [rbp+67h] BYREF
  char v19; // [rsp+118h] [rbp+6Fh] BYREF

  memset(v16, 0, 0x78uLL);
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v16[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v6);
  v9 = *(_DWORD *)(v8 + 6984);
  v10 = a2;
  v16[4] = MoveableResourceCallback;
  v16[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v16[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v16[7] = VIDMM_SEGMENT::GetAlignmentCB;
  LODWORD(v16[8]) = v16[8] & 0xFFFFFFFD | ((v9 & 0x40000 | 0x20000u) >> 17);
  while ( v10 != a3 )
  {
    v11 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 32);
    v18 = 0;
    v16[0] = v10;
    v16[1] = a3;
    VIDMM_LINEAR_POOL::DefragmentRange(v11, (struct VIDMM_DEFRAGMENT_ARGS *)v16);
    if ( *((_BYTE *)this + 480) )
    {
      v12 = *((_QWORD *)this + 32);
      *(_QWORD *)&v15 = VIDMM_SEGMENT::MoveOneResource;
      DWORD2(v15) = 0;
      v17 = v15;
      v13 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
              v12,
              v10,
              v16[1],
              0,
              (__int64)&v17,
              (__int64)this,
              0LL,
              (__int64)&v19,
              (__int64)&v18);
      *((_BYTE *)this + 480) = 0;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(1LL, v13);
        WdLogGlobalForLineNumber = 2888;
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
        VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD *)this + 32), v10, a3, 0LL);
        break;
      }
    }
    v10 = v16[10];
    if ( v16[11] )
    {
      v10 = VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(this, a2, a3, (const struct VIDMM_DISPLAYING_BLOCK *)&v16[11]);
      v16[11] = 0LL;
    }
  }
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(*((VIDMM_LINEAR_POOL **)this + 32), 0LL, *((_QWORD *)this + 5));
}
