/*
 * XREFs of sub_1400910F0 @ 0x1400910F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140090550 @ 0x140090550 (sub_140090550.c)
 */

__int64 __fastcall sub_1400910F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 0LL;
  v8 = 0LL;
  v4 = sub_140090550((_QWORD *)(a1 - 112), (__int64)&v7, a3, a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    119,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
    v4);
  return v5;
}
