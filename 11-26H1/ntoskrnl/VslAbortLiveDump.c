/*
 * XREFs of VslAbortLiveDump @ 0x1405C5204
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x1404DDEB4 (IopLiveDumpFreeDumpBuffers.c)
 *     HvlPrepareLivedumpDescriptor @ 0x1405C2DE8 (HvlPrepareLivedumpDescriptor.c)
 *     VslFinalizeLiveDumpInSk @ 0x1405C54FC (VslFinalizeLiveDumpInSk.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 0x40u, 0, (__int64)v1);
}
