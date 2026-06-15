/*
 * XREFs of sub_140090CA0 @ 0x140090CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14008F9D0 @ 0x14008F9D0 (sub_14008F9D0.c)
 */

__int64 __fastcall sub_140090CA0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v9 = a2;
  v8 = 0LL;
  v7 = 0LL;
  v4 = sub_14008F9D0((_QWORD *)(a1 - 48), (__int64)&v7, a3, a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    216,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
    v4);
  return v5;
}
