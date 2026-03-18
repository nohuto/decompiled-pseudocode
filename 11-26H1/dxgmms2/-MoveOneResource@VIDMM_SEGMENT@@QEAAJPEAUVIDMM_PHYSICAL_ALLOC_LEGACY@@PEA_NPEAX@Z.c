/*
 * XREFs of ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6A80
 * Callers:
 *     <none>
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x14004F254 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x140055978 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B6A20 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B7C7C (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140123E90 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MoveOneResource(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        bool *a3,
        void *a4)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  struct _KTHREAD **v8; // r12
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // r14
  _QWORD *v15; // r12
  _QWORD **v16; // r12
  _QWORD *v17; // r15
  __int64 v18; // rcx
  VIDMM_SEGMENT *v19; // rcx
  __int64 result; // rax
  int v21; // r8d
  char IsNonOverlappingResourceCB; // r15
  __int64 v23; // r10
  unsigned __int64 *FullPfnArray; // rdx
  struct VIDMM_PHYSICAL_ADAPTER *v25; // r13
  int v26; // eax
  unsigned __int16 v27; // ax
  VIDMM_GLOBAL *v28; // r10
  _QWORD v29[4]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v30; // [rsp+78h] [rbp-9h]
  _QWORD v31[2]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v32; // [rsp+98h] [rbp+17h]
  __int64 v33; // [rsp+A0h] [rbp+1Fh]
  __int128 v34; // [rsp+A8h] [rbp+27h]

  if ( a2 && *((_QWORD *)a2 + 14) && *((_QWORD *)a2 + 16) == *((_QWORD *)a2 + 8) )
  {
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD *)a2 + 304LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    v8 = (struct _KTHREAD **)(v6 + 136);
    *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v6 + 136));
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v9, (struct VIDMM_GLOBAL_ALLOC *)v6);
    v10 = *((_QWORD *)a2 + 8);
    v11 = *((_QWORD *)a2 + 2);
    v31[1] = 0LL;
    v29[1] = 0LL;
    v33 = 0LL;
    v31[0] = *((_QWORD *)a2 + 9);
    v12 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    v29[0] = *((_QWORD *)a2 + 15);
    v32 = (v10 + 8) & -(__int64)(v10 != 0);
    v29[2] = v32;
    v34 = 0LL;
    v29[3] = 0LL;
    v30 = 0LL;
    VIDMM_GLOBAL::MemoryTransfer(
      v12,
      (struct VIDMM_GLOBAL_ALLOC *)v6,
      v11,
      0LL,
      (struct VIDMM_TRANSFER_PARAMETER *)v31,
      (struct VIDMM_TRANSFER_PARAMETER *)v29,
      0);
    if ( (*(_DWORD *)(v6 + 24) & 0x10000) != 0 )
    {
      WdLogSingleEntry1(1LL, v6);
      WdLogGlobalForLineNumber = 5455;
      DxgkLogInternalTriageEvent(v13, 0x40000LL);
      v14 = *(_QWORD **)(v6 + 112);
      if ( v14 != (_QWORD *)(v6 + 112) )
      {
        do
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
          v16 = (_QWORD **)(v15 - 2);
          v17 = *v16;
          while ( v17 != v16 )
          {
            v18 = *(v17 - 4);
            v17 = (_QWORD *)*v17;
            VidSchMarkDeviceAsError(*(_QWORD *)(v18 + 32), 24);
          }
        }
        while ( v14 != (_QWORD *)(v6 + 112) );
        v8 = (struct _KTHREAD **)(v6 + 136);
      }
      v7 = v6 + 304;
    }
    v19 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 8);
    *((_QWORD *)a2 + 9) = *((_QWORD *)a2 + 15);
    *(_WORD *)(*(_QWORD *)(v6 + 368) + 10LL) = VIDMM_SEGMENT::DriverId(v19);
    *(_QWORD *)(*(_QWORD *)(v6 + 368) + 40LL) = *((_QWORD *)a2 + 9) + *(_QWORD *)(*((_QWORD *)a2 + 8) + 24LL);
    *((_QWORD *)a2 + 16) = 0LL;
    *((_QWORD *)a2 + 14) = 0LL;
    if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      DXGFASTMUTEX::Release(v8);
      WdLogSingleEntry0(3LL);
      result = 3221226166LL;
      WdLogGlobalForLineNumber = 5499;
      return result;
    }
    IsNonOverlappingResourceCB = VIDMM_SEGMENT::IsNonOverlappingResourceCB(a2);
    if ( IsNonOverlappingResourceCB )
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(
        *((VIDMM_GLOBAL **)this + 1),
        (*(_DWORD *)(*(_QWORD *)v6 + 52LL) >> 2) & 0x3F);
    if ( (**(_DWORD **)(v6 + 368) & 0x10000) != 0 )
    {
      Feature_NotifyResidency2__private_ReportDeviceUsage();
      v23 = *((_QWORD *)this + 1);
      if ( *(_QWORD *)(*(_QWORD *)(v23 + 24) + 1776LL) )
      {
        FullPfnArray = 0LL;
        v25 = *(struct VIDMM_PHYSICAL_ADAPTER **)(*(_QWORD *)(v23 + 40320) + 8LL * ((*((_DWORD *)a2 + 13) >> 2) & 0x3F));
        v26 = *((_DWORD *)v25 + 24);
        if ( _bittest(&v26, *(unsigned __int8 *)(*((_QWORD *)a2 + 8) + 70LL)) )
          FullPfnArray = (unsigned __int64 *)VidMmGetFullPfnArray((const struct VIDMM_GLOBAL_ALLOC *)v6);
        VIDMM_GLOBAL::NotifyResidency2(
          *((VIDMM_GLOBAL **)this + 1),
          v25,
          (void ***)a2,
          1u,
          1,
          0,
          (*((_QWORD *)a2 + 2) >> 12) + ((*((_QWORD *)a2 + 2) & 0xFFFLL) != 0),
          *((unsigned __int16 *)this + 35),
          (*((__int64 *)a2 + 9) >> 12) + ((*((_QWORD *)a2 + 9) & 0xFFFLL) != 0),
          FullPfnArray);
      }
      else
      {
        v27 = VIDMM_SEGMENT::DriverId(this);
        VIDMM_GLOBAL::NotifyResidency(v28, (struct VIDMM_GLOBAL_ALLOC *)v6, 1u, v27, *((_QWORD *)a2 + 9));
      }
    }
    if ( IsNonOverlappingResourceCB )
      VidSchiUpdateFlipQueueEntriesForMove(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 744LL),
        *(_QWORD *)(v6 + 368),
        v21,
        *(_QWORD *)(*((_QWORD *)a2 + 8) + 24LL),
        *((_QWORD *)a2 + 9));
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(this, a2);
    *(_QWORD *)(v6 + 312) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(v8);
  }
  return 0LL;
}
