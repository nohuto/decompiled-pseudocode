/*
 * XREFs of VslStartSecureThread @ 0x140A8FF14
 * Callers:
 *     PspSecureThreadStartup @ 0x140A8FEA0 (PspSecureThreadStartup.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 VslStartSecureThread()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, (__int64)v1);
}
