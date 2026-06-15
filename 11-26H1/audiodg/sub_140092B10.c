/*
 * XREFs of sub_140092B10 @ 0x140092B10
 * Callers:
 *     sub_140092818 @ 0x140092818 (sub_140092818.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140092584 @ 0x140092584 (sub_140092584.c)
 */

__int64 __fastcall sub_140092B10(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  BOOL v12; // [rsp+50h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 9LL;
  v12 = a6 != 0;
  v6 = sub_140092584(a1, a2, a4, a5, &v9);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    30,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioprocessor.cpp",
    v6);
  return v7;
}
