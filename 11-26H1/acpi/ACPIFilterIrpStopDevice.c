/*
 * XREFs of ACPIFilterIrpStopDevice @ 0x1400B1360
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1400D1170 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     IsPciBus @ 0x1400C827C (IsPciBus.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 */

__int64 __fastcall ACPIFilterIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rdi
  bool v9; // bp
  __int64 v10; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rcx
  char *IrpText; // rax
  unsigned __int8 v14; // dl
  const char *v15; // r8
  const char *v16; // r10
  int (__fastcall *v18)(_DEVICE_OBJECT *, _IRP *, void *); // [rsp+80h] [rbp+18h] BYREF

  v18 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 368) == 1 )
  {
    v8 = *(_QWORD *)(DeviceExtension + 1008) & 0x8000LL;
    v9 = (*(_QWORD *)(DeviceExtension + 1008) & 0x8000) != 0;
    if ( (unsigned __int8)IsPciBus(*(_QWORD *)(DeviceExtension + 768), v4) || v8 )
    {
      LOBYTE(v10) = v9;
      EnableDisableRegions(*(_QWORD *)(v5 + 760), 0LL, v10);
    }
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    AcpiGetDriverProxyWrappedEndpoint(&v18, (__int64)ACPIFilterIrpStopDeviceCompletion);
    v12 = a2->Tail.Overlay.CurrentStackLocation;
    v12[-1].CompletionRoutine = v18;
    v12[-1].Context = 0LL;
    v12[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 728));
    v6 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 776), a2);
  }
  else
  {
    v6 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, 4u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      5u,
      0x1Du,
      (__int64)&WPP_ee1b3e6ee15937e5a501f089fd3dd194_Traceguids,
      (char)a2,
      IrpText,
      v6,
      v5,
      v15,
      v16);
  }
  return v6;
}
