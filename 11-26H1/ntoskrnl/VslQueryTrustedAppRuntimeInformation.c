/*
 * XREFs of VslQueryTrustedAppRuntimeInformation @ 0x14077A000
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslQueryTrustedAppRuntimeInformation(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  _BYTE v4[24]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+38h] [rbp-70h]

  memset_0(v4, 0, 0x68uLL);
  *(_OWORD *)a1 = 0LL;
  result = VslpEnterIumSecureMode(2u, 0x36u, 0, (__int64)v4);
  if ( (int)result >= 0 )
  {
    v3 = v4[16] & 1 | *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFEuLL;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = v3;
  }
  return result;
}
