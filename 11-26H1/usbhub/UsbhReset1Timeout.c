/*
 * XREFs of UsbhReset1Timeout @ 0x140058E50
 * Callers:
 *     UsbhReset1TimeoutBadEnable @ 0x140059070 (UsbhReset1TimeoutBadEnable.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAllocateTimeoutObject @ 0x1400100D4 (UsbhAllocateTimeoutObject.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     Usbh_UsbdReadFrameCounter @ 0x14001FDB0 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhAssertBusLock @ 0x1400244C8 (UsbhAssertBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset1Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  int FrameCounter; // eax
  int v7; // esi
  unsigned int v8; // eax
  __int64 v9; // r9
  int v11; // [rsp+28h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v13[2]; // [rsp+58h] [rbp-40h] BYREF
  __int16 v14; // [rsp+60h] [rbp-38h]
  __int16 v15; // [rsp+62h] [rbp-36h]

  v15 = 0;
  P = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v11);
  }
  Log(a1, 1024, 1884443476, a2, *(unsigned int *)(a2 + 544));
  UsbhAssertBusLock(a1);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v13[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v13[1] = *(_DWORD *)(a2 + 544);
  v14 = *(_WORD *)(a2 + 4);
  v7 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v8 = *(_DWORD *)(a2 + 544);
  if ( v8 >= 3 || v7 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    PdoExt(a3)[705] = 1073807362;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT);
    UsbhSetEnumerationFailed(a1, a2, a3, 28, (__int64)v13, v7);
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 544) = v8 + 1;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
    UsbhException(a1, *(_WORD *)(a2 + 4), 81, v13, 0xCu, v7, -1, usbfile_busfunc_c, 726, 0);
    UsbhResetPort(a1, a2, (__int64)P, v9);
    return 1LL;
  }
}
