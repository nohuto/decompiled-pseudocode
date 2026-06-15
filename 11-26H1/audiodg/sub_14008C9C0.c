/*
 * XREFs of sub_14008C9C0 @ 0x14008C9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14008B24C @ 0x14008B24C (sub_14008B24C.c)
 */

__int64 __fastcall sub_14008C9C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 0LL;
  v8 = 0LL;
  v4 = sub_14008B24C((_QWORD *)(a1 - 48), (__int64)&v7, a3, a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 226, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v4);
  return v5;
}
