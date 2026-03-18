/*
 * XREFs of UsbhQueueOvercurrentReset @ 0x14003FE60
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhPCE_Disable @ 0x140013E18 (UsbhPCE_Disable.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x14002C4D0 (UsbhQueueWorkItemEx.c)
 *     UsbhDispatch_HardResetEvent @ 0x140037850 (UsbhDispatch_HardResetEvent.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x14003FFD0 (Usbh_OvercurrentDerefHubBusy.c)
 */

__int64 __fastcall UsbhQueueOvercurrentReset(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r8
  _DWORD *v12; // rax

  v4 = FdoExt(a1);
  Log(a1, 0x4000, 1870033457, 0LL, *(unsigned __int16 *)(a2 + 20));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_09d41a57df183c3937fadd74f3cf7425_Traceguids);
  if ( !*((_BYTE *)v4 + 3010) )
  {
    *((_BYTE *)v4 + 3010) = 1;
    UsbhQueueWorkItemEx(a1, 1u, (__int64)UsbhSetHubOvercurrentDetectedKey, 0LL, 0, 0x6352564Fu, 0LL);
  }
  result = UsbhGetPortData(a1, *(unsigned __int16 *)(a2 + 20), v5, v6);
  v9 = result;
  if ( result )
  {
    v10 = result + 200;
    UsbhPCE_Disable(a1, *(unsigned __int16 *)(a2 + 20), result + 200, v8);
    result = UsbhQueueWorkItemEx(
               a1,
               1u,
               (__int64)UsbhAutoOvercurrentResetWorker,
               v10,
               *(unsigned __int16 *)(v9 + 4),
               0x6352564Fu,
               0LL) & 0xC0000000LL;
    if ( (_DWORD)result == -1073741824 )
    {
      LOBYTE(v11) = 1;
      Usbh_OvercurrentDerefHubBusy(a1, v9, v11);
      v12 = FdoExt(a1);
      return UsbhDispatch_HardResetEvent(a1, (__int64)(v12 + 346), 3);
    }
  }
  return result;
}
