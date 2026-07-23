/*
 * XREFs of VslQueryPrivilegedAccessedState @ 0x14045D810
 * Callers:
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslQueryPrivilegedAccessedState(__int64 a1, char *a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v5; // r14
  __int64 result; // rax
  unsigned int v9; // edi
  _BYTE v10[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-A0h]
  _BYTE Src[96]; // [rsp+30h] [rbp-98h] BYREF

  v5 = a4;
  memset_0(v10, 0, 0x68uLL);
  while ( a3 )
  {
    v9 = 11;
    if ( a3 < 0xB )
      v9 = a3;
    v11 = a1 | v5;
    memmove(Src, a2, 8LL * v9);
    if ( v9 < 0xB )
      *(_QWORD *)&Src[8 * v9] = 0LL;
    result = VslpEnterIumSecureMode(2u, 0x108u, 0, (__int64)v10);
    if ( (int)result < 0 )
      return result;
    memmove(a2, Src, 8LL * v9);
    a2 += 8 * v9;
    a3 -= v9;
  }
  return 0LL;
}
