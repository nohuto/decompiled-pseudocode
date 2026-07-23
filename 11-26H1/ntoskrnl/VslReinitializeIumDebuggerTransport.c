/*
 * XREFs of VslReinitializeIumDebuggerTransport @ 0x1405C64A0
 * Callers:
 *     HvlNotifyDebugDeviceAvailable @ 0x1405C01F0 (HvlNotifyDebugDeviceAvailable.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 VslReinitializeIumDebuggerTransport()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 0x11Du, 0, (__int64)v1);
}
