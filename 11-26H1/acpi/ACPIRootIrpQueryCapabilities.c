/*
 * XREFs of ACPIRootIrpQueryCapabilities @ 0x1400BA050
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x14004EBB0 (ACPISystemPowerInitializeRootMapping.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 */

__int64 __fastcall ACPIRootIrpQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v5; // rcx
  int Status; // edi
  _IO_STACK_LOCATION *v7; // rdx
  const char *v8; // rbp
  unsigned __int8 MinorFunction; // r14
  __int64 SecurityContext; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10
  __int64 v16; // rcx
  char *v17; // rax
  const char *v18; // r8
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  int (__fastcall *v21)(_DEVICE_OBJECT *, _IRP *, void *); // [rsp+B8h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  v21 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  AcpiGetDriverProxyWrappedEndpoint(&v21, (__int64)ACPIRootIrpCompleteRoutine);
  v5 = a2->Tail.Overlay.CurrentStackLocation;
  v5[-1].CompletionRoutine = v21;
  v5[-1].Context = &Event;
  v5[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v7 = a2->Tail.Overlay.CurrentStackLocation;
  v8 = byte_140075A82;
  MinorFunction = v7->MinorFunction;
  if ( Status >= 0 )
  {
    SecurityContext = (__int64)v7->Parameters.Create.SecurityContext;
    v11 = *(_DWORD *)(SecurityContext + 4) & 0xFFFFFCE3;
    *(_DWORD *)(SecurityContext + 12) = -1;
    *(_DWORD *)(SecurityContext + 8) = -1;
    *(_DWORD *)(SecurityContext + 4) = v11 | 0x40;
    *(_QWORD *)(SecurityContext + 44) = 0LL;
    Status = ACPISystemPowerInitializeRootMapping(DeviceExtension, SecurityContext);
    if ( Status < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(v12, MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xFu,
        (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
        (char)a2,
        IrpText,
        Status,
        DeviceExtension,
        v15,
        v14);
    }
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v8 = *(const char **)(DeviceExtension + 608);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = ACPIDebugGetIrpText(v16, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x10u,
      (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
      (char)a2,
      v17,
      Status,
      DeviceExtension,
      v8,
      v18);
  }
  return (unsigned int)Status;
}
