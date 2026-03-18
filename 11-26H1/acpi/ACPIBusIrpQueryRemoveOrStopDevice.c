/*
 * XREFs of ACPIBusIrpQueryRemoveOrStopDevice @ 0x1400ADC00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x140046BE8 (ACPIThermalReleaseCoolingInterfaces.c)
 *     EnableDisableRegionSpacesForDevice @ 0x14004D91C (EnableDisableRegionSpacesForDevice.c)
 */

__int64 __fastcall ACPIBusIrpQueryRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  _DWORD *DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned __int8 MinorFunction; // r15
  unsigned int v6; // edi
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = (__int64)DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (DeviceExtension[252] & 0x40000) != 0 && MinorFunction == 5 || (DeviceExtension[2] & 0x204000) == 0x200000LL )
  {
    v6 = -1073741808;
  }
  else
  {
    if ( DeviceExtension[92] == 3 && (DeviceExtension[167] & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice((__int64)DeviceExtension, 0);
    ACPIThermalReleaseCoolingInterfaces(v4);
    v6 = 0;
    *(_DWORD *)(v4 + 372) = *(_DWORD *)(v4 + 368);
    *(_DWORD *)(v4 + 368) = 1;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x2Du,
      (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
      (char)a2,
      IrpText,
      v6,
      v4,
      v9,
      v10);
  }
  return v6;
}
