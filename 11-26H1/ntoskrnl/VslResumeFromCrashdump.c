/*
 * XREFs of VslResumeFromCrashdump @ 0x1405C678C
 * Callers:
 *     HvlResumeFromRootCrashdump @ 0x1405C07C0 (HvlResumeFromRootCrashdump.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 VslResumeFromCrashdump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 0x803u, 0, (__int64)v1);
}
