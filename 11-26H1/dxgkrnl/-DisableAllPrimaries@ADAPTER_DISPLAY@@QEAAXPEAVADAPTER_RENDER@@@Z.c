/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A928C
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1402D0A10 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A90F8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1403AA578 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011840 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003DCA0 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14006541C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?RemovePending@DXGADAPTER@@QEBAHXZ @ 0x140070290 (-RemovePending@DXGADAPTER@@QEBAHXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1401A5440 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1401C3174 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x14032FF60 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1403A98F8 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1403A997C (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1403FA184 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, DXGADAPTER **a2)
{
  DXGDODPRESENT *v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbp
  struct ADAPTER_RENDER **v9; // rdi
  unsigned int v10; // ebp
  bool i; // r15
  int v12; // r8d
  struct COREDEVICEACCESS *v13; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // [rsp+28h] [rbp-50h]

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3955;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderCore != NULL", 3955LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3956;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderCore->IsCoreResourceExclusiveOwner()",
      3956LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3957;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3957LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[2][396] )
  {
    if ( *((_DWORD *)a2[2] + 50) != 1 && !DXGADAPTER::RemovePending(a2[2]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3967;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
        3967LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)a2);
  }
  else
  {
    v4 = (DXGDODPRESENT *)this[58];
    if ( v4 )
      DXGDODPRESENT::Flush(v4);
  }
  if ( *((_DWORD *)a2[2] + 50) == 1 )
    ADAPTER_RENDER::FlushScheduler((__int64)a2, 8, 0xFFFFFFFF, 0);
  if ( *((_DWORD *)this[2] + 50) == 1 )
  {
    v10 = 0;
    for ( i = this[2][396] == 0LL; v10 < *((_DWORD *)this + 24); ++v10 )
    {
      if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v10) )
      {
        if ( !i )
        {
          DXGADAPTER::IncrementVSyncWaiter(a2[2], v10);
          if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(a2[92], a2[93], v10) )
            ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
          DXGADAPTER::DecrementVSyncWaiter(a2[2], v10);
          i = 1;
        }
        v20 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v10, 0, 4u, 0);
        if ( v20 < 0 )
        {
          v21 = v20;
          WdLogSingleEntry3(2LL, v20, this[2], v10);
          v22 = (__int64)this[2];
          WdLogGlobalForLineNumber = 4023;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"NTSTATUS:0x%I64x ADAPTER_DISPLAY:0x%I64x SetVidPnSourceVisibility failed disabling VidPnSourceId 0x%I64x",
            v21,
            v22,
            v10,
            0LL,
            0LL);
        }
      }
    }
  }
  v5 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    do
    {
      if ( this[16][503 * v5 + 11] )
      {
        NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
        if ( NumDifferentPhysicalAdapters )
        {
          v16 = v15 + 88;
          v17 = NumDifferentPhysicalAdapters;
          do
          {
            v18 = *(__int64 *)((char *)this[16] + v16);
            if ( v18 )
            {
              v19 = *(_QWORD *)(v18 + 48);
              if ( !v19 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4043;
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAllocation != NULL", 4043LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( (*(_DWORD *)(v19 + 4) & 2) == 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4044;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pAllocation->m_CddPrimary",
                  4044LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( ((*(_DWORD *)(v19 + 4) >> 6) & 0xF) != v5 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4045;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pAllocation->m_VidPnSourceId == VidPnSourceId",
                  4045LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( !*(_QWORD *)(v19 + 8) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4046;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pAllocation->m_hVidMmAllocation != NULL",
                  4046LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*(_DWORD *)(v19 + 4) & 0x10) == 0 )
              {
                if ( *((_DWORD *)a2[2] + 50) != 1 && !DXGADAPTER::RemovePending(a2[2]) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4057;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
                    4057LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                VIDMM_EXPORT::VidMmInvalidateAllocation(a2[95], a2[96], *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(v19 + 8));
                *(_DWORD *)(v19 + 4) |= 0x10u;
              }
            }
            v16 += 8LL;
            --v17;
          }
          while ( v17 );
        }
      }
      v6 = *((_DWORD *)this + 24);
      ++v5;
    }
    while ( v5 < v6 );
    v7 = 0;
    if ( v6 )
    {
      do
      {
        v8 = 503LL * v7;
        v9 = (struct ADAPTER_RENDER **)this[16][v8 + 91];
        if ( v9 )
        {
          if ( a2 != (DXGADAPTER **)v9[2] )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4077;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pRenderCore == pDevice->GetRenderCore()",
              4077LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( LODWORD(this[16][v8 + 91][4].OwnerEntry.OwnerThread) )
          {
            DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v9, v7);
            if ( *(int *)(*((_QWORD *)v9[2] + 2) + 3044LL) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)v9, v7, v12, v13);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v9, v7);
          }
        }
        ++v7;
      }
      while ( v7 < *((_DWORD *)this + 24) );
    }
  }
}
