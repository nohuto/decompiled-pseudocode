/*
 * XREFs of ACPIRootIrpStopDevice @ 0x1400BA2E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPIInitStopACPI @ 0x140062028 (ACPIInitStopACPI.c)
 */

__int64 __fastcall ACPIRootIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  char v4; // di
  unsigned __int8 MinorFunction; // bp
  unsigned int v6; // esi
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( *(_DWORD *)(DeviceExtension + 368) == 1 )
  {
    *(_DWORD *)(DeviceExtension + 368) = 0;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v6 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
    ACPIInitStopACPI();
  }
  else
  {
    v6 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x1Bu,
      (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
      (char)a2,
      IrpText,
      v6,
      v4,
      v9,
      v10);
  }
  return v6;
}
