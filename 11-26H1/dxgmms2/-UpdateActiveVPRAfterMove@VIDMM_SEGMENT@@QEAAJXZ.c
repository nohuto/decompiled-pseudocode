/*
 * XREFs of ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x140126570
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400A1420 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x1400378B4 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400472B4 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004FA90 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400B5F20 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?CheckLowestAddress@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6000 (-CheckLowestAddress@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_SEGMENT::UpdateActiveVPRAfterMove(VIDMM_SEGMENT *this)
{
  int v1; // r14d
  unsigned __int64 v2; // r15
  _QWORD **v3; // rsi
  unsigned __int64 v4; // r12
  int v5; // edx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r8
  _QWORD *v9; // r10
  __int64 v10; // rcx
  char v11; // al
  unsigned __int64 v12; // r8
  UINT v13; // ecx
  __int64 v14; // rax
  DXG_DEFERRED_WORK_QUEUE *v15; // rcx
  SIZE_T v16; // rdx
  SIZE_T v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  bool v23; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-11h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v25; // [rsp+60h] [rbp-9h] BYREF

  v1 = 0;
  v2 = *((_QWORD *)this + 54);
  v3 = (_QWORD **)(*((_QWORD *)this + 32) + 80LL);
  v4 = *((_QWORD *)this + 53);
  v5 = 0;
  v23 = 0;
  v24 = 0LL;
  v7 = *v3;
  if ( *v3 != v3 )
  {
    do
    {
      v8 = *(v7 - 5);
      v9 = v7;
      v10 = *(v7 - 4);
      v7 = (_QWORD *)*v7;
      if ( v8 + v10 > v4 )
      {
        if ( v8 >= v2 )
          break;
        v11 = *((_BYTE *)v9 + 16);
        if ( v11 == 3 || v11 == 4 )
        {
          v5 = VIDMM_SEGMENT::CheckLowestAddress(this, (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)*(v9 - 3), &v23, &v24);
          if ( v5 < 0 )
            break;
        }
      }
    }
    while ( v7 != v3 );
    if ( v5 == -1073741823 )
    {
      v12 = *((_QWORD *)this + 53);
      v24 = v12 & ~*((_QWORD *)this + 51);
      if ( v24 > v12 )
      {
        v25.PhysicalAdapterIndex = *((unsigned __int16 *)this + 34);
        *(_QWORD *)&v25.VprIndex = 0LL;
        v13 = VIDMM_SEGMENT::DriverId(this);
        v25.CurrentSize = *((_QWORD *)this + 55);
        v14 = *((_QWORD *)this + 54);
        v25.SegmentIndex = v13;
        v15 = (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41280LL);
        v25.NewSize = v14 - v16;
        *((_QWORD *)this + 55) = v14 - v16;
        v25.CurrentStartOffset = v17;
        v25.NewStartOffset = v16;
        *((_QWORD *)this + 53) = v16;
        if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems(v15) )
        {
          if ( (byte_14008A201 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v18, &EventPerformanceWarning, v19, 24);
          KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41328LL), Executive, 0, 0, 0LL);
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 200LL))(*((_QWORD *)this + 2));
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((unsigned __int16 *)this + 34));
        VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v25);
        v1 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 3168LL),
               &v25);
        if ( v1 < 0 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 213;
        }
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0qqqxxp_EtwWriteTransfer(
            *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
            v20,
            v21,
            v25.PhysicalAdapterIndex,
            v25.SegmentIndex,
            v25.VprIndex,
            v25.NewStartOffset,
            v25.NewSize,
            *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      }
    }
  }
  return (unsigned int)v1;
}
