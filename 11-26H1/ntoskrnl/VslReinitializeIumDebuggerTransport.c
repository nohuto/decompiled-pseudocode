/*
 * XREFs of VslReinitializeIumDebuggerTransport @ 0x1405C3C30
 * Callers:
 *     HvlNotifyDebugDeviceAvailable @ 0x1405BD980 (HvlNotifyDebugDeviceAvailable.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslReinitializeIumDebuggerTransport()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 0x11Du, 0, (__int64)v1);
}
