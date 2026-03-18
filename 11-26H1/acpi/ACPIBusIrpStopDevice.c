/*
 * XREFs of ACPIBusIrpStopDevice @ 0x1400AE270
 * Callers:
 *     ACPIEcStopDevice @ 0x1400602A0 (ACPIEcStopDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x140046BE8 (ACPIThermalReleaseCoolingInterfaces.c)
 *     EnableDisableRegionSpacesForDevice @ 0x14004D91C (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalStopZone @ 0x140055990 (ACPIThermalStopZone.c)
 *     ACPIFanStopDevice @ 0x1400607B0 (ACPIFanStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1400B18A0 (EnableDisableIPMIRegions.c)
 *     ACPIPepCleanupEpmNotificationSupport @ 0x1400B4010 (ACPIPepCleanupEpmNotificationSupport.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1400B4070 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 *     IsPciBus @ 0x1400C827C (IsPciBus.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 */

__int64 __fastcall ACPIBusIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rbx
  int v5; // eax
  __int64 v6; // rdi
  bool v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  char *IrpText; // rax
  const char *v13; // r8
  const char *v14; // r10

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_DWORD *)(DeviceExtension + 368);
  if ( v5 != 1 )
  {
    if ( v5 == 3 && (*(_DWORD *)(DeviceExtension + 668) & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice(DeviceExtension, 0);
    *(_DWORD *)(DeviceExtension + 368) = *(_DWORD *)(DeviceExtension + 372);
  }
  ACPIThermalReleaseCoolingInterfaces(DeviceExtension);
  v6 = *(_QWORD *)(DeviceExtension + 1008) & 0x8000LL;
  v7 = (*(_QWORD *)(DeviceExtension + 1008) & 0x8000) != 0;
  if ( (unsigned __int8)IsPciBus(*(_QWORD *)(DeviceExtension + 768), v8) || v6 )
  {
    LOBYTE(v9) = v7;
    EnableDisableRegions(*(_QWORD *)(DeviceExtension + 760), 0LL, v9);
  }
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x1000LL) != 0 )
    EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 760), 0LL);
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x8000000) != 0 )
  {
    ACPIThermalStopZone(DeviceExtension);
  }
  else
  {
    v10 = *(_QWORD *)(DeviceExtension + 1008);
    if ( (v10 & 0x200000000LL) != 0 )
    {
      ACPIFanStopDevice(DeviceExtension);
    }
    else if ( (v10 & 0x10000000000LL) != 0 )
    {
      ACPIPepCleanupEpmNotificationSupport(DeviceExtension);
      ACPIPepCleanupPlatformNotificationSupport(DeviceExtension);
    }
  }
  *(_DWORD *)(DeviceExtension + 368) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  ACPIInitStopDevice(DeviceExtension, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x3Fu,
      (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
      (char)a2,
      IrpText,
      0,
      DeviceExtension,
      v13,
      v14);
  }
  return 0LL;
}
