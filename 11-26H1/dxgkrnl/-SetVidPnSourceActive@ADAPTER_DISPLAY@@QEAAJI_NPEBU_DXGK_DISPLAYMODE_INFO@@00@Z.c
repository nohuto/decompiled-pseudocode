/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x14025E8CC (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400584EC (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14006020C (-VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x140060720 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ.c)
 *     ?UpdateVSyncStatsOnMonitorPowerChange@DXGADAPTER@@QEAAXI_N@Z @ 0x140061E48 (-UpdateVSyncStatsOnMonitorPowerChange@DXGADAPTER@@QEAAXI_N@Z.c)
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x1400621C8 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 *     ?VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14006229C (-VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x140063508 (-VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCE.c)
 *     McTemplateK0qtxxxxxx_EtwWriteTransfer @ 0x140070D38 (McTemplateK0qtxxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x140192AE8 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1402D290C (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1402D3ACC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0298 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?NotifyMonitorStateChange@DXGGLOBAL@@QEAAX_N@Z @ 0x1404119C0 (-NotifyMonitorStateChange@DXGGLOBAL@@QEAAX_N@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x140417200 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceActive(
        PERESOURCE **this,
        unsigned int a2,
        unsigned __int8 a3,
        const struct _DXGK_DISPLAYMODE_INFO *a4,
        bool a5,
        unsigned __int8 a6)
{
  int v7; // ebx
  __int64 v9; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *v10; // r12
  PERESOURCE *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r15
  bool v14; // zf
  bool v15; // r14
  PERESOURCE *v16; // rax
  PERESOURCE v17; // r13
  PERESOURCE *v18; // r13
  unsigned int v20; // eax
  int LinkInfoFromTarget; // eax
  __int64 v22; // rdx
  PERESOURCE *v23; // rcx
  DXGGLOBAL *Global; // rax
  ULONG v25; // eax
  char *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  BLTQUEUE *v31; // rcx
  PDEVICE_OBJECT v32; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v34; // r13
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v35; // rbx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v36; // r8
  VIDSCH_EXPORT **v37; // r13
  int v38; // eax
  __int64 v39; // r12
  int v40; // eax
  __int64 v41; // rdi
  PERESOURCE *v42; // rcx
  union _LARGE_INTEGER *v43; // [rsp+20h] [rbp-A9h]
  union _LARGE_INTEGER *v44; // [rsp+20h] [rbp-A9h]
  union _LARGE_INTEGER *v45; // [rsp+20h] [rbp-A9h]
  unsigned int v46; // [rsp+60h] [rbp-69h]
  int v47; // [rsp+64h] [rbp-65h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v48; // [rsp+68h] [rbp-61h] BYREF
  VIDSCH_EXPORT **v49; // [rsp+70h] [rbp-59h]
  __int64 v50; // [rsp+78h] [rbp-51h]
  __int64 v51; // [rsp+80h] [rbp-49h] BYREF
  __int64 v52; // [rsp+88h] [rbp-41h]
  __int64 v53; // [rsp+90h] [rbp-39h]
  __int64 v54; // [rsp+98h] [rbp-31h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-29h]
  __int128 v56; // [rsp+A8h] [rbp-21h]
  struct _DXGK_MONITORLINKINFO v57; // [rsp+B8h] [rbp-11h] BYREF

  v7 = a3;
  v9 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 486;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 486LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v9 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 487;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      487LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = (const struct _DXGK_DISPLAYMODE_INFO *)&unk_1400B28B0;
  if ( a4 )
    v10 = a4;
  if ( (_BYTE)v7 && (!*(_DWORD *)v10 || !*((_DWORD *)v10 + 1)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 500;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!Active || ((pDisplayModeInfo->DisplayMode.Width != 0) && (pDisplayModeInfo->DisplayMode.Height != 0))",
      500LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = this[16];
  v12 = 4024 * v9;
  v49 = 0LL;
  v13 = v9;
  v50 = v12;
  v14 = LOBYTE(v11[503 * v9 + 95]) == 0;
  *((_BYTE *)v11 + v12 + 760) = v7;
  v47 = v14;
  LODWORD(v48) = v7 ^ 1;
  v15 = v14 != (v7 ^ 1);
  if ( v14 != (v7 ^ 1) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::NotifyMonitorStateChange(Global, v7);
    v12 = v50;
  }
  v16 = this[2];
  v17 = v16[396];
  if ( v17 )
  {
    v49 = (VIDSCH_EXPORT **)v16[396];
    *(_QWORD *)&v57.UsageHints.0 = 0LL;
    v57.DitheringSupport.Value = 0;
    if ( (_BYTE)v7 )
    {
      v20 = *(_DWORD *)((char *)this[16] + v12 + 1072);
      v46 = v20;
      if ( v20 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 526;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"TargetId != D3DDDI_ID_UNINITIALIZED",
          526LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v20 = -1;
      }
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(this[2], v20, &v57);
      if ( LinkInfoFromTarget < 0 )
      {
        WdLogSingleEntry3(3LL, LinkInfoFromTarget, v9, v46);
        WdLogGlobalForLineNumber = 533;
      }
    }
    LOBYTE(v12) = v7;
    ((void (__fastcall *)(POWNER_ENTRY, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *, DXGK_MONITORLINKINFO_CAPABILITIES *))v17[7].SystemResourcesList.Blink->Blink[34].Flink)(
      v17[7].OwnerTable,
      (unsigned int)v9,
      v12,
      v10,
      &v57.Capabilities);
    VIDSCH_EXPORT::VidSchCancelDeferredVidPnSourceVisibility(
      (VIDSCH_EXPORT *)v17[7].SystemResourcesList.Blink,
      (struct _VIDSCH_GLOBAL *)v17[7].OwnerTable,
      v9);
    if ( v47 != (_DWORD)v48 )
    {
      DXGADAPTER::UpdateVSyncStatsOnMonitorPowerChange((DXGADAPTER *)this[2], v9, v7);
      if ( bTracingEnabled )
      {
        v27 = (__int64)this[2];
        v54 = 0LL;
        v55 = 0LL;
        *(_QWORD *)&v56 = 0LL;
        v51 = 0LL;
        v52 = 0LL;
        v53 = 0LL;
        DXGADAPTER::GetVSyncTimeCounters(v27, v9, 1, (__int64)&v54);
        DXGADAPTER::GetVSyncTimeCounters((__int64)this[2], v9, 2, (__int64)&v51);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
          McTemplateK0qtxxxxxx_EtwWriteTransfer(v29, v28, v30, v9, v7, v54, v55, v56, v51, v52, v53);
      }
    }
  }
  else
  {
    v18 = this[58];
    if ( v18 )
    {
      v31 = (BLTQUEUE *)((char *)v18[1] + 3040 * v9);
      if ( (_BYTE)v7 )
        BLTQUEUE::EnableVSync(v31);
      else
        BLTQUEUE::DisableVSync((struct _KTHREAD **)v31);
      _InterlockedExchange((volatile __int32 *)&v18[1][10].ExclusiveWaiters + 760 * v9, 0);
    }
  }
  if ( (_BYTE)v7 )
  {
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) )
      {
        v23 = this[2];
LABEL_31:
        if ( !*((_BYTE *)this[16] + v50 + 761) )
          v15 = 1;
        if ( v23[396] )
        {
          VIDSCH_EXPORT::VidSchRequestDeferredVidPnSourceVisibility(v49[92], v49[93], v9);
        }
        else
        {
          v42 = this[58];
          if ( v42 )
            _InterlockedExchange((volatile __int32 *)&v42[1][10].ExclusiveWaiters + 760 * v9, 1);
        }
        goto LABEL_14;
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v9, 0) )
        goto LABEL_14;
      v25 = IoSizeofWorkItem();
      v26 = (char *)operator new[](v25 + 12LL, 0x4B677844u, 64LL);
      if ( v26 )
      {
        *(_QWORD *)v26 = *(PERESOURCE *)((char *)this[2] + 412);
        v32 = g_pDriverObject;
        *((_DWORD *)v26 + 2) = v9;
        IoInitializeWorkItem(v32, (PIO_WORKITEM)(v26 + 12));
        IoQueueWorkItemEx((PIO_WORKITEM)(v26 + 12), DxgkpDelayPresentCddPrimary, DelayedWorkQueue, v26);
        goto LABEL_14;
      }
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate work item for delay presnet CDD primary for adapter 0x%I64x",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    if ( *(_QWORD *)(v22 + 3168) )
    {
      DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((ADAPTER_DISPLAY *)this, v9);
      v34 = DisplayedPrimaryAllocation;
      if ( !DisplayedPrimaryAllocation || (*((_DWORD *)DisplayedPrimaryAllocation + 1) & 0x10) != 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v9, -1071775482LL);
        v45 = (union _LARGE_INTEGER *)this[2];
        WdLogGlobalForLineNumber = 705;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set VidPn source 0x%I64x on adapter 0x%I64x to be active since there is no displayed primar"
                    "y, returning 0x%I64x.",
          (__int64)v45,
          v9,
          -1071775482LL,
          0LL,
          0LL);
        return 3223191814LL;
      }
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(&v48);
      v35 = v48;
      if ( !v48 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 668;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS",
          668LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        return 3221225495LL;
      }
      memset(v48, 0, sizeof(struct _DXGKARG_SETVIDPNSOURCEADDRESS));
      v35->VidPnSourceId = v9;
      v35->hAllocation = (HANDLE)*((_QWORD *)v34 + 2);
      v36 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)v34 + 1);
      v37 = v49;
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(v49[95], v49[96], v36, &v35->PrimarySegment, &v35->PrimaryAddress, 0LL);
      v35->Flags.Value |= 1u;
      v38 = VIDSCH_EXPORT::VidSchSetVidPnSourceAddress(v37[92], v37[93], v35);
      v39 = v38;
      if ( v38 < 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v9, v38);
        v43 = (union _LARGE_INTEGER *)this[2];
        WdLogGlobalForLineNumber = 695;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set VidPn source address on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)v43,
          v9,
          v39,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v35);
        return (unsigned int)v39;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v35);
    }
    if ( ((_DWORD)this[66] & 2) == 0
      && (!a5 || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) != 1)
      || (v23 = this[2], *((_DWORD *)v23 + 105) == 1297040209) && *((int *)v23 + 761) <= 1300 )
    {
      v40 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 1u, 0x800u, a6);
      v41 = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v13, v40);
        v44 = (union _LARGE_INTEGER *)this[2];
        WdLogGlobalForLineNumber = 748;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)v44,
          v13,
          v41,
          0LL,
          0LL);
        return (unsigned int)v41;
      }
      goto LABEL_14;
    }
    goto LABEL_31;
  }
  ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 0x800u, a6);
LABEL_14:
  if ( v15 )
  {
    v54 = 1LL;
    v55 = 0LL;
    v56 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v54) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 798;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(NotificationStatus)", 798LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return 0LL;
}
