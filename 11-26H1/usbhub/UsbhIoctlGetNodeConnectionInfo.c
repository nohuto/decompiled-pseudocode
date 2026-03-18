/*
 * XREFs of UsbhIoctlGetNodeConnectionInfo @ 0x14004DE48
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14001A440 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfo(__int64 a1, IRP *a2, __int64 a3)
{
  int v6; // r10d

  Log(a1, 32, 1768898103, (__int64)a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v6 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v6 + 2,
      v6 + 46,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  }
  return UsbhIoctlGetNodeConnectionInfoExApi(a1, a2, a3, 0);
}
