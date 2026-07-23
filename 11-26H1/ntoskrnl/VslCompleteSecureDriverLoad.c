/*
 * XREFs of VslCompleteSecureDriverLoad @ 0x140AC90A8
 * Callers:
 *     MiCompleteSecureDriverLoad @ 0x140AC8F74 (MiCompleteSecureDriverLoad.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslCompleteSecureDriverLoad(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbp
  _BYTE v9[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]

  v5 = a4;
  memset_0(v9, 0, 0x68uLL);
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = v5;
  v14 = 0LL;
  return VslpEnterIumSecureMode(2u, 0xD9u, 0, (__int64)v9);
}
