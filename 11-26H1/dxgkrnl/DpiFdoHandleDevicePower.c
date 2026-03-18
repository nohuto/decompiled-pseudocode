/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1403B9A00
 * Callers:
 *     DpiFdoDispatchPower @ 0x1403B99C0 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x140032F68 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     DxgkReportDeviceDirectedPowerDown @ 0x1400710F0 (DxgkReportDeviceDirectedPowerDown.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x14018F4AC (DpiLdaPowerUpAdapterInChain.c)
 *     DxgkCompletePnPTransition @ 0x140204E64 (DxgkCompletePnPTransition.c)
 *     DxgkStartPnPTransition @ 0x14020531C (DxgkStartPnPTransition.c)
 *     DpiFdoIsDevicePresent @ 0x140244F54 (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x140245C18 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiFdoDetermineAffectedSession @ 0x14024B7A0 (DpiFdoDetermineAffectedSession.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1402558EC (DpiDxgkDdiNotifySurpriseRemoval.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x14030D094 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DpiRequestIoPowerState @ 0x1403BE7FC (DpiRequestIoPowerState.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiFdoStopMiracastSession @ 0x1403FB020 (DpiFdoStopMiracastSession.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x140402768 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x14042D348 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 */

NTSTATUS __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  int *DeviceExtension; // rdi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  int Status; // r15d
  LARGE_INTEGER *p_ByteOffset; // rdx
  CCHAR v10; // dl
  int LowPart; // ebx
  __int64 v12; // rdx
  int v13; // eax
  struct _IO_STACK_LOCATION *v14; // rax
  struct _IO_STACK_LOCATION *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int IsDevicePresent; // eax
  int v19; // edx
  char v20; // al
  bool IsPostDevice; // al
  __int64 v22; // rdx
  __int64 v23; // r8
  bool v24; // al
  char v25; // dl
  struct _DEVICE_OBJECT *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  int v29; // r8d
  struct _DEVICE_OBJECT *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r9
  bool v36; // al
  POWER_STATE v37; // ebx
  int v38; // eax
  void *v39; // [rsp+30h] [rbp-30h]
  char *started; // [rsp+30h] [rbp-30h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v41[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-18h] BYREF
  bool v43; // [rsp+A0h] [rbp+40h]
  __int64 v44; // [rsp+A8h] [rbp+48h] BYREF
  int v45; // [rsp+B0h] [rbp+50h] BYREF
  struct _GUID *v46; // [rsp+B8h] [rbp+58h]

  DeviceExtension = (int *)DeviceObject->DeviceExtension;
  p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v43 = 0;
  Status = 0;
  if ( *((_BYTE *)DeviceExtension + 1158) )
  {
    if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
    {
      ++Irp->CurrentLocation;
      p_CurrentStackLocation->CurrentStackLocation = CurrentStackLocation + 1;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    }
    p_ByteOffset = &CurrentStackLocation->Parameters.Read.ByteOffset;
    DeviceExtension[70] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  }
  else
  {
    p_ByteOffset = &CurrentStackLocation->Parameters.Read.ByteOffset;
  }
  if ( CurrentStackLocation->MinorFunction == 2 )
  {
    LowPart = p_ByteOffset->LowPart;
    v43 = (signed int)p_ByteOffset->LowPart > 1;
    WdLogSingleEntry3(9LL, DeviceObject->DeviceExtension, (int)p_ByteOffset->LowPart, DeviceExtension[71]);
    WdLogGlobalForLineNumber = 399;
    if ( LowPart > 1 && !DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
    {
      v44 = -300000000LL;
      LOBYTE(v12) = 1;
      DpiFdoStopMiracastSession(DeviceObject, v12, &v44, 131LL);
    }
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 484) )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4232LL));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( LowPart <= DeviceExtension[71]
      || (!DeviceExtension[126]
        ? (v13 = DpiFdoSetAdapterPowerState(
                   DeviceObject,
                   (POWER_STATE)LowPart,
                   CurrentStackLocation->Parameters.Create.EaLength))
        : (v13 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp)),
          Status = v13,
          v13 >= 0) )
    {
      if ( LowPart <= 1 )
        KeSetEvent((PRKEVENT)(DeviceExtension + 310), 0, 0);
      else
        *((_BYTE *)DeviceExtension + 496) = 1;
    }
    if ( *((_BYTE *)DeviceExtension + 484) )
      DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
    p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
    if ( Status != -1073741637 )
      goto LABEL_8;
  }
  else if ( CurrentStackLocation->MinorFunction == 3 )
  {
LABEL_8:
    if ( Status >= 0 )
    {
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v14 = p_CurrentStackLocation->CurrentStackLocation;
      *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&p_CurrentStackLocation->CurrentStackLocation->MajorFunction;
      *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v14->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v14[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v14->Parameters.SetQuota + 6);
      v14[-1].FileObject = v14->FileObject;
      v14[-1].Control = 0;
      v15 = p_CurrentStackLocation->CurrentStackLocation;
      v15[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
      v15[-1].Context = &Event;
      v15[-1].Control = -32;
      PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      v16 = 0LL;
      Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( Status )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 542;
      }
      else
      {
        Status = Irp->IoStatus.Status;
        if ( Status == -1073741810 )
        {
          LOBYTE(v41[0]) = 0;
          CDisplayScenarioContextScope::ContextScopeConstructor(v41, 0LL, 0x51u, 0);
          v46 = (struct _GUID *)v41[1];
          LOBYTE(v44) = 0;
          WdLogSingleEntry4(
            2LL,
            DpiFdoHandleDevicePower,
            DeviceObject,
            (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
            -1073741810LL);
          WdLogGlobalForLineNumber = 559;
          if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
          {
            v16 = (__int64)DeviceExtension;
          }
          else
          {
            v17 = *((_QWORD *)DeviceExtension + 354);
            if ( v17 )
              v16 = *(_QWORD *)(v17 + 64);
          }
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 484) )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL)
                                                            + 4232LL));
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          LOBYTE(v45) = 0;
          IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, (char *)&v45);
          v19 = (unsigned __int8)v45;
          if ( IsDevicePresent < 0 )
            v19 = 0;
          v45 = v19;
          if ( !(_BYTE)v19 )
            *((_BYTE *)DeviceExtension + 1160) = 1;
          if ( DeviceExtension[59] == 6 )
          {
            if ( !v43 && *((_QWORD *)DeviceExtension + 61) )
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v16, 0, 1);
          }
          else if ( v16 )
          {
            if ( !(_BYTE)v19 || (*(_BYTE *)(v16 + 4040) & 0x18) != 0 )
            {
              v39 = (void *)*((_QWORD *)DeviceExtension + 5);
              if ( DeviceExtension )
              {
                if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
                {
                  if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
                  {
                    v20 = *(_BYTE *)(v16 + 4040);
                    if ( (v20 & 0x10) == 0 && ((v20 & 8) == 0 || *(int *)(v16 + 4048) < 0x2000) )
                    {
                      IsPostDevice = DpiFdoIsPostDevice((__int64)DeviceObject);
                      WdLogSingleEntry5(0LL, 275LL, 25LL, 2LL - IsPostDevice, v23, v22);
                      WdLogGlobalForLineNumber = 651;
                    }
                  }
                }
              }
              if ( (int)DpiDxgkDdiNotifySurpriseRemoval((__int64)v39, *((_QWORD *)DeviceExtension + 6), v16, 0) >= 0
                || (*(_BYTE *)(v16 + 4040) & 0x10) != 0 )
              {
                LOBYTE(v44) = 1;
              }
              v24 = DpiFdoIsPostDevice((__int64)DeviceObject);
              if ( v24 || !v25 )
                DpiFdoRebootForSurpriseRemoval(v26, v24 ? 1 : 3);
            }
            else
            {
              LOBYTE(v44) = 1;
            }
            v27 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
            started = DxgkStartPnPTransition(v46, 0LL, v27, 0LL);
            if ( !started )
            {
              WdLogSingleEntry1(6LL);
              WdLogGlobalForLineNumber = 709;
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 3928), 1u);
            if ( !(_BYTE)v44 )
              *((_BYTE *)DeviceExtension + 1161) = 1;
            DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
            v28 = DeviceExtension[59];
            ++DeviceExtension[69];
            DeviceExtension[60] = v28;
            DeviceExtension[59] = 6;
            ExReleaseResourceLite((PERESOURCE)(v16 + 3928));
            KeLeaveCriticalRegion();
            if ( !v43 && *((_QWORD *)DeviceExtension + 61) )
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v16, 0, 1);
            DpiRequestIoPowerState(*(_QWORD *)(v16 + 24), 4, v29, 0, (__int64)v46);
            DxgkCompletePnPTransition((struct _PNP_TRANS_TOKEN *)started);
            if ( (int *)v16 != DeviceExtension )
            {
              v30 = *(struct _DEVICE_OBJECT **)(v16 + 152);
              *(_BYTE *)(v16 + 232) = 1;
              IoInvalidateDeviceState(v30);
              DxgCreateLiveDumpWithWdLogs(403LL, 2051LL);
            }
          }
          else
          {
            v31 = DeviceExtension[60];
            v32 = DeviceExtension[69] & 7;
            *((_BYTE *)DeviceExtension + 1161) = 1;
            DeviceExtension[v32 + 61] = v31;
            v33 = DeviceExtension[59];
            ++DeviceExtension[69];
            DeviceExtension[60] = v33;
            DeviceExtension[59] = 6;
          }
          if ( DpiFdoIsPostDevice((__int64)DeviceObject) )
          {
            if ( (_BYTE)v34 )
            {
              if ( byte_1401691F0 != (_BYTE)v35 )
              {
                LOBYTE(v34) = 1;
                DpiAcquirePostDisplayInfoFromBgfx(&xmmword_140169088, v34);
                LOBYTE(v35) = 0;
                dword_14016921C = 1;
                byte_1401691F0 = 0;
              }
            }
            else
            {
              qword_140169080 = v35;
            }
          }
          if ( *((_BYTE *)DeviceExtension + 484) != (_BYTE)v35 )
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
          CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v41);
        }
        else if ( Status < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 831;
        }
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 484) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4232LL));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( Status >= 0 )
      {
        if ( CurrentStackLocation->MinorFunction == 2 )
        {
          v37.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
          if ( !v43 )
            *((_BYTE *)DeviceExtension + 496) = 0;
          if ( v37.SystemState < DeviceExtension[71] )
          {
            if ( DeviceExtension[126] )
              v38 = DpiLdaPowerUpAdapterInChain((__int64)DeviceObject, (__int64)Irp);
            else
              v38 = DpiFdoSetAdapterPowerState(DeviceObject, v37, CurrentStackLocation->Parameters.Create.EaLength);
            Status = v38;
          }
          if ( *((_BYTE *)DeviceExtension + 482) )
          {
            if ( !DeviceExtension[126] && v37.SystemState == PowerSystemWorking )
              DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
            if ( *((_BYTE *)DeviceExtension + 482)
              && v37.SystemState == PowerSystemSleeping3
              && *((_BYTE *)DeviceExtension + 4296) )
            {
              *((_BYTE *)DeviceExtension + 4296) = 0;
              DxgkReportDeviceDirectedPowerDown(*((_QWORD *)DeviceExtension + 504));
            }
          }
        }
        v36 = v43;
      }
      else
      {
        v36 = v43;
        if ( v43 )
          *((_BYTE *)DeviceExtension + 496) = 0;
      }
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        if ( v36 )
        {
          KeClearEvent((PRKEVENT)(DeviceExtension + 310));
          KeClearEvent((PRKEVENT)(DeviceExtension + 316));
        }
        else
        {
          KeSetEvent((PRKEVENT)(DeviceExtension + 316), 0, 0);
        }
      }
      if ( *((_BYTE *)DeviceExtension + 484) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      PoStartNextPowerIrp(Irp);
      v10 = 1;
    }
    else
    {
      PoStartNextPowerIrp(Irp);
      v10 = 0;
      Irp->IoStatus.Status = Status;
    }
    IofCompleteRequest(Irp, v10);
    return Status;
  }
  ++Irp->CurrentLocation;
  ++p_CurrentStackLocation->CurrentStackLocation;
  return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
}
