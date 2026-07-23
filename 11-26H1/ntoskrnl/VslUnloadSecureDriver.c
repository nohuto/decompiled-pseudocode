/*
 * XREFs of VslUnloadSecureDriver @ 0x140AC9970
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140AC8C4C (MiMarkKernelImageCfgBits.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslUnloadSecureDriver(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = a1;
  return VslpEnterIumSecureMode(2u, 0xDAu, 0, (__int64)v3);
}
