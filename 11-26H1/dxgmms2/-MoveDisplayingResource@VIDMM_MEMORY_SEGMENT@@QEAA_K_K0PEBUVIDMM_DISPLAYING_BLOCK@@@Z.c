/*
 * XREFs of ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400BEEBC
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400BE480 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B7C7C (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@.c)
 *     MoveAndFlipDisplayingAllocation @ 0x1400BECE0 (MoveAndFlipDisplayingAllocation.c)
 *     ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1400BFBB4 (-FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATI.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1401226BC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140123E90 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
        VIDMM_MEMORY_SEGMENT *this,
        __int64 a2,
        __int64 a3,
        const struct VIDMM_DISPLAYING_BLOCK *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r12
  _QWORD *v9; // rsi
  __int64 v10; // r12
  VIDMM_GLOBAL *v11; // rcx
  VIDMM_GLOBAL **v12; // r13
  __int64 *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r8
  VIDMM_GLOBAL *v16; // rcx
  __int64 v17; // rcx
  VIDMM_LINEAR_POOL *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r8
  VIDMM_GLOBAL *v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v27; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-41h] BYREF
  __int64 *v29; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall *v30)(VIDMM_SEGMENT *, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, bool *, void *); // [rsp+70h] [rbp-29h] BYREF
  int v31; // [rsp+78h] [rbp-21h]
  _QWORD v32[5]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+Fh]
  __int64 v34; // [rsp+B0h] [rbp+17h]
  char v35; // [rsp+100h] [rbp+67h] BYREF
  __int64 v36; // [rsp+108h] [rbp+6Fh]
  char v37; // [rsp+118h] [rbp+7Fh] BYREF

  v36 = a2;
  v4 = *(_QWORD *)a4;
  v6 = *((_QWORD *)a4 + 1);
  v37 = 0;
  v9 = *(_QWORD **)v4;
  v10 = *(_QWORD *)(v4 + 16) + v6;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 38, 0LL);
  v9[39] = KeGetCurrentThread();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 17));
  VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v11, (struct VIDMM_GLOBAL_ALLOC *)v9);
  v12 = (VIDMM_GLOBAL **)((char *)this + 8);
  if ( !*((_BYTE *)a4 + 24) && (*((_DWORD *)*v12 + 1746) & 0x40000) == 0 )
  {
    v13 = (__int64 *)((char *)a4 + 16);
    WdLogSingleEntry2(4LL, *((_QWORD *)a4 + 1), *((_QWORD *)a4 + 2));
    v14 = *((_QWORD *)a4 + 2);
    v15 = *((_QWORD *)a4 + 1);
    v16 = *v12;
    WdLogGlobalForLineNumber = 3029;
    MoveAndFlipDisplayingAllocation(v16, (struct VIDMM_PHYSICAL_ALLOC *)v4, v15, v14);
LABEL_13:
    **(_QWORD **)(v4 + 136) = *v13;
    *(_QWORD *)(v4 + 72) = *v13;
    *(_QWORD *)(v9[46] + 40LL) = *v13 + *((_QWORD *)this + 3);
    v10 = *v13 + *(_QWORD *)(v4 + 16);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(this, (VIDMM_SEGMENT **)v4);
    goto LABEL_14;
  }
  v32[0] = v36;
  v32[3] = *(unsigned int *)(v4 + 32);
  v32[4] = VidMmiIsSaveableResource;
  v35 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v17 = *(_QWORD *)(v4 + 16);
  v32[1] = a3;
  v13 = (__int64 *)((char *)a4 + 16);
  v33 = *((_QWORD *)a4 + 2);
  v34 = v17 + v33;
  v32[2] = v17;
  v18 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 32);
  v29 = (__int64 *)((char *)a4 + 16);
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              v18,
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v32,
              1,
              &v27,
              &v28) >= 0 )
  {
    v21 = v27;
LABEL_11:
    WdLogSingleEntry3(4LL, *((_QWORD *)a4 + 1), v21, *v13);
    v23 = *((_QWORD *)a4 + 1);
    v24 = *v12;
    WdLogGlobalForLineNumber = 3116;
    MoveAndFlipDisplayingAllocation(v24, (struct VIDMM_PHYSICAL_ALLOC *)v4, v23, v21);
    MoveAndFlipDisplayingAllocation(*v12, (struct VIDMM_PHYSICAL_ALLOC *)v4, v21, *v13);
    if ( v35 )
    {
      v25 = *((_QWORD *)this + 32);
      v30 = VIDMM_SEGMENT::RestoreResourceCB;
      v31 = 0;
      VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        v25,
        v21,
        v28,
        0,
        (__int64)&v30,
        (__int64)this,
        0LL,
        (__int64)&v35,
        (__int64)&v37);
      v13 = v29;
    }
    goto LABEL_13;
  }
  v29 = (__int64 *)((char *)a4 + 16);
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v19);
    WdLogGlobalForLineNumber = 3066;
    v29 = (__int64 *)((char *)a4 + 16);
  }
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              *((VIDMM_LINEAR_POOL **)this + 32),
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v32,
              0,
              &v27,
              &v28) >= 0 )
  {
    v21 = v27;
    v22 = *((_QWORD *)this + 32);
    v30 = VIDMM_SEGMENT::SaveResourceCB;
    v31 = 0;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      v22,
      v27,
      v28,
      0,
      (__int64)&v30,
      (__int64)this,
      0LL,
      (__int64)&v35,
      (__int64)&v37);
    v35 = 1;
    goto LABEL_11;
  }
  _InterlockedIncrement(&dword_14008A85C);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3090;
  DxgkLogInternalTriageEvent(v20, 262145LL);
LABEL_14:
  v9[39] = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 38, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release((struct _KTHREAD **)v9 + 17);
  return v10;
}
