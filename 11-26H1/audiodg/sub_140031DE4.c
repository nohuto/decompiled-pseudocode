/*
 * XREFs of sub_140031DE4 @ 0x140031DE4
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140031DE4(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( (int)sub_1400B6010(a3) < 0 )
    return 0LL;
  v5 = sub_1400B6010(a3);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 3977, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", v5);
  return v6;
}
