/*
 * XREFs of ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x140116E50
 * Callers:
 *     PageInAllocation_0 @ 0x1400D2924 (PageInAllocation_0.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x1400378B4 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400472B4 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004FA90 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400B5F20 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1401226BC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rdx
  VIDMM_GLOBAL *v8; // r10
  bool v9; // si
  __int64 v10; // r14
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  UINT v15; // ecx
  __int64 v16; // rax
  DXG_DEFERRED_WORK_QUEUE *v17; // rcx
  SIZE_T v18; // rdx
  SIZE_T v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  _BYTE v25[8]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v26; // [rsp+60h] [rbp-31h] BYREF
  __int128 v27; // [rsp+68h] [rbp-29h] BYREF
  __int128 v28; // [rsp+78h] [rbp-19h] BYREF
  _DXGKARG_SETVIDEOPROTECTEDREGION v29; // [rsp+88h] [rbp-9h] BYREF

  if ( *((_BYTE *)this + 480) )
  {
    v2 = *((_QWORD *)this + 55) == 0LL;
    *((_BYTE *)this + 480) = 0;
    v3 = 40LL;
    v25[0] = 0;
    if ( !v2 )
      v3 = 424LL;
    v26 = 0LL;
    v4 = *((_QWORD *)this + 32);
    v5 = *(_QWORD *)((char *)this + v3);
    *(_QWORD *)&v28 = VIDMM_SEGMENT::MoveOneResource;
    DWORD2(v28) = 0;
    v27 = v28;
    v6 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
           v4,
           0,
           v5,
           1,
           (__int64)&v27,
           (__int64)this,
           0LL,
           (__int64)&v26,
           (__int64)v25);
    if ( v6 >= 0 )
    {
      if ( *((_QWORD *)this + 55) )
      {
        v7 = *((unsigned __int16 *)this + 34);
        v8 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
        v9 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 3) + 3032LL) + 352 * v7 + 16) & 8) != 0;
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 3) + 3032LL) + 352 * v7 + 16) & 8) != 0 )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(v8, v7, 0, 0LL, 0LL, 0, 0);
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((unsigned __int16 *)this + 34));
          *(_BYTE *)(*((_QWORD *)this + 1) + 41070LL) = 1;
        }
        v10 = *((_QWORD *)this + 54);
        v11 = *((_QWORD *)this + 32);
        *(_QWORD *)&v27 = VIDMM_SEGMENT::MoveOneResource;
        DWORD2(v27) = 0;
        v12 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                v11,
                v5,
                v10,
                1,
                (__int64)&v27,
                (__int64)this,
                0LL,
                (__int64)&v26,
                (__int64)v25);
        if ( v9 )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(
            *((VIDMM_GLOBAL **)this + 1),
            *((unsigned __int16 *)this + 34),
            0,
            0LL,
            0LL,
            0,
            1u);
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((unsigned __int16 *)this + 34));
          *(_BYTE *)(*((_QWORD *)this + 1) + 41070LL) = 0;
        }
        v13 = *((_QWORD *)this + 32);
        *(_QWORD *)&v27 = VIDMM_SEGMENT::CheckLowestAddress;
        DWORD2(v27) = 0;
        *(_QWORD *)&v28 = 0LL;
        if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                             v13,
                             v5,
                             v10,
                             0,
                             (__int64)&v27,
                             (__int64)this,
                             (__int64)&v28,
                             (__int64)&v26,
                             (__int64)v25) == -1073741823 )
        {
          v14 = *((_QWORD *)this + 53);
          *(_QWORD *)&v28 = v28 & ~*((_QWORD *)this + 51);
          if ( (unsigned __int64)v28 > v14 )
          {
            v29.PhysicalAdapterIndex = *((unsigned __int16 *)this + 34);
            *(_QWORD *)&v29.VprIndex = 0LL;
            v15 = VIDMM_SEGMENT::DriverId(this);
            v29.CurrentSize = *((_QWORD *)this + 55);
            v16 = *((_QWORD *)this + 54);
            v29.SegmentIndex = v15;
            v17 = (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41280LL);
            v29.NewSize = v16 - v18;
            *((_QWORD *)this + 55) = v16 - v18;
            v29.CurrentStartOffset = v19;
            v29.NewStartOffset = v18;
            *((_QWORD *)this + 53) = v18;
            if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems(v17) )
            {
              if ( (byte_14008A201 & 1) != 0 )
                McTemplateK0q_EtwWriteTransfer(v20, &EventPerformanceWarning, v21, 24);
              KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41328LL), Executive, 0, 0, 0LL);
            }
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 200LL))(*((_QWORD *)this + 2));
            VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((unsigned __int16 *)this + 34));
            VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v29);
            v12 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                    *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 3168LL),
                    &v29);
            if ( v12 < 0 && g_IsInternalRelease )
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
              WdLogGlobalForLineNumber = 213;
            }
            if ( (byte_14008A201 & 1) != 0 )
              McTemplateK0qqqxxp_EtwWriteTransfer(
                *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
                v22,
                v23,
                v29.PhysicalAdapterIndex,
                v29.SegmentIndex,
                v29.VprIndex,
                v29.NewStartOffset,
                v29.NewSize,
                *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
          }
        }
        else
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5748;
          DxgkLogInternalTriageEvent(v24, 0x40000LL);
        }
        if ( v12 < 0 )
        {
          WdLogSingleEntry3(3LL, v26, v12, v25[0]);
          WdLogGlobalForLineNumber = 5762;
        }
      }
    }
    else
    {
      WdLogSingleEntry3(3LL, v26, v6, v25[0]);
      WdLogGlobalForLineNumber = 5613;
    }
  }
}
