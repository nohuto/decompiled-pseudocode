/*
 * XREFs of ACPIFilterIrpRemoveDevice @ 0x14003BD90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C050 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x14003C468 (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1400C8260 (IsPciBusExtension.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 *     AcpiDeletePciBusInterface @ 0x1400D0570 (AcpiDeletePciBusInterface.c)
 */

__int64 __fastcall ACPIFilterIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  $80FF539E975C25118FEC4FDBC5AFB4F5 *v2; // rdi
  unsigned int MinorFunction; // r13d
  __int64 DeviceExtension; // rbx
  char v6; // r15
  char v7; // bp
  __int64 v8; // r14
  bool v9; // r12
  __int64 v10; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax
  NTSTATUS Status; // edi
  __int64 v14; // r8
  const char *v15; // rcx
  const char *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rcx
  unsigned int v20; // ebx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v2 = &a2->Tail.Overlay.64;
  memset(&Event, 0, sizeof(Event));
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInitDeleteChildDeviceList(DeviceExtension);
  v6 = 0;
  if ( *(_QWORD *)(DeviceExtension + 368) )
  {
    v7 = 0;
    if ( *(_DWORD *)(DeviceExtension + 368) == 5 )
    {
LABEL_10:
      v7 = 1;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = 1;
    v2 = &a2->Tail.Overlay.64;
    v7 = 0;
  }
  if ( *(char *)(DeviceExtension + 8) < 0 )
    goto LABEL_10;
  if ( v6 )
    goto LABEL_11;
  v8 = *(_QWORD *)(DeviceExtension + 1008) & 0x8000LL;
  v9 = (*(_QWORD *)(DeviceExtension + 1008) & 0x8000) != 0;
  if ( !(unsigned __int8)IsPciBusExtension(DeviceExtension) )
  {
    if ( !v8 )
      goto LABEL_11;
    v2 = &a2->Tail.Overlay.64;
  }
  LOBYTE(v10) = v9;
  EnableDisableRegions(*(_QWORD *)(DeviceExtension + 760), 0LL, v10);
LABEL_11:
  AcpiDeletePciBusInterface(DeviceExtension);
  ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(_DWORD *)(DeviceExtension + 368) != 5 )
    _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 0x800uLL);
  *(_DWORD *)(DeviceExtension + 368) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v12 = v2->CurrentStackLocation;
  v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v12[-1].Context = &Event;
  v12[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v14 = 0LL;
  v15 = byte_140075A82;
  v16 = byte_140075A82;
  if ( DeviceExtension )
  {
    v17 = *(_QWORD *)(DeviceExtension + 8);
    v14 = DeviceExtension;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v15 = *(const char **)(DeviceExtension + 608);
      if ( (v17 & 0x400000000000LL) != 0 )
        v16 = *(const char **)(DeviceExtension + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v18 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0x17u,
      (__int64)&WPP_ee1b3e6ee15937e5a501f089fd3dd194_Traceguids,
      (char)a2,
      ACPIDispatchPnpTableNames[v18],
      Status,
      v14,
      v15,
      v16);
  }
  if ( Status >= 0 )
  {
    if ( !v7 && !v6 )
    {
      LOBYTE(v16) = 1;
      ACPIInitStopDevice(DeviceExtension, v16);
    }
    ACPIWakeDisconnectWakeInterrupts(DeviceExtension, v16, v14);
    v19 = *(void **)(DeviceExtension + 112);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(DeviceExtension + 112) = 0LL;
    }
    ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  }
  v20 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v20;
}
