/*
 * XREFs of VslInitializeSecureKernelCfg @ 0x1405C33D4
 * Callers:
 *     MiInitializeKernelCfg @ 0x140CFE970 (MiInitializeKernelCfg.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslInitializeSecureKernelCfg(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+40h] [rbp-68h]

  memset_0(v5, 0, 0x68uLL);
  v8 = qword_140E37C80;
  v9 = qword_140E37C88;
  v6 = a1;
  v7 = a2;
  return VslpEnterIumSecureMode(2u, 0xD7u, 0, (__int64)v5);
}
