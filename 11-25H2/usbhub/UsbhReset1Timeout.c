/*
 * XREFs of UsbhReset1Timeout @ 0x1400588F0
 * Callers:
 *     UsbhReset1TimeoutBadEnable @ 0x140058B00 (UsbhReset1TimeoutBadEnable.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     Usbh_UsbdReadFrameCounter @ 0x140005DFC (Usbh_UsbdReadFrameCounter.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhResetPort @ 0x140012B44 (UsbhResetPort.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhAllocateTimeoutObject @ 0x14001D1A8 (UsbhAllocateTimeoutObject.c)
 *     UsbhAssertBusLock @ 0x140038DE4 (UsbhAssertBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset1Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  int FrameCounter; // eax
  int v7; // esi
  unsigned int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-78h]
  __int64 v11; // [rsp+28h] [rbp-70h]
  int v12; // [rsp+28h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v14[2]; // [rsp+58h] [rbp-40h] BYREF
  __int16 v15; // [rsp+60h] [rbp-38h]
  __int16 v16; // [rsp+62h] [rbp-36h]

  v16 = 0;
  P = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v12);
  }
  Log(a1, 1024, 1884443476, a2, *(unsigned int *)(a2 + 544));
  UsbhAssertBusLock(a1);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v14[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v14[1] = *(_DWORD *)(a2 + 544);
  v15 = *(_WORD *)(a2 + 4);
  v7 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v8 = *(_DWORD *)(a2 + 544);
  if ( v8 >= 3 || v7 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    LODWORD(v11) = -1073741823;
    PdoExt(a3)[705] = 1073807362;
    LODWORD(v10) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT, v10, v11);
    UsbhSetEnumerationFailed(a1, a2, a3, 28, (__int64)v14, v7);
    return 0LL;
  }
  else
  {
    LODWORD(v11) = -1073741823;
    *(_DWORD *)(a2 + 544) = v8 + 1;
    LODWORD(v10) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, v10, v11);
    UsbhException(a1, *(_WORD *)(a2 + 4), 81, v14, 0xCu, v7, -1, usbfile_busfunc_c, 726, 0);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
