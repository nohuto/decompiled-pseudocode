/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403EC5CC
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1401A1558 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1401BC480 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x14025B780 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EC47C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1402D0A10 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14036BD68 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403EC920 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rbp
  struct DXGALLOCATION *v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rcx
  struct COREDEVICEACCESS *v21; // [rsp+20h] [rbp-58h]

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2))
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1258;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsCoreResourceExclusiveOwner() && pCddDevice->GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      1258LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 4024 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(4024 * v4 + *((_QWORD *)this + 16))) )
  {
    if ( *((_QWORD *)DXGPROCESS::GetCurrent(v7) + 7) != *(_QWORD *)(**(_QWORD **)(*((_QWORD *)this + 16) + v6 + 24)
                                                                  + 18656LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1275;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGPROCESS::GetCurrent()->GetEProcess() == m_pDisplaySource[VidPnSourceId].m_SessionAdapterOwner->GetOw"
                  "nedSession().GetEProcessCSRSS()",
        1275LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
    if ( *((_DWORD *)a2 + 152) == 4 )
    {
      if ( NumDifferentPhysicalAdapters )
      {
        v10 = v6 + 88;
        v11 = NumDifferentPhysicalAdapters;
        do
        {
          *(_QWORD *)(v10 + *((_QWORD *)this + 16)) = 0LL;
          v10 += 8LL;
          --v11;
        }
        while ( v11 );
      }
      *(_QWORD *)(*((_QWORD *)this + 16) + v6 + 600) = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 16) + v6 + 88) )
      {
        if ( NumDifferentPhysicalAdapters )
        {
          v12 = v6 + 88;
          v13 = NumDifferentPhysicalAdapters;
          do
          {
            v14 = *(struct DXGALLOCATION **)(v12 + *((_QWORD *)this + 16));
            if ( v14 )
              ADAPTER_DISPLAY::DisablePrimaryAllocation((PERESOURCE **)this, a2, v14);
            v12 += 8LL;
            --v13;
          }
          while ( v13 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          *(struct DXGRESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 16) + v6 + 88) + 40LL),
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v15 = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
        if ( v15 )
        {
          v16 = v6 + 88;
          v17 = v15;
          do
          {
            *(_QWORD *)(v16 + *((_QWORD *)this + 16)) = 0LL;
            v16 += 8LL;
            --v17;
          }
          while ( v17 );
        }
      }
      v18 = *((_QWORD *)this + 16);
      v19 = *(_QWORD *)(4024 * v4 + v18 + 600);
      if ( v19 )
      {
        if ( *((_QWORD *)a2 + 237) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (*((_BYTE *)a2 + 1917) & 1) != 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            *(struct DXGRESOURCE **)(v19 + 40),
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          v20 = *(void **)(4024 * v4 + v18 + 616);
          if ( v20 )
          {
            ObfDereferenceObject(v20);
            *(_QWORD *)(4024 * v4 + *((_QWORD *)this + 16) + 616) = 0LL;
          }
        }
        *(_QWORD *)(4024 * v4 + *((_QWORD *)this + 16) + 600) = 0LL;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((_QWORD *)this + 15), v4, 0LL, 0, 0, 1);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741811LL);
    v21 = (struct COREDEVICEACCESS *)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 1267;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current adapter 0x%I64x is no owned by current session, returning 0x%I64x.",
      (__int64)v21,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
