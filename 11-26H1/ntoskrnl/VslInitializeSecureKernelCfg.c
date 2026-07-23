/*
 * XREFs of VslInitializeSecureKernelCfg @ 0x1405C5C44
 * Callers:
 *     MiInitializeKernelCfg @ 0x140D04D10 (MiInitializeKernelCfg.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslInitializeSecureKernelCfg(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+40h] [rbp-68h]

  memset_0(v5, 0, 0x68uLL);
  v8 = qword_140E37E00;
  v9 = qword_140E37E08;
  v6 = a1;
  v7 = a2;
  return VslpEnterIumSecureMode(2u, 0xD7u, 0, (__int64)v5);
}
