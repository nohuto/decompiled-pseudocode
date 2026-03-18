/*
 * XREFs of ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400FB3E4
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400F98E0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009DCA0 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@ZXZ @ 0x14009E72C (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@ZXZ.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400B5BF0 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1400BF7D8 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z@Z @ 0x1400BFF54 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400F9384 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400FA25C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveVPRResource(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        char a3,
        char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // r12
  int v9; // esi
  __int64 v10; // rsi
  VIDMM_GLOBAL *v11; // rcx
  VIDMM_GLOBAL *v12; // rcx
  bool (__fastcall *v13)(const struct VIDMM_PHYSICAL_ALLOC_LEGACY *); // rax
  VIDMM_LINEAR_POOL *v14; // rcx
  int v15; // eax
  __int64 v16; // r10
  VIDMM_GLOBAL *v17; // rcx
  VIDMM_GLOBAL *v18; // rcx
  bool (__fastcall *MoveableResourceCallback)(const struct VIDMM_PHYSICAL_ALLOC_LEGACY *); // rax
  VIDMM_LINEAR_POOL *v20; // rcx
  int v21; // eax
  union _LARGE_INTEGER *v23; // [rsp+60h] [rbp-69h]
  __int64 v24; // [rsp+68h] [rbp-61h]
  _QWORD v25[22]; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v26; // [rsp+130h] [rbp+67h]
  char v27; // [rsp+130h] [rbp+67h]
  unsigned int v28; // [rsp+138h] [rbp+6Fh]

  v4 = *((_QWORD *)this + 53);
  v6 = *((_QWORD *)this + 54);
  v26 = *((_QWORD *)a2 + 2);
  v28 = *((_DWORD *)a2 + 8);
  v23 = (union _LARGE_INTEGER *)((char *)a2 + 120);
  v9 = VIDMM_LINEAR_POOL::Allocate(
         *((VIDMM_LINEAR_POOL **)this + 32),
         v26,
         v28,
         0LL,
         v4,
         v6,
         a3,
         a4,
         a2,
         (union _LARGE_INTEGER *)a2 + 15,
         (void **)a2 + 14);
  if ( v9 < 0 )
  {
    VIDMM_SEGMENT::TrimOfferLists((__int64)this, 1u, v26, *((unsigned int *)a2 + 8));
    v9 = VIDMM_LINEAR_POOL::Allocate(
           *((VIDMM_LINEAR_POOL **)this + 32),
           v26,
           v28,
           0LL,
           v4,
           v6,
           a3,
           a4,
           a2,
           v23,
           (void **)a2 + 14);
    if ( v9 < 0 )
    {
      v10 = v26;
      if ( v26 + *((_QWORD *)this + 56) < *((_QWORD *)this + 55)
                                        * (unsigned __int64)(unsigned int)dword_14008A614
                                        / (unsigned int)dword_14008A618 )
      {
        v16 = v4;
        v17 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
        v27 = 0;
        if ( (*(_DWORD *)(352LL * *((unsigned __int16 *)this + 34) + *(_QWORD *)(*((_QWORD *)v17 + 3) + 3032LL) + 16) & 4) != 0 )
        {
          VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v17);
          memset(v25, 0, 0x78uLL);
          v18 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
          v25[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
          v25[0] = v4;
          v25[1] = v6;
          LODWORD(v25[2]) = 1;
          MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v18);
          v20 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 32);
          LODWORD(v25[8]) |= 4u;
          v25[4] = MoveableResourceCallback;
          v25[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
          v25[7] = VIDMM_SEGMENT::GetAlignmentCB;
          VIDMM_LINEAR_POOL::DefragmentRange(v20, (struct VIDMM_DEFRAGMENT_ARGS *)v25);
          v24 = v25[9];
          v27 = 1;
          v9 = VIDMM_LINEAR_POOL::Allocate(
                 *((VIDMM_LINEAR_POOL **)this + 32),
                 v10,
                 v28,
                 0LL,
                 v4,
                 v6,
                 a3,
                 a4,
                 a2,
                 v23,
                 (void **)a2 + 14);
          if ( v9 >= 0 )
            return (unsigned int)v9;
          v16 = v24;
        }
        v21 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, v16, a2, a3, a4);
        v9 = v21;
        if ( v21 < 0 && v27 )
        {
          WdLogSingleEntry1(3LL, v21);
          WdLogGlobalForLineNumber = 1557;
          goto LABEL_14;
        }
      }
      else
      {
        v9 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, *((_QWORD *)this + 53), a2, a3, a4);
        if ( v9 < 0 )
        {
          v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
          if ( (*(_DWORD *)(352LL * *((unsigned __int16 *)this + 34) + *(_QWORD *)(*((_QWORD *)v11 + 3) + 3032LL) + 16) & 4) != 0 )
          {
            VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v11);
            memset(v25, 0, 0x78uLL);
            v12 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
            v25[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
            v25[0] = v4;
            v25[1] = v6;
            LODWORD(v25[2]) = 1;
            v13 = VIDMM_GLOBAL::GetMoveableResourceCallback(v12);
            v14 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 32);
            LODWORD(v25[8]) |= 4u;
            v25[4] = v13;
            v25[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
            v25[7] = VIDMM_SEGMENT::GetAlignmentCB;
            VIDMM_LINEAR_POOL::DefragmentRange(v14, (struct VIDMM_DEFRAGMENT_ARGS *)v25);
            v15 = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 32),
                    v26,
                    v28,
                    0LL,
                    v4,
                    v6,
                    a3,
                    a4,
                    a2,
                    v23,
                    (void **)a2 + 14);
            v9 = v15;
            if ( v15 < 0 )
            {
              WdLogSingleEntry1(3LL, v15);
              WdLogGlobalForLineNumber = 1492;
LABEL_14:
              VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD **)this + 32), v4, v6, 1);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
