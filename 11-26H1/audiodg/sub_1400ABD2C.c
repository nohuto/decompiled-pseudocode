/*
 * XREFs of sub_1400ABD2C @ 0x1400ABD2C
 * Callers:
 *     sub_1400A9620 @ 0x1400A9620 (sub_1400A9620.c)
 *     sub_1400A972C @ 0x1400A972C (sub_1400A972C.c)
 * Callees:
 *     sub_1400285F0 @ 0x1400285F0 (sub_1400285F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1400ABD2C(__int64 a1, int a2)
{
  ULONG result; // eax
  int v3; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  __int64 v5; // [rsp+60h] [rbp-38h]
  __int64 v6; // [rsp+68h] [rbp-30h]
  int *v7; // [rsp+70h] [rbp-28h]
  __int64 v8; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_1400E7460 > 5 )
  {
    v3 = a2;
    v5 = a1 + 8;
    v7 = &v3;
    v8 = 4LL;
    v6 = 16LL;
    return sub_1400285F0((__int64)&dword_1400E7460, byte_1400D4410, 0LL, 0LL, 4u, &v4);
  }
  return result;
}
