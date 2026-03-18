/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x14042D4FC
 * Callers:
 *     DpiLdaPowerUpAdapterInChain @ 0x14018F4AC (DpiLdaPowerUpAdapterInChain.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9A00 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x14042D348 (DpiLdaPowerDownAllAdaptersInChain.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkReportAdapterPowerRapidHpdTriggerEvent @ 0x140046F8C (DxgkReportAdapterPowerRapidHpdTriggerEvent.c)
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     DpiCorrectPowerAction @ 0x140058344 (DpiCorrectPowerAction.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x14006D134 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x14008CDC4 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?UpdateMuxPosition@DISPLAY_MUX_MGR@@QEAAXXZ @ 0x14008FFF4 (-UpdateMuxPosition@DISPLAY_MUX_MGR@@QEAAXXZ.c)
 *     DpiDxgkDdiDisplayMuxUpdateState @ 0x140094380 (DpiDxgkDdiDisplayMuxUpdateState.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x140245C18 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiFdoArmWaitWake @ 0x140255350 (DpiFdoArmWaitWake.c)
 *     DpiFdoDisarmWaitWake @ 0x1402554F4 (DpiFdoDisarmWaitWake.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x14030D094 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiDxgkDdiSetPowerState @ 0x1403BABA4 (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1403BE7FC (DpiRequestIoPowerState.c)
 *     DpiFdoDetectPostDevice @ 0x1404023B8 (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x140402768 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(
        PDEVICE_OBJECT DeviceObject,
        POWER_STATE State,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  char *DeviceExtension; // rdi
  __int64 v9; // r8
  int v10; // r13d
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  unsigned int v15; // eax
  bool v16; // zf
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  int IsTargetPartOfMux; // ebx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _IO_WORKITEM *WorkItem; // rax
  unsigned __int8 v29[4]; // [rsp+30h] [rbp-41h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-3Dh]
  unsigned int v31; // [rsp+38h] [rbp-39h]
  PDEVICE_OBJECT v32; // [rsp+40h] [rbp-31h]
  int v33; // [rsp+48h] [rbp-29h] BYREF
  __int64 v34; // [rsp+50h] [rbp-21h]
  char v35; // [rsp+58h] [rbp-19h]
  _OWORD v36[2]; // [rsp+60h] [rbp-11h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v31 = a3;
  v30 = 0;
  if ( State.SystemState > *((_DWORD *)DeviceExtension + 71) )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    if ( !byte_140168DDA
      && *((_DWORD *)DeviceExtension + 59) == 2
      && DeviceExtension[2726]
      && (int)DpiFdoArmWaitWake(DeviceObject) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12833;
    }
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3928), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3928));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( DeviceExtension[4296] )
        {
          v10 = 128;
        }
        else if ( a5 == 2 )
        {
          v10 = 8;
        }
        else if ( a5 == 3 )
        {
          v10 = 16;
        }
        else
        {
          v11 = 0;
          if ( a5 - 4 <= 2 )
            v11 = 32;
          v10 = v11;
        }
        DpiRequestIoPowerState((__int64)DeviceObject, 1, v9, v10, 0LL);
        v12 = DpiDxgkDdiSetPowerState(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                0xFFFFFFFFLL,
                State.SystemState,
                a5);
        ++*((_DWORD *)DeviceExtension + 1109);
        v13 = v12;
      }
      else
      {
        v13 = v30;
      }
      if ( v31 == 5 && DpiFdoIsPostDevice((__int64)DeviceObject) )
      {
        byte_1401691F0 = 1;
        LOBYTE(v14) = 1;
        InbvNotifyDisplayOwnershipChange(v14, DpiEnterSystemDisplay);
      }
      return v13;
    }
    *((POWER_STATE *)DeviceExtension + 71) = State;
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      return (unsigned int)DpiDxgkDdiSetPowerState(
                             *((_QWORD *)DeviceExtension + 5),
                             *((_QWORD *)DeviceExtension + 6),
                             0xFFFFFFFFLL,
                             State.SystemState,
                             a5);
    return v30;
  }
  if ( State.SystemState >= *((_DWORD *)DeviceExtension + 71) )
    return v30;
  v15 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
  v16 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v31 = v15;
  if ( v16 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v17 = *((_DWORD *)DeviceExtension + 59);
    v32 = 0LL;
    if ( (v17 == 2 || *((_DWORD *)DeviceExtension + 60) == 2 && ((v17 - 3) & 0xFFFFFFFC) == 0 && v17 != 4)
      && *((_DWORD *)DeviceExtension + 951) )
    {
      DxgkReportAdapterPowerRapidHpdTriggerEvent((_QWORD *)DeviceExtension + 337);
    }
    if ( DpiFdoIsPostDevice((__int64)DeviceObject) )
    {
      if ( byte_1401691F0 )
      {
        DpiAcquirePostDisplayInfoFromBgfx((__int64)&xmmword_140169088, 1, 0);
        byte_1401691F0 = 0;
        dword_14016921C = 1;
        if ( DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject) )
        {
          v18 = (__int64)&DpGlobals + 880;
          *((_OWORD *)&DpGlobals + 55) = *(_OWORD *)((char *)&DpGlobals + 712);
          *((_OWORD *)&DpGlobals + 56) = *(_OWORD *)((char *)&DpGlobals + 728);
          *((_OWORD *)&DpGlobals + 57) = *(_OWORD *)((char *)&DpGlobals + 744);
          *((_OWORD *)&DpGlobals + 58) = *(_OWORD *)((char *)&DpGlobals + 760);
          *((_OWORD *)&DpGlobals + 59) = *(_OWORD *)((char *)&DpGlobals + 776);
          *((_OWORD *)&DpGlobals + 60) = *(_OWORD *)((char *)&DpGlobals + 792);
          *((_OWORD *)&DpGlobals + 61) = *(_OWORD *)((char *)&DpGlobals + 808);
          *((_OWORD *)&DpGlobals + 62) = *(_OWORD *)((char *)&DpGlobals + 824);
          *((_OWORD *)&DpGlobals + 63) = *(_OWORD *)((char *)&DpGlobals + 840);
          *((_OWORD *)&DpGlobals + 64) = *(_OWORD *)((char *)&DpGlobals + 856);
        }
        v32 = DeviceObject;
      }
      if ( a4 == 5 )
      {
        if ( !byte_1401691E9 )
        {
          v19 = *((_QWORD *)DeviceExtension + 3);
          v29[0] = 0;
          if ( (int)DpiFdoDetectPostDevice(v19, v29) >= 0 )
          {
            v18 = !DpiFdoIsPostDevice((__int64)DeviceObject);
            if ( v20 != (_DWORD)v18 )
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0);
          }
        }
        v21 = *((_QWORD *)DeviceExtension + 504);
        if ( (!v21 || *(int *)(v21 + 3044) <= 1105) && byte_140168DD6 )
        {
          v33 = -1;
          v34 = 0LL;
          if ( (qword_1401664C0 & 2) != 0 )
          {
            v35 = 1;
            v33 = 8007;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerEnter);
          }
          else
          {
            v35 = 0;
          }
          DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 8007);
          memset(v36, 0, sizeof(v36));
          LODWORD(v36[0]) = 18;
          x86BiosCall(16LL, v36);
          xmmword_140169098 = 0LL;
          DWORD2(xmmword_140169098) = -1;
          xmmword_140169088 = 0LL;
          memset(&unk_1401690A8, 0, 0x80uLL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
          if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
        }
      }
    }
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      if ( DpiFdoIsPostDevice(*((_QWORD *)DeviceExtension + 3)) )
      {
        qword_1401691D8 = (__int64)KeGetCurrentThread();
        qword_1401691E0 = (__int64)v32;
      }
      if ( *((_DWORD *)DeviceExtension + 1508) == 1 && DeviceExtension[6393] )
      {
        v29[0] = 0;
        if ( a4 == 5 )
          DISPLAY_MUX_MGR::UpdateMuxPosition((DISPLAY_MUX_PAIRING **)qword_140169448);
        IsTargetPartOfMux = DISPLAY_MUX_MGR::IsTargetPartOfMux(
                              qword_140169448,
                              *(struct _LUID *)(DeviceExtension + 6036),
                              *((_DWORD *)DeviceExtension + 1594),
                              v29,
                              0LL);
        if ( IsTargetPartOfMux < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 13095;
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(
            v25,
            IsTargetPartOfMux,
            0,
            (__int64)"Failed to query if DisplayMux is switched to adapter when powering on adapter");
        }
        else
        {
          if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
          {
            WdLogSingleEntry2(4LL, *((unsigned int *)DeviceExtension + 1509), v29[0]);
            WdLogGlobalForLineNumber = 13086;
          }
          LOBYTE(v24) = v29[0];
          DpiDxgkDdiDisplayMuxUpdateState((__int64)DeviceExtension, *((_DWORD *)DeviceExtension + 1594), v24);
        }
      }
      DpiDxgkDdiSetPowerState(
        *((_QWORD *)DeviceExtension + 5),
        *((_QWORD *)DeviceExtension + 6),
        0xFFFFFFFFLL,
        State.SystemState,
        v31);
      ++*((_DWORD *)DeviceExtension + 1109);
      if ( (struct _KTHREAD *)qword_1401691D8 == KeGetCurrentThread() )
      {
        qword_1401691E0 = 0LL;
        qword_1401691D8 = 0LL;
      }
      if ( DpiFdoIsPostDevice((__int64)DeviceObject) && (PDEVICE_OBJECT)qword_140169078 != DeviceObject )
      {
        xmmword_140169098 = 0LL;
        DWORD2(xmmword_140169098) = -1;
        xmmword_140169088 = 0LL;
        memset(&unk_1401690A8, 0, 0x80uLL);
      }
      v13 = DpiRequestIoPowerState((__int64)DeviceObject, 2, v26, 0, 0LL);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3928), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3928));
      KeLeaveCriticalRegion();
      if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
      {
        if ( byte_140168DDA )
        {
          DeviceExtension[3649] = 1;
        }
        else
        {
          WorkItem = IoAllocateWorkItem(DeviceObject);
          if ( WorkItem )
          {
            IoQueueWorkItemEx(WorkItem, (PIO_WORKITEM_ROUTINE_EX)DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, 0LL);
          }
          else
          {
            WdLogSingleEntry1(6LL);
            WdLogGlobalForLineNumber = 13255;
          }
        }
      }
      else
      {
        DeviceExtension[3649] = 1;
        _InterlockedAnd((volatile signed __int32 *)DeviceExtension + 945, 0xFFFFFFFE);
        IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)DeviceExtension + 19), BusRelations);
      }
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3928), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3928));
      KeLeaveCriticalRegion();
      v13 = v30;
    }
  }
  else
  {
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      v13 = DpiDxgkDdiSetPowerState(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              0xFFFFFFFFLL,
              State.SystemState,
              v15);
    else
      v13 = v30;
    *((POWER_STATE *)DeviceExtension + 71) = State;
  }
  if ( (*((_DWORD *)DeviceExtension + 688) & 1) == 0 )
    DpiFdoDisarmWaitWake((__int64)DeviceObject);
  PoSetPowerState(DeviceObject, DevicePowerState, State);
  return v13;
}
