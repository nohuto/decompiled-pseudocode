/*
 * XREFs of VslQueryPrivilegedAccessedState @ 0x14042BF3C
 * Callers:
 *     MiQueryVpabAccessedState @ 0x14042AF30 (MiQueryVpabAccessedState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslQueryPrivilegedAccessedState(char *Src, unsigned int a2, unsigned __int8 a3)
{
  __int64 v4; // r14
  unsigned int v6; // edi
  __int64 result; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v9; // [rsp+28h] [rbp-90h]
  _BYTE v10[96]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a3;
  memset_0(v8, 0, 0x68uLL);
  while ( a2 )
  {
    v6 = 11;
    v9 = v4;
    if ( a2 < 0xB )
      v6 = a2;
    memmove(v10, Src, 8LL * v6);
    if ( v6 < 0xB )
      *(_QWORD *)&v10[8 * v6] = 0LL;
    result = VslpEnterIumSecureMode(2u, 0xF8u, 0, (__int64)v8);
    if ( (int)result < 0 )
      return result;
    Src += 8 * v6;
    a2 -= v6;
  }
  return 0LL;
}
