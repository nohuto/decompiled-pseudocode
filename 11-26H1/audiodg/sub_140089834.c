/*
 * XREFs of sub_140089834 @ 0x140089834
 * Callers:
 *     sub_1400897DC @ 0x1400897DC (sub_1400897DC.c)
 *     sub_140089950 @ 0x140089950 (sub_140089950.c)
 *     sub_14008A3AC @ 0x14008A3AC (sub_14008A3AC.c)
 *     sub_14008A3E0 @ 0x14008A3E0 (sub_14008A3E0.c)
 *     sub_14008B894 @ 0x14008B894 (sub_14008B894.c)
 *     sub_14008BA00 @ 0x14008BA00 (sub_14008BA00.c)
 *     sub_14008D8B0 @ 0x14008D8B0 (sub_14008D8B0.c)
 *     sub_14008D8E8 @ 0x14008D8E8 (sub_14008D8E8.c)
 *     sub_14008D910 @ 0x14008D910 (sub_14008D910.c)
 *     sub_14008D9A0 @ 0x14008D9A0 (sub_14008D9A0.c)
 *     sub_140090808 @ 0x140090808 (sub_140090808.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14008940C @ 0x14008940C (sub_14008940C.c)
 *     sub_14008957C @ 0x14008957C (sub_14008957C.c)
 */

__int64 __fastcall sub_140089834(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  *a1 = off_1400BEA60;
  if ( a1[5] )
  {
    v6 = 0LL;
    v7 = 0LL;
    if ( a1[4] )
      sub_14008957C(a1, (__int64)&v6, a3, a4);
    else
      sub_14008940C(a1, (__int64)&v6, a3, a4);
  }
  sub_140056130(a1 + 4);
  return sub_140056130(a1 + 3);
}
