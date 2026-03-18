/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140360580
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x14018EE28 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400584EC (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x140060720 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ.c)
 *     ?VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14006229C (-VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x140063508 (-VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCE.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x140360A60 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1403A98F8 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403AA144 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rsi
  __int64 v6; // r15
  PERESOURCE v9; // rbx
  VIDSCH_EXPORT **OwnerThread; // r14
  PERESOURCE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v15; // rbx
  LARGE_INTEGER *p_PrimaryAddress; // r15
  int v18; // eax
  __int64 v19; // r14
  int v20; // eax
  unsigned __int64 *v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v22; // [rsp+28h] [rbp-50h]
  __int64 LowPart; // [rsp+38h] [rbp-40h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v24; // [rsp+80h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v6) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2867;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"this->IsCoreResourceExclusiveOwner()",
      2867LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2868;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      2868LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[2] != a2[237] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2869;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
      2869LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = a2[2][2];
  OwnerThread = (VIDSCH_EXPORT **)v9[30].OwnerEntry.OwnerThread;
  if ( !OwnerThread || !ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)v9[30].OwnerEntry.OwnerThread) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2875;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && pRenderAdapter->IsRenderAdapter() && pRenderCore->IsCoreResourceExclusiveOwner()",
      2875LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = this[2];
  if ( v11[396] )
  {
    if ( v11 != (PERESOURCE *)v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2882;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"this->GetAdapter() == pRenderAdapter",
        2882LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v9[30].OwnerEntry.OwnerThread);
  }
  ADAPTER_RENDER::FlushScheduler((__int64)OwnerThread, 8, v5, 0);
  if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], v5) )
    return 0LL;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( v13 )
    {
      VIDSCH_EXPORT::VidSchRequestDeferredVidPnSourceVisibility(OwnerThread[92], OwnerThread[93], v5);
    }
    else
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v12 + 3160) + 464LL);
      if ( v14 )
        _InterlockedExchange((volatile __int32 *)(3040 * v5 + *(_QWORD *)(v14 + 8) + 1080), 1);
    }
  }
  else
  {
    if ( v13 )
    {
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(&v24);
      v15 = v24;
      if ( !v24 )
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 2931;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Adapter 0x%I64x: Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        return 3221225495LL;
      }
      if ( !a4 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2936;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPrimaryAllocation != NULL", 2936LL, 0LL, 0LL, 0LL, 0LL);
      }
      v15->VidPnSourceId = v5;
      p_PrimaryAddress = &v15->PrimaryAddress;
      v15->hAllocation = (HANDLE)*((_QWORD *)a4 + 2);
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        OwnerThread[95],
        OwnerThread[96],
        *((struct VIDMM_MULTI_GLOBAL_ALLOC **)a4 + 1),
        &v15->PrimarySegment,
        &v15->PrimaryAddress,
        0LL);
      v15->Flags.Value |= 1u;
      v18 = VIDSCH_EXPORT::VidSchSetVidPnSourceAddress(OwnerThread[92], OwnerThread[93], v15);
      v19 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry4(2LL, v18, this[2], v5, p_PrimaryAddress->LowPart);
        LowPart = p_PrimaryAddress->LowPart;
        v21 = (unsigned __int64 *)this[2];
        WdLogGlobalForLineNumber = 2953;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Status=0x%I64x Adapter 0x%I64x: DdiSetVidPnSourceAddress failed 0x%I64x 0x%I64x",
          v19,
          (__int64)v21,
          v5,
          LowPart,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
        return (unsigned int)v19;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    }
    v20 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0);
    v6 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry3(2LL, v20, this[2], v5);
      v22 = (unsigned __int64 *)this[2];
      WdLogGlobalForLineNumber = 2966;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Status=0x%I64x Adapter 0x%I64x: SetVidPnSourceVisibility TRUE failed 0x%I64x",
        v6,
        (__int64)v22,
        v5,
        0LL,
        0LL);
    }
  }
  ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, v5);
  return (unsigned int)v6;
}
