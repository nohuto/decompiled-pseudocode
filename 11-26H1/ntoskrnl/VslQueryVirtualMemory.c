/*
 * XREFs of VslQueryVirtualMemory @ 0x1404E41F0
 * Callers:
 *     MiQuerySecureBasicInfo @ 0x140923550 (MiQuerySecureBasicInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslQueryVirtualMemory(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 result; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _BYTE v10[8]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-90h]
  __int128 v12; // [rsp+30h] [rbp-88h]
  __int128 v13; // [rsp+40h] [rbp-78h]
  __int128 v14; // [rsp+50h] [rbp-68h]

  memset_0(v10, 0, 0x68uLL);
  v6 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
  *(_QWORD *)&v12 = a2;
  v11 = v6;
  result = VslpEnterIumSecureMode(2u, 0x2Au, 0, (__int64)v10);
  if ( (int)result >= 0 )
  {
    v8 = v13;
    *a3 = v12;
    v9 = v14;
    a3[1] = v8;
    a3[2] = v9;
  }
  return result;
}
