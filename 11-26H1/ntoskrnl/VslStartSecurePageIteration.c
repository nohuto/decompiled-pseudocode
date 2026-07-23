/*
 * XREFs of VslStartSecurePageIteration @ 0x1405122B4
 * Callers:
 *     HvlpStartSecurePageListIteration @ 0x1405C4CF4 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslStartSecurePageIteration(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  _BYTE v10[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v11; // [rsp+28h] [rbp-80h]
  __int64 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+38h] [rbp-70h]
  __int64 v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h]

  v6 = a1;
  v7 = a4;
  memset_0(v10, 0, 0x68uLL);
  v15 = a5;
  v11 = v6;
  v12 = a2;
  v13 = a3;
  v14 = v7;
  return VslpEnterIumSecureMode(2u, 0x800u, 0, (__int64)v10);
}
