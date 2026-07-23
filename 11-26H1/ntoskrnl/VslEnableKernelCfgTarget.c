/*
 * XREFs of VslEnableKernelCfgTarget @ 0x140AAFE5C
 * Callers:
 *     MiMarkKernelCfgTarget @ 0x1404AE7E4 (MiMarkKernelCfgTarget.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslEnableKernelCfgTarget(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = a1;
  return VslpEnterIumSecureMode(2u, 0xDCu, 0, (__int64)v3);
}
