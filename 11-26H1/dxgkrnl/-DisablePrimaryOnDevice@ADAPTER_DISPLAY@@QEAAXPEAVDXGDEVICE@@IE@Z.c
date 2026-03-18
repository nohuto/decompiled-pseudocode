/*
 * XREFs of ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1403AA578
 * Callers:
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1401A4314 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14031E4B8 (-ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1403A9C48 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x14042B790 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140008FB0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011840 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003DCA0 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005CC84 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?ClearPrimaryVidPnSource@DXGDEVICE@@QEAAXI@Z @ 0x14005FC1C (-ClearPrimaryVidPnSource@DXGDEVICE@@QEAAXI@Z.c)
 *     Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline @ 0x14007072C (Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1401A5440 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1401C3174 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1402D08F8 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x14032FF60 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A928C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1403A98F8 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1403A997C (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryOnDevice(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  unsigned int v4; // ebx
  DXGADAPTER **v9; // rdx
  DXGADAPTER *v10; // r8
  char v11; // r12
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v13; // r8
  unsigned int v14; // edi
  unsigned int v15; // ebp
  unsigned int i; // ebp
  int v17; // eax
  __int64 v18; // rbx
  int v19; // r8d
  struct COREDEVICEACCESS *v20; // r9
  __int64 v21; // [rsp+28h] [rbp-50h]

  v4 = 0;
  if ( !a2 || *((_DWORD *)a2 + 116) == 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3791;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDevice != NULL) && !pDevice->IsCddDevice()",
      3791LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 != -3 && a3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3792;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(VidPnSourceId == D3DDDI_ID_ALL) || (VidPnSourceId < GetNumVidPnSources())",
      3792LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*((ADAPTER_RENDER **)a2 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3793;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3793LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3794;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3794LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = (DXGADAPTER **)*((_QWORD *)a2 + 2);
  v10 = v9[2];
  if ( *((DXGADAPTER **)a2 + 237) == v10 )
  {
    if ( *((int *)v10 + 761) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((PERESOURCE **)this, v9);
    }
    else
    {
      v11 = 0;
      IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(v9[2]);
      if ( *(_DWORD *)(v13 + 200) == 1 )
      {
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)a2 + 2), 8, a3, 0);
        }
        else
        {
          v14 = 0;
          v15 = 0;
          if ( *((_DWORD *)this + 24) )
          {
            do
            {
              if ( a3 == -3 || v4 == a3 )
              {
                if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v4) == a2 )
                  v15 |= 1 << v4;
                v14 |= 1 << v4;
              }
              ++v4;
            }
            while ( v4 < *((_DWORD *)this + 24) );
          }
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*((ADAPTER_RENDER **)a2 + 2), v14, 0LL, v15, 0);
        }
      }
      for ( i = 0; i < *((_DWORD *)this + 24); ++i )
      {
        if ( a3 == -3 || i == a3 )
        {
          if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, i) == a2 )
          {
            if ( !v11 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 1 )
                ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)a2 + 2));
              DXGADAPTER::IncrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), i);
              if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(
                                      *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 2) + 736LL),
                                      *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 2) + 744LL),
                                      i) )
                ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
              DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), i);
              v11 = 1;
            }
            v17 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, i, 0, 8u, a4);
            if ( v17 < 0 )
            {
              v18 = v17;
              WdLogSingleEntry3(2LL, i, *((_QWORD *)this + 2), v17);
              v21 = *((_QWORD *)this + 2);
              WdLogGlobalForLineNumber = 3905;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to turn Visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
                i,
                v21,
                v18,
                0LL,
                0LL);
            }
          }
          if ( *((_DWORD *)a2 + 116) )
          {
            DXGDEVICE::UnpinPrimaryAllocations(a2, i);
            if ( *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 3044LL) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations(a2, i, v19, v20);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations(a2, i);
          }
        }
      }
    }
  }
  else if ( (unsigned int)Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGDEVICE::ClearPrimaryVidPnSource((struct _KTHREAD **)a2, a3);
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)a2, a3, 0LL, 0, 1);
  }
}
