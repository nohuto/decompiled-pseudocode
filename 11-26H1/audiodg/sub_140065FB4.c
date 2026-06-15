/*
 * XREFs of sub_140065FB4 @ 0x140065FB4
 * Callers:
 *     sub_140065780 @ 0x140065780 (sub_140065780.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14006496C @ 0x14006496C (sub_14006496C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall sub_140065FB4(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v9[3]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v7 = 0LL;
  v8[0] = 0LL;
  v5 = sub_1400B6010(a3);
  if ( v5 >= 0 )
    v5 = sub_1400B6010(v8[0]);
  sub_140003238(v8);
  if ( v5 >= 0 )
  {
    sub_140021954((__int64)v9, a2);
    sub_14006496C((_QWORD *)(a1 + 24), (__int64)v8, v9, &v7);
    if ( v10 > 7 )
      sub_1400453E4(v9[0], 2 * v10 + 2);
    sub_140003238(&v7);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 578, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v5);
    sub_140003238(&v7);
    return (unsigned int)v5;
  }
}
