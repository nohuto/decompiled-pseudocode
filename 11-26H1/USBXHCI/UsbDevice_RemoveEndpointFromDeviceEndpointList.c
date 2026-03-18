/*
 * XREFs of UsbDevice_RemoveEndpointFromDeviceEndpointList @ 0x1400026B8
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x140002480 (Endpoint_EvtEndpointCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_RemoveEndpointFromDeviceEndpointList(__int64 a1, __int64 a2, _QWORD *a3)
{
  KIRQL v6; // al
  __int64 v7; // r8
  _QWORD *v8; // rdx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v8 = (_QWORD *)a3[1], (_QWORD *)*v8 != a3) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  --*(_DWORD *)(a1 + 120);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01033 + 1648))(
    WdfDriverGlobals,
    a2,
    UsbDevice_AddEndpointToDeviceEndpointList,
    8028LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c");
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01033 + 1648))(
           WdfDriverGlobals,
           *(_QWORD *)a1,
           UsbDevice_AddEndpointToDeviceEndpointList,
           8036LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c");
}
