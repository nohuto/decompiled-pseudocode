/*
 * XREFs of VslStartSecureThread @ 0x140955D78
 * Callers:
 *     PspSecureThreadStartup @ 0x140955DE0 (PspSecureThreadStartup.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslStartSecureThread()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, (__int64)v1);
}
