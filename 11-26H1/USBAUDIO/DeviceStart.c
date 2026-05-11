/*
 * XREFs of DeviceStart @ 0x14002E790
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005060 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x14000852C (McTemplateK0zq_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008644 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DeInitSideband @ 0x14000B4B4 (DeInitSideband.c)
 *     Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8 (Feature_MIDI2__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14000C12C (McTemplateK0_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x14000C530 (WPP_RECORDER_AND_TRACE_SF_l.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqddddd @ 0x14000CA18 (WPP_RECORDER_AND_TRACE_SF_qqddddd.c)
 *     InitializeSideband @ 0x14000EDBC (InitializeSideband.c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     IsSidebandSupported @ 0x14002F650 (IsSidebandSupported.c)
 *     FilterCreateFilterContext @ 0x140030498 (FilterCreateFilterContext.c)
 *     FilterCreateFilterFactory @ 0x1400305B0 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x140034014 (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x140034CB8 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(struct _KSDEVICE *a1, __int64 a2, __int64 a3)
{
  char *Context; // rsi
  int FilterContext; // edi
  PDEVICE_OBJECT v6; // rcx
  void *v7; // r9
  int v8; // ebx
  PDEVICE_OBJECT v9; // rcx
  PDEVICE_OBJECT PhysicalDeviceObject; // rcx
  ULONG v11; // r8d
  ULONG *v12; // rdx
  char v13; // dl
  int v14; // edx
  PDEVICE_OBJECT v15; // rcx
  int v16; // r8d
  int v18; // edx
  struct _IO_WORKITEM *WorkItem; // rbx
  int v20; // r8d
  struct _KEVENT *Pool2; // rax
  int v22; // edx
  int v23; // r8d
  int Handle; // [rsp+28h] [rbp-39h]
  int v25; // [rsp+30h] [rbp-31h]
  int v26; // [rsp+38h] [rbp-29h]
  void *v27; // [rsp+40h] [rbp-21h]
  int v28; // [rsp+88h] [rbp+27h] BYREF
  int v29; // [rsp+8Ch] [rbp+2Bh] BYREF
  ULONG v30; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v31[4]; // [rsp+94h] [rbp+33h] BYREF
  int v32; // [rsp+C8h] [rbp+67h] BYREF

  Context = (char *)a1->Context;
  FilterContext = 0;
  v32 = 0;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v7 = &WPP_9385499e5bb03f2485fcdf1eb6a96ba7_Traceguids;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v27 = &WPP_9385499e5bb03f2485fcdf1eb6a96ba7_Traceguids;
    LOWORD(v26) = 24;
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)v6, &EXBUS_DEVICE_START_ENTER, a3);
  if ( !a1->Started )
  {
    *((_DWORD *)Context + 134) = 1;
    Context[64] = 0;
    FilterContext = (*(__int64 (__fastcall **)(struct _KSDEVICE *, __int64, __int64, void *))(pExtBusDeviceDispatchTable
                                                                                            + 8))(
                      a1,
                      a2,
                      a3,
                      v7);
    if ( FilterContext < 0 )
      goto LABEL_59;
    FilterContext = FilterCreateFilterContext(a1, Context + 128);
    if ( FilterContext < 0 )
      goto LABEL_59;
    FilterContext = IsSidebandSupported(a1, &v32);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    v8 = v32;
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_l(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
    if ( FilterContext < 0 )
      goto LABEL_59;
    if ( v8 && (FilterContext = InitializeSideband(a1), FilterContext < 0) )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(a2) = 0;
      }
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_59;
    }
    else
    {
      FilterContext = FilterCreateFilterFactory(a1, a2, a3);
      if ( FilterContext < 0 )
        goto LABEL_59;
      PhysicalDeviceObject = a1->PhysicalDeviceObject;
      v32 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      LODWORD(v31[0]) = 0;
      if ( (int)RegistryGetIdleInfo(
                  (int)PhysicalDeviceObject,
                  (int)&v32,
                  (int)&v28,
                  (int)&v29,
                  (ULONG)&v30,
                  (__int64)v31) >= 0 )
      {
        *((_DWORD *)Context + 136) = v32;
        *((_DWORD *)Context + 137) = v28;
        *((_DWORD *)Context + 138) = v29;
        *((_DWORD *)Context + 139) = v30;
        *((_DWORD *)Context + 135) = v31[0];
      }
      if ( *((_DWORD *)Context + 270) )
      {
        v11 = *((_DWORD *)Context + 139);
        v12 = (ULONG *)(Context + 548);
      }
      else
      {
        v11 = *((_DWORD *)Context + 138);
        v12 = (ULONG *)(Context + 544);
      }
      *((_QWORD *)Context + 66) = PoRegisterDeviceForIdleDetection(
                                    a1->PhysicalDeviceObject,
                                    *v12,
                                    v11,
                                    (DEVICE_POWER_STATE)*((_DWORD *)Context + 135));
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v13 = 0;
      }
      if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v13,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          Handle,
          v25,
          v26,
          (int)v27);
      if ( PoRegisterPowerSettingCallback(
             a1->PhysicalDeviceObject,
             &GUID_LOW_POWER_EPOCH,
             (PPOWER_SETTING_CALLBACK)PowerSettingCallback,
             a1,
             (PVOID *)Context + 134) < 0 )
      {
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v14) = 0;
        }
        if ( (_BYTE)v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qd(
            WPP_GLOBAL_Control->AttachedDevice,
            v14,
            v16,
            WPP_GLOBAL_Control->DeviceExtension);
        }
      }
      FilterContext = InitializeIrpThreadAndQueue(v15, Context);
      if ( FilterContext >= 0 )
      {
        if ( !v8 )
          goto LABEL_69;
        WorkItem = IoAllocateWorkItem(a1->FunctionalDeviceObject);
        if ( WorkItem )
        {
          Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1700952133LL);
          *((_QWORD *)Context + 125) = Pool2;
          if ( Pool2 )
          {
            KeInitializeEvent(Pool2, NotificationEvent, 0);
            IoQueueWorkItemEx(WorkItem, SidebandCapableDeferredFilterFactoryCreate, CriticalWorkQueue, a1);
            KeWaitForSingleObject(Context + 968, Executive, 0, 0, 0LL);
            goto LABEL_69;
          }
          IoFreeWorkItem(WorkItem);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v22) = 0;
          }
          if ( (_BYTE)v22 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v22,
              v23,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          FilterContext = -1073741670;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v18) = 0;
          }
          if ( (_BYTE)v18 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v18,
              v20,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          FilterContext = -1073741670;
        }
        goto LABEL_59;
      }
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(a2) = 0;
      }
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_59:
        if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() && *((_QWORD *)Context + 66) )
          *((_QWORD *)Context + 66) = PoRegisterDeviceForIdleDetection(a1->PhysicalDeviceObject, 0, 0, PowerDeviceD3);
        KeWaitForSingleObject(Context + 760, Executive, 0, 0, 0LL);
        DeInitSideband(a1, 0);
        KeReleaseMutex((PRKMUTEX)(Context + 760), 0);
        Context[64] = 1;
        v6 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
        goto LABEL_69;
      }
    }
    WPP_RECORDER_AND_TRACE_SF_qd(v9->AttachedDevice, a2, a3, v9->DeviceExtension);
    goto LABEL_59;
  }
LABEL_69:
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq_EtwWriteTransfer((__int64)v6, a2, a3, *((const wchar_t **)Context + 3), FilterContext);
  return (unsigned int)FilterContext;
}
