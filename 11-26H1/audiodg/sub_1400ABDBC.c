/*
 * XREFs of sub_1400ABDBC @ 0x1400ABDBC
 * Callers:
 *     sub_1400AAF00 @ 0x1400AAF00 (sub_1400AAF00.c)
 *     sub_1400AB040 @ 0x1400AB040 (sub_1400AB040.c)
 * Callees:
 *     sub_1400285F0 @ 0x1400285F0 (sub_1400285F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1400ABDBC(__int64 a1, int a2, __int64 a3)
{
  ULONG result; // eax
  int v4; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  __int64 *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1400E7460 > 5 )
  {
    v5 = a3;
    v7 = a1 + 8;
    v11 = &v5;
    v4 = a2;
    v9 = &v4;
    v12 = 8LL;
    v10 = 4LL;
    v8 = 16LL;
    return sub_1400285F0((__int64)&dword_1400E7460, byte_1400D444E, 0LL, 0LL, 5u, &v6);
  }
  return result;
}
