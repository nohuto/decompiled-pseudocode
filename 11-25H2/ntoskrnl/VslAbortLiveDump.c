/*
 * XREFs of VslAbortLiveDump @ 0x140589450
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x14049AFB4 (IopLiveDumpFreeDumpBuffers.c)
 *     HvlPrepareLivedumpDescriptor @ 0x140586E24 (HvlPrepareLivedumpDescriptor.c)
 *     VslFinalizeLiveDumpInSk @ 0x14058975C (VslFinalizeLiveDumpInSk.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 0x3Fu, 0, (__int64)v1);
}
