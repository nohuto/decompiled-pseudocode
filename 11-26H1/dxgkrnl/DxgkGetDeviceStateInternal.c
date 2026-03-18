/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x14036A470
 * Callers:
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x140037118 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x14020C3F0 (NtDxgkUpdateTrackedWorkload.c)
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14036A260 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetDeviceState @ 0x14036A440 (DxgkGetDeviceState.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z @ 0x14004A2B8 (-VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z.c)
 *     McTemplateK0pqqqqxxt_EtwWriteTransfer @ 0x140055DBC (McTemplateK0pqqqqxxt_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x14018F2F4 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1402BE834 (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x140364F70 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140372F10 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(struct _D3DKMT_GETDEVICESTATE *Src, char a2)
{
  int LastCompletedPresentIdDWM; // esi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v7; // rcx
  bool v8; // zf
  struct _D3DKMT_GETDEVICESTATE *v9; // rdi
  int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  struct DXGDEVICE *v14; // r14
  ADAPTER_RENDER **v15; // rcx
  volatile signed __int64 *v16; // rax
  volatile signed __int64 *v17; // rbx
  enum _D3DKMT_DEVICEEXECUTION_STATE *p_ExecutionState; // rdx
  __int64 v19; // r8
  struct DXGDEVICE *v20; // rbx
  unsigned int v21; // eax
  DXGGLOBAL *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int StateType; // ecx
  struct DXGGLOBAL *Global; // rax
  int DeviceState; // eax
  __int64 v29; // rax
  unsigned int VidPnSourceId; // ecx
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int SyncRefreshCount; // eax
  ADAPTER_RENDER **v34; // rcx
  LARGE_INTEGER SyncQPCTime; // [rsp+40h] [rbp-128h]
  LARGE_INTEGER SyncGPUTime; // [rsp+48h] [rbp-120h]
  int v37; // [rsp+50h] [rbp-118h]
  struct DXGDEVICE *v39; // [rsp+68h] [rbp-100h] BYREF
  int v40; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+78h] [rbp-F0h]
  char v42; // [rsp+80h] [rbp-E8h]
  volatile signed __int64 *v43; // [rsp+88h] [rbp-E0h]
  struct DXGDEVICE *v44; // [rsp+90h] [rbp-D8h] BYREF
  void *v45; // [rsp+98h] [rbp-D0h]
  _OWORD Srca[3]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-98h]
  __int128 v48; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-78h]
  __int128 v50; // [rsp+100h] [rbp-68h]
  __int128 v51; // [rsp+110h] [rbp-58h]
  __int128 v52; // [rsp+120h] [rbp-48h]

  v45 = Src;
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 2028);
  LastCompletedPresentIdDWM = 0;
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    LastCompletedPresentIdDWM = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4666;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    v8 = v42 == 0;
LABEL_84:
    if ( !v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    return (unsigned int)LastCompletedPresentIdDWM;
  }
  memset(Srca, 0, sizeof(Srca));
  v47 = 0LL;
  v9 = (struct _D3DKMT_GETDEVICESTATE *)Srca;
  if ( a2 )
    RtlCopyFromUser(Srca, Src, 0x38uLL);
  else
    v9 = Src;
  if ( !a2 || v9->StateType != D3DKMT_DEVICESTATE_RESET )
  {
    v39 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v9->hDevice, (struct _KTHREAD **)Current, &v39);
    v14 = v39;
    if ( !v39 )
    {
      LastCompletedPresentIdDWM = -1073741811;
      WdLogSingleEntry2(2LL, v9->hDevice, -1073741811LL);
      WdLogGlobalForLineNumber = 4724;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v9->hDevice,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v15 = (ADAPTER_RENDER **)v44;
      if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v15[2], (struct DXGDEVICE *)v15);
LABEL_83:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      v8 = v42 == 0;
      goto LABEL_84;
    }
    v16 = *(volatile signed __int64 **)(*((_QWORD *)v39 + 2) + 16LL);
    v39 = (struct DXGDEVICE *)v16;
    v43 = v16;
    _InterlockedIncrement64(v16 + 3);
    v17 = v16 + 17;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v17, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)v17 + 4);
    v20 = v39;
    if ( *((_BYTE *)v39 + 209)
      && ((v21 = v9->StateType, v21 == 1)
       || v21 - 5 <= 1
       || *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x20u
       && (v22 = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(v22, v23, v24, v25) + 4742))
       && v9->StateType == D3DKMT_DEVICESTATE_PRESENT_DWM) )
    {
      StateType = v9->StateType;
      if ( *((_DWORD *)v20 + 50) != 1 )
      {
        if ( StateType == 1 )
        {
          v9->PresentState.VidPnSourceId = 4;
          goto LABEL_66;
        }
        goto LABEL_58;
      }
      if ( StateType == 1 )
      {
        Global = DXGGLOBAL::GetGlobal();
        p_ExecutionState = &v9->ExecutionState;
        if ( *((_DWORD *)Global + 438) < 0x20u )
        {
          *p_ExecutionState = D3DKMT_DEVICEEXECUTION_ACTIVE;
          goto LABEL_66;
        }
        goto LABEL_64;
      }
      DeviceState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                      (struct DXGDEVICE *)((char *)v20 + 4712),
                      Current,
                      v14,
                      v9);
    }
    else
    {
      if ( v9->StateType == D3DKMT_DEVICESTATE_EXECUTION )
      {
        p_ExecutionState = &v9->ExecutionState;
LABEL_64:
        DeviceState = DXGDEVICE::GetDeviceExecutionState(v14, p_ExecutionState);
        goto LABEL_65;
      }
      if ( v9->StateType != D3DKMT_DEVICESTATE_PRESENT )
      {
        switch ( v9->StateType )
        {
          case D3DKMT_DEVICESTATE_PRESENT_DWM:
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 200LL) == 1 )
            {
              v29 = *((_QWORD *)v14 + 237);
              if ( v29
                && (VidPnSourceId = v9->PresentState.VidPnSourceId,
                    VidPnSourceId >= *(_DWORD *)(*(_QWORD *)(v29 + 3160) + 96LL)) )
              {
                LastCompletedPresentIdDWM = -1073741811;
                WdLogSingleEntry2(3LL, VidPnSourceId, -1073741811LL);
                WdLogGlobalForLineNumber = 4843;
              }
              else
              {
                v48 = 0LL;
                v49 = 0LL;
                v50 = 0LL;
                v51 = 0LL;
                v52 = 0LL;
                LastCompletedPresentIdDWM = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                                              v14,
                                              v9->PresentState.VidPnSourceId,
                                              (struct _D3DKMT_PRESENT_STATS_DWM2 *)&v48);
                *((_QWORD *)&v9->PresentQueueState + 1) = *(_QWORD *)((char *)&v48 + 4);
                v9->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = v49;
                v9->PresentState.PresentStats.SyncQPCTime.LowPart = DWORD2(v49);
                v9->PresentState.PresentStats.SyncGPUTime.QuadPart = v50;
                v9->PresentStateDWM.PresentStatsDWM.CustomPresentDuration = DWORD2(v50);
              }
            }
            else
            {
              LastCompletedPresentIdDWM = -1073741130;
            }
            break;
          case D3DKMT_DEVICESTATE_PAGE_FAULT:
            if ( *((_DWORD *)v14 + 152) == 1 )
            {
              if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL)) )
              {
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 736) + 8LL) + 216LL))(*((_QWORD *)v14 + 100));
              }
              else
              {
                *(_QWORD *)p_ExecutionState = -1LL;
                v9->PresentState.PresentStats.PresentCount = 0;
                v9->PresentState.PresentStats.PresentRefreshCount = -1;
                v9->PresentState.PresentStats.SyncRefreshCount = 0;
                v9->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
              }
            }
            else
            {
              LastCompletedPresentIdDWM = -1073741130;
            }
            break;
          case D3DKMT_DEVICESTATE_PRESENT_QUEUE:
            if ( *((_DWORD *)v14 + 152) == 1 )
            {
              LastCompletedPresentIdDWM = VIDSCH_EXPORT::VidSchWaitForQueuedPresentLimit(
                                            *(VIDSCH_EXPORT **)(*((_QWORD *)v14 + 2) + 736LL),
                                            *((struct _VIDSCH_DEVICE **)v14 + 100),
                                            v9->PresentState.VidPnSourceId,
                                            0);
              v9->PresentQueueState.bQueuedPresentLimitReached = 0;
              if ( LastCompletedPresentIdDWM == -1071775486 )
              {
                LastCompletedPresentIdDWM = 0;
                v9->PresentQueueState.bQueuedPresentLimitReached = 1;
              }
            }
            else
            {
              LastCompletedPresentIdDWM = -1073741130;
            }
            break;
          default:
            LastCompletedPresentIdDWM = -1073741811;
            break;
        }
LABEL_66:
        if ( !bTracingEnabled )
          goto LABEL_77;
        if ( v9->StateType == D3DKMT_DEVICESTATE_EXECUTION )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&DeviceStateEvent);
          goto LABEL_77;
        }
        if ( v9->StateType == D3DKMT_DEVICESTATE_PRESENT )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          {
LABEL_77:
            if ( LastCompletedPresentIdDWM >= 0 && a2 )
              RtlCopyToUser(v45, v9, 0x38uLL);
            _InterlockedDecrement((volatile signed __int32 *)v20 + 38);
            ExReleasePushLockSharedEx((char *)v20 + 136, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference(v20);
            v34 = (ADAPTER_RENDER **)v44;
            if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(v34[2], (struct DXGDEVICE *)v34);
            goto LABEL_83;
          }
          v37 = 0;
          SyncGPUTime = v9->PresentState.PresentStats.SyncGPUTime;
          SyncQPCTime = v9->PresentState.PresentStats.SyncQPCTime;
          SyncRefreshCount = v9->PresentState.PresentStats.SyncRefreshCount;
        }
        else
        {
          if ( v9->StateType != D3DKMT_DEVICESTATE_PRESENT_DWM || (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_77;
          v37 = 1;
          SyncGPUTime.QuadPart = 0LL;
          SyncQPCTime = v9->PresentState.PresentStats.SyncGPUTime;
          SyncRefreshCount = v9->PresentState.PresentStats.SyncQPCTime.LowPart;
        }
        McTemplateK0pqqqqxxt_EtwWriteTransfer(
          (unsigned int)(v9->StateType - 2),
          (__int64)p_ExecutionState,
          v19,
          v14,
          v9->PresentState.VidPnSourceId,
          v9->PresentState.PresentStats.PresentCount,
          v9->PresentState.PresentStats.PresentRefreshCount,
          SyncRefreshCount,
          SyncQPCTime.QuadPart,
          SyncGPUTime.QuadPart,
          v37);
        goto LABEL_77;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 200LL) != 1 )
      {
LABEL_58:
        LastCompletedPresentIdDWM = -1073741130;
        goto LABEL_66;
      }
      v31 = *((_QWORD *)v14 + 237);
      if ( v31 )
      {
        v32 = v9->PresentState.VidPnSourceId;
        if ( v32 >= *(_DWORD *)(*(_QWORD *)(v31 + 3160) + 96LL) )
        {
          LastCompletedPresentIdDWM = -1073741811;
          WdLogSingleEntry2(3LL, v32, -1073741811LL);
          WdLogGlobalForLineNumber = 4818;
          goto LABEL_66;
        }
      }
      DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                      v14,
                      v9->PresentState.VidPnSourceId,
                      &v9->PresentState.PresentStats);
    }
LABEL_65:
    LastCompletedPresentIdDWM = DeviceState;
    goto LABEL_66;
  }
  LODWORD(v39) = 0;
  v10 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 224LL))();
  v11 = 0;
  if ( !v10 )
  {
    v11 = 1;
    LODWORD(v39) = 1;
  }
  RtlWriteULongToUser(&Src->PresentState.VidPnSourceId, v11);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return 0LL;
}
