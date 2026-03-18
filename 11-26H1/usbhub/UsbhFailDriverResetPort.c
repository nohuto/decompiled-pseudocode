/*
 * XREFs of UsbhFailDriverResetPort @ 0x140057F70
 * Callers:
 *     UsbhEnumerate1 @ 0x1400344E4 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1400349C0 (UsbhEnumerate2.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSyncDeviceReset @ 0x1400482B8 (UsbhSignalSyncDeviceReset.c)
 */

__int64 __fastcall UsbhFailDriverResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r10d
  int v8; // [rsp+28h] [rbp-10h]

  Log(a1, 1024, 1884443460, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v6 )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v6 + 1,
      v6 + 41,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v8);
  }
  UsbhSignalSyncDeviceReset(a1, a3, a2, 3221225486LL);
  return *(unsigned int *)(a2 + 400);
}
