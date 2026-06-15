/*
 * XREFs of sub_14004BFF8 @ 0x14004BFF8
 * Callers:
 *     sub_14004BF90 @ 0x14004BF90 (sub_14004BF90.c)
 * Callees:
 *     sub_14001E180 @ 0x14001E180 (sub_14001E180.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004BB2C @ 0x14004BB2C (sub_14004BB2C.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 */

__int64 __fastcall sub_14004BFF8(
        int a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v11; // ebp
  _WORD v13[2048]; // [rsp+50h] [rbp-1038h] BYREF

  v11 = a2;
  sub_14001E180(v13, a2, a8, a9);
  return sub_14004BB2C(a1, v11, a3, 0, 0LL, a6, a7, (__int64)v13);
}
