/*
 * XREFs of sub_14004E9D4 @ 0x14004E9D4
 * Callers:
 *     sub_140046B38 @ 0x140046B38 (sub_140046B38.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140044BB0 @ 0x140044BB0 (sub_140044BB0.c)
 *     sub_140045810 @ 0x140045810 (sub_140045810.c)
 *     sub_14004591C @ 0x14004591C (sub_14004591C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004C8C4 @ 0x14004C8C4 (sub_14004C8C4.c)
 *     sub_14004CE38 @ 0x14004CE38 (sub_14004CE38.c)
 *     sub_14004CEA8 @ 0x14004CEA8 (sub_14004CEA8.c)
 *     sub_14004CFC8 @ 0x14004CFC8 (sub_14004CFC8.c)
 */

__int64 __fastcall sub_14004E9D4(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v13[14]; // [rsp+38h] [rbp-21h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+5Fh]

  v1 = (__int64 *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 80) )
    return 0LL;
  v10 = a1;
  v3 = sub_140045810(&v11, &v10);
  sub_14004591C(a1 + 96, v3);
  sub_140003238(&v11);
  v4 = sub_140044BB0(&v11, a1);
  v10 = 0LL;
  v5 = *v4;
  v13[0] = off_1400BB350;
  v13[13] = v13;
  v13[1] = v5;
  v7 = sub_14004C8C4(v5, (__int64)v12, v6, &v10);
  v8 = 0LL;
  if ( v7 >= 0 )
    v8 = v10;
  v10 = v8;
  sub_14004CFC8(v1, &v10);
  sub_14004CEA8(&v10);
  sub_14004CE38((__int64)v12);
  if ( *v1 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    21,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
    -2147024882);
  return 2147942414LL;
}
