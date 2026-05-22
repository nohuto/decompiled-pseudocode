/*
 * XREFs of ?RegisterDeviceInterfaceNotification@PnpApiWrapper@@YAJAEBU_GUID@@P6AXW4DeviceEventId@1@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E75A8
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x1800897E0 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E7314 (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 */

__int64 __fastcall PnpApiWrapper::RegisterDeviceInterfaceNotification(
        PnpApiWrapper *this,
        const struct _GUID *a2,
        void (__high *a3)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *),
        _QWORD *a4)
{
  int v6; // eax
  struct _CM_NOTIFY_FILTER *v7; // rdx
  _DWORD v9[4]; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v10; // [rsp+30h] [rbp-1A8h]

  memset_0(v9, 0, 0x1A0uLL);
  v9[0] = 416;
  v6 = memcmp_0(&xmmword_180206C70, &GUID_NULL, 0x10uLL);
  v9[2] = 0;
  v9[1] = v6 == 0;
  v10 = xmmword_180206C70;
  return PnpApiWrapper::Details::RegisterDeviceEventHandler((PnpApiWrapper::Details *)v9, v7, a3, a4);
}
