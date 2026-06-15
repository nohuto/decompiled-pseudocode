/*
 * XREFs of sub_140092404 @ 0x140092404
 * Callers:
 *     sub_140091900 @ 0x140091900 (sub_140091900.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140091720 @ 0x140091720 (sub_140091720.c)
 */

__int64 __fastcall sub_140092404(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 8LL;
  v5 = sub_140091720(a1, a2, a4, a5, &v8);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 34, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudiopump.cpp", v5);
  return v6;
}
