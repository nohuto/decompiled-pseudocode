/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1403BA2FC
 * Callers:
 *     DpiFdoDispatchPower @ 0x1403B99C0 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x140058344 (DpiCorrectPowerAction.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiDxgkDdiSaveMemoryForHotUpdate @ 0x140252178 (DpiDxgkDdiSaveMemoryForHotUpdate.c)
 *     DpiKsrSetBootGraphicsInformation @ 0x1402529D8 (DpiKsrSetBootGraphicsInformation.c)
 *     DpiKsrStopAdapter @ 0x140252AB0 (DpiKsrStopAdapter.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031B740 (DpiFdoInvalidateChildRelations.c)
 *     DpiDxgkDdiSetPowerState @ 0x1403BABA4 (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1403FB020 (DpiFdoStopMiracastSession.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x140402768 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, IRP *Tag)
{
  char *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  bool v4; // al
  IRP *v6; // r15
  int v7; // ebx
  struct _IO_REMOVE_LOCK *v8; // rbx
  struct _IO_STACK_LOCATION *v9; // rax
  struct _IO_STACK_LOCATION *v10; // rax
  NTSTATUS Status; // r14d
  IO_STATUS_BLOCK *p_IoStatus; // rdi
  unsigned int LowPart; // eax
  __int64 v14; // rdx
  POWER_STATE v15; // ebx
  DWORD EaLength; // ecx
  bool v17; // di
  __int64 v18; // rcx
  NTSTATUS v20; // eax
  struct _IO_WORKITEM *WorkItem; // rcx
  bool v22; // cl
  __int64 v23; // r8
  int v24; // ebx
  char v25; // [rsp+30h] [rbp-50h]
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-48h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v27; // [rsp+40h] [rbp-40h] BYREF
  PIO_REMOVE_LOCK RemoveLock; // [rsp+48h] [rbp-38h]
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-18h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Tag->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v25 = 0;
  memset(&Event, 0, sizeof(Event));
  v6 = Tag;
  v7 = 0;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
      {
        Timeout.QuadPart = -300000000LL;
        LOBYTE(Tag) = 1;
        DpiFdoStopMiracastSession(DeviceObject, Tag, &Timeout, 131LL);
      }
    }
    else
    {
      v7 = -1073741637;
    }
    goto LABEL_4;
  }
  v22 = 0;
  v23 = 0LL;
  if ( DeviceExtension && *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v23 = (__int64)DeviceExtension;
    v4 = (*((_DWORD *)DeviceExtension + 1398) & 2) != 0;
    v22 = DeviceExtension[5144] != 0;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 6 || !HIBYTE(word_140169378) )
    goto LABEL_4;
  if ( v22 )
  {
    if ( !byte_140169390 )
      goto LABEL_4;
    if ( !v4 )
      goto LABEL_4;
    Timeout.LowPart = 0;
    v7 = DpiDxgkDdiSaveMemoryForHotUpdate(v23, (__int64)&Timeout);
    if ( v7 >= 0 )
      goto LABEL_4;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1174;
  }
  else
  {
    v24 = DpiKsrStopAdapter(DeviceObject, Tag);
    if ( v24 != -1073741637 )
    {
      if ( DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject) && (unsigned int)(dword_1401691D0 - 1) <= 1 )
        DpiKsrSetBootGraphicsInformation();
      return v24;
    }
  }
  v7 = 0;
LABEL_4:
  if ( v7 != -1073741637 )
  {
    v8 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
    RemoveLock = (PIO_REMOVE_LOCK)(DeviceExtension + 64);
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, v6, File, 1u, 0x20u);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v9 = v6->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v9[-1].MajorFunction = *(_OWORD *)&v9->MajorFunction;
    *(_OWORD *)&v9[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v9->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v9[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v9->Parameters.SetQuota + 6);
    v9[-1].FileObject = v9->FileObject;
    v9[-1].Control = 0;
    v10 = v6->Tail.Overlay.CurrentStackLocation;
    v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
    v10[-1].Context = &Event;
    v10[-1].Control = -32;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v6);
    Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( Status )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1246;
      p_IoStatus = &v6->IoStatus;
    }
    else
    {
      p_IoStatus = &v6->IoStatus;
      Status = v6->IoStatus.Status;
      if ( Status < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1274;
        goto LABEL_69;
      }
      if ( CurrentStackLocation->MinorFunction == 2
        && DeviceExtension[1158]
        && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1
        && *((_DWORD *)DeviceExtension + 71) != 1 )
      {
        Timeout.QuadPart = -150000000LL;
        v20 = KeWaitForSingleObject(DeviceExtension + 1240, Executive, 0, 0, &Timeout);
        if ( v20 == 258 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1311;
        }
        else if ( v20 >= 0 )
        {
          if ( KeWaitForSingleObject(DeviceExtension + 1264, Executive, 0, 0, 0LL) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1337;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1318;
        }
      }
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( LowPart >= 2 )
          *((_DWORD *)DeviceExtension + 70) = LowPart;
      }
      v14 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v15.SystemState = *(SYSTEM_POWER_STATE *)&DeviceExtension[4 * v14 + 1336];
      if ( !DeviceExtension[1158] )
      {
        if ( DeviceExtension[480] )
        {
          Status = 0;
          if ( DeviceExtension
            && *((_DWORD *)DeviceExtension + 4) == 1953656900
            && *((_DWORD *)DeviceExtension + 5) == 2
            && *((_DWORD *)DeviceExtension + 59) == 2
            && CurrentStackLocation->MinorFunction == 2 )
          {
            EaLength = CurrentStackLocation->Parameters.Create.EaLength;
            Timeout.LowPart = EaLength;
            v17 = (unsigned int)(dword_1401691D0 - 4) <= 1;
            if ( v15.SystemState == PowerSystemWorking )
              Timeout.LowPart = DpiCorrectPowerAction((__int64)DeviceObject, v14, EaLength);
            if ( DeviceExtension[1153] && v15.SystemState < *((_DWORD *)DeviceExtension + 71) )
            {
              if ( qword_140169080 )
              {
                if ( v17 )
                {
                  WorkItem = IoAllocateWorkItem(g_pDriverObject);
                  if ( WorkItem )
                  {
                    _InterlockedCompareExchange(&dword_1401691D0, 5, 4);
                    IoQueueWorkItemEx(
                      WorkItem,
                      (PIO_WORKITEM_ROUTINE_EX)DpiDisableMsBddFallbackDriverWorkItem,
                      DelayedWorkQueue,
                      0LL);
                  }
                  else
                  {
                    WdLogSingleEntry1(6LL);
                    WdLogGlobalForLineNumber = 1440;
                  }
                }
              }
              else if ( byte_1401691F0 )
              {
                LOBYTE(v14) = 1;
                DpiAcquirePostDisplayInfoFromBgfx(&xmmword_140169088, v14);
                if ( v17 )
                {
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
                  byte_1401691F0 = 0;
                  dword_14016921C = 1;
                  qword_1401691D8 = (__int64)KeGetCurrentThread();
                  qword_1401691E0 = (__int64)DeviceObject;
                }
              }
            }
            ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              -1,
              (POWER_STATE)v15.SystemState,
              Timeout.LowPart);
            if ( DeviceExtension[1153] && v17 )
            {
              if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
              {
                byte_1401691F0 = 1;
                LOBYTE(v18) = 1;
                InbvNotifyDisplayOwnershipChange(v18, DpiEnterSystemDisplay);
              }
              else if ( v15.SystemState < *((_DWORD *)DeviceExtension + 71) )
              {
                xmmword_140169140 = 0LL;
                DWORD2(xmmword_140169140) = -1;
                xmmword_140169130 = 0LL;
                memset(&xmmword_140169150, 0, 0x80uLL);
                qword_1401691E0 = 0LL;
                qword_1401691D8 = (__int64)KeGetCurrentThread();
              }
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3928), 1u);
            *((POWER_STATE *)DeviceExtension + 71) = v15;
            ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3928));
            KeLeaveCriticalRegion();
            if ( v15.SystemState == PowerSystemWorking )
            {
              LOBYTE(Timeout.LowPart) = 0;
              ActivityId = 0LL;
              EtwActivityIdControl(3u, &ActivityId);
              DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0xBu, 0, &v27, (unsigned __int8 *)&Timeout);
              DpiFdoInvalidateChildRelations((__int64)DeviceObject, 6u, (__int128 *)v27);
              if ( LOBYTE(Timeout.LowPart) )
                DisplayScenarioContextDissociate(&v27);
            }
            p_IoStatus = &v6->IoStatus;
          }
          *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        }
        else
        {
          v25 = 1;
          v6->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          Status = PoRequestPowerIrp(
                     DeviceObject,
                     CurrentStackLocation->MinorFunction,
                     v15,
                     (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                     v6,
                     0LL);
          if ( Status != 259 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1599;
          }
        }
      }
      if ( DeviceExtension[484] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v8 = RemoveLock;
    }
    if ( Status == 259 )
      return Status;
LABEL_69:
    PoStartNextPowerIrp(v6);
    p_IoStatus->Status = Status;
    IofCompleteRequest(v6, 0);
    IoReleaseRemoveLockEx(v8, v6, 0x20u);
    if ( v25 )
      return 259;
    return Status;
  }
  ++v6->CurrentLocation;
  ++v6->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v6);
}
