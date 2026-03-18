/*
 * XREFs of VslGetSecurePebAddress @ 0x140AEF304
 * Callers:
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslGetSecurePebAddress(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  v6 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
  result = VslpEnterIumSecureMode(2u, 0xC0u, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v7;
  return result;
}
