/*
 * XREFs of ACPIFilterIrpQueryDeviceRelations @ 0x1400C58A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFilterRemoveNonPresentDevices @ 0x14001C520 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectFilterDevices @ 0x14001D41C (ACPIDetectFilterDevices.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x140046848 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1400C5BD8 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400C69F0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIFilterIrpQueryDeviceRelations(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v6; // rsi
  unsigned __int64 Information; // rax
  unsigned int Length; // ecx
  NTSTATUS RemovalRelations; // eax
  __int64 v10; // rcx
  NTSTATUS Status; // edi
  const char *v12; // r15
  _IO_STACK_LOCATION *v14; // rax
  _IO_STACK_LOCATION *v15; // rcx
  __int64 v16; // rcx
  char *v17; // rax
  const char *v18; // r8
  char v19; // r10
  char *IrpText; // rax
  const char *v21; // r8
  const char *v22; // r10
  char v23; // r11
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  char v25; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v26; // [rsp+D0h] [rbp+50h] BYREF
  int (__fastcall *v27)(_DEVICE_OBJECT *, _IRP *, void *); // [rsp+D8h] [rbp+58h] BYREF

  v27 = 0LL;
  v25 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( a2->IoStatus.Status >= 0 )
    Information = a2->IoStatus.Information;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v26 = Information;
  if ( Length )
  {
    v10 = Length - 1;
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 != 2 )
      {
        Status = -1073741637;
        goto LABEL_7;
      }
      RemovalRelations = ACPIBusAndFilterIrpQueryRemovalRelations(a1, (PVOID *)&v26);
    }
    else
    {
      RemovalRelations = ACPIBusAndFilterIrpQueryEjectRelations(a1, a2, &v26);
    }
  }
  else
  {
    v25 = 1;
    RemovalRelations = ACPIRootIrpQueryBusRelations(a1, a2, &v26);
  }
  Status = RemovalRelations;
  if ( RemovalRelations != -1073741637 )
    a2->IoStatus.Status = RemovalRelations;
LABEL_7:
  v12 = byte_140075A82;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v10, CurrentStackLocation->MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xDu,
      (__int64)&WPP_ee1b3e6ee15937e5a501f089fd3dd194_Traceguids,
      (char)a2,
      IrpText,
      Status,
      v23,
      v22,
      v21);
  }
  if ( Status >= 0 )
  {
    a2->IoStatus.Information = v26;
  }
  else if ( Status != -1073741637 )
  {
    goto LABEL_11;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v14 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
  *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v14->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v14[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v14->Parameters.SetQuota + 6);
  v14[-1].FileObject = v14->FileObject;
  v14[-1].Control = 0;
  AcpiGetDriverProxyWrappedEndpoint(&v27, (__int64)ACPIRootIrpCompleteRoutine);
  v15 = a2->Tail.Overlay.CurrentStackLocation;
  v15[-1].CompletionRoutine = v27;
  v15[-1].Context = &Event;
  v15[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( Status >= 0 && v25 )
  {
    if ( a2->Flags != 393216 )
      ACPIFilterRemoveNonPresentDevices(v6, (_DWORD *)a2->IoStatus.Information);
    ACPIDetectFilterDevices(a1, a2->IoStatus.Information);
    v16 = *(_QWORD *)(v6 + 8);
    if ( (v16 & 0x200000000000LL) != 0 )
      v12 = *(const char **)(v6 + 608);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = ACPIDebugGetIrpText(v16, CurrentStackLocation->MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0xEu,
        (__int64)&WPP_ee1b3e6ee15937e5a501f089fd3dd194_Traceguids,
        (char)a2,
        v17,
        v19,
        v6,
        v12,
        v18);
    }
  }
LABEL_11:
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
