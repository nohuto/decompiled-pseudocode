/*
 * XREFs of sub_14008C660 @ 0x14008C660
 * Callers:
 *     sub_14008B988 @ 0x14008B988 (sub_14008B988.c)
 *     sub_14008BAD0 @ 0x14008BAD0 (sub_14008BAD0.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14008B0DC @ 0x14008B0DC (sub_14008B0DC.c)
 */

__int64 __fastcall sub_14008C660(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  v6 = 0LL;
  result = sub_14008B0DC(a1, (__int64)&v5, a3, a4);
  if ( (int)result < 0 )
    return sub_140007934(
             (int)retaddr,
             363,
             (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp",
             result);
  return result;
}
