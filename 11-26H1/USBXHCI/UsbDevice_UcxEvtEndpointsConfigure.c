/*
 * XREFs of UsbDevice_UcxEvtEndpointsConfigure @ 0x14004EB10
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_UcxEvtEndpointsConfigure(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 v4; // rbp
  int v5; // esi
  __int64 v6; // rbx
  char v7; // zf
  _OWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v9[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v3 = -1;
  }
  else
  {
    v3 = 40;
  }
  LOWORD(v9[0]) = v3;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(WdfDriverGlobals, a2, v9);
  *(_WORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              a2,
              off_14006AE88) = 0;
  v4 = *((_QWORD *)&v9[0] + 1);
  v5 = *(_DWORD *)(*((_QWORD *)&v9[0] + 1) + 24LL);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v9[0] + 1) + 16LL),
         off_14006B128);
  Debug_FreAssertMsg(
    (__int64)"Invalid parameter",
    v6 != 0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    5292);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(v6 + 8)) )
  {
    *(_QWORD *)(v6 + 448) = a2;
    *(_QWORD *)(v6 + 600) = v4;
    *(_DWORD *)(v6 + 456) = 259;
    v7 = *(_DWORD *)(v6 + 608) == 0;
    *(_BYTE *)(v6 + 440) = v5 == 0;
    Debug_FreAssertMsg(
      (__int64)"Initial state must be ConfigureEndpoint_Uninitialized",
      v7,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
      5312);
    return UsbDevice_QueueConfigureEndpointEvent(v6, 5);
  }
  else
  {
    *(_QWORD *)(v6 + 448) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v5 != 0 ? 0xC000000E : 0);
  }
}
