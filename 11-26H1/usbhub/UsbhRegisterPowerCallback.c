/*
 * XREFs of UsbhRegisterPowerCallback @ 0x14005EDA4
 * Callers:
 *     UsbhInitialize @ 0x14003D130 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhRegisterPowerCallback(PDEVICE_OBJECT DeviceObject)
{
  PVOID *v2; // rbx
  NTSTATUS result; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x15u,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v2 = (PVOID *)FdoExt((__int64)DeviceObject);
  result = PoRegisterPowerSettingCallback(
             DeviceObject,
             &GUID_USB_SETTING_SELECTIVE_SUSPEND,
             (PPOWER_SETTING_CALLBACK)UsbhPowerCallback,
             v2,
             v2 + 656);
  if ( result >= 0 )
    *((_DWORD *)v2 + 1310) = 1;
  return result;
}
