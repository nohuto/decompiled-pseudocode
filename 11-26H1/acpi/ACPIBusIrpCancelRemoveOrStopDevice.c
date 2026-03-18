/*
 * XREFs of ACPIBusIrpCancelRemoveOrStopDevice @ 0x1400AD970
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140042A28 (ACPIThermalAcquireCoolingInterfaces.c)
 *     EnableDisableRegionSpacesForDevice @ 0x14004D91C (EnableDisableRegionSpacesForDevice.c)
 */

__int64 __fastcall ACPIBusIrpCancelRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // si
  _DWORD *DeviceExtension; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = (__int64)DeviceExtension;
  if ( (DeviceExtension[2] & 0x204000) != 0x200000LL )
  {
    if ( DeviceExtension[92] == 1 )
    {
      v6 = DeviceExtension[93];
      *(_DWORD *)(v5 + 368) = v6;
      if ( v6 == 3 && (*(_DWORD *)(v5 + 668) & 0x300) != 0 )
        EnableDisableRegionSpacesForDevice(v5, 1);
    }
    if ( !*(_QWORD *)(v5 + 656) )
      ACPIThermalAcquireCoolingInterfaces(v5);
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x19u,
      (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
      (char)a2,
      IrpText,
      0,
      v5,
      v9,
      v10);
  }
  return 0LL;
}
