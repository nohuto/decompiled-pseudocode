/*
 * XREFs of ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1401226BC
 * Callers:
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400B5BF0 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z @ 0x1400B6084 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400BE480 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400BEEBC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?VerifyTransfer@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400BF520 (-VerifyTransfer@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x140116E50 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9)
{
  _QWORD **v9; // rsi
  _QWORD *v13; // rbx
  unsigned int v14; // edx
  _QWORD *v15; // rbp
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  char v19; // al

  v9 = (_QWORD **)(a1 + 80);
  if ( a4 )
    v13 = *(_QWORD **)(a1 + 88);
  else
    v13 = *v9;
  v14 = 0;
  while ( 1 )
  {
    v15 = v13;
    if ( v13 == v9 )
      break;
    v16 = *(v13 - 5);
    v17 = *(v13 - 4);
    if ( a4 )
      ++v13;
    v13 = (_QWORD *)*v13;
    if ( v16 + v17 > a2 )
    {
      if ( v16 < a3 )
      {
        v19 = *((_BYTE *)v15 + 16);
        if ( v19 == 3 || v19 == 4 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))a5)(
                  a6 + *(int *)(a5 + 8),
                  *(v15 - 3),
                  a9,
                  a7);
          if ( (v14 & 0x80000000) != 0 )
          {
            *a8 = *(v15 - 3);
            return v14;
          }
        }
      }
      else if ( !a4 )
      {
        return v14;
      }
    }
    else if ( a4 )
    {
      return v14;
    }
  }
  return v14;
}
