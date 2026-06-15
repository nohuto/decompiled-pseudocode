/*
 * XREFs of sub_1400915E0 @ 0x1400915E0
 * Callers:
 *     sub_14008F640 @ 0x14008F640 (sub_14008F640.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_14008F17C @ 0x14008F17C (sub_14008F17C.c)
 */

__int64 __fastcall sub_1400915E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 7LL;
  v7 = sub_14008F17C(a1, a2, a4, a5, &v10);
  v8 = v7;
  if ( v7 >= 0 )
  {
    sub_14005DFF0(a1 + 3, a3);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      182,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
      v7);
    return v8;
  }
}
