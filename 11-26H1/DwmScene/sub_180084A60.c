/*
 * XREFs of sub_180084A60 @ 0x180084A60
 * Callers:
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 *     sub_180084E40 @ 0x180084E40 (sub_180084E40.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 *     sub_1800382B8 @ 0x1800382B8 (sub_1800382B8.c)
 *     sub_18007FFA8 @ 0x18007FFA8 (sub_18007FFA8.c)
 *     sub_18008456C @ 0x18008456C (sub_18008456C.c)
 *     sub_180084B68 @ 0x180084B68 (sub_180084B68.c)
 *     sub_180084D84 @ 0x180084D84 (sub_180084D84.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180084A60(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-30h] BYREF

  sub_180029070(a1, (__int64)a2);
  result = (__int64)sub_1800382B8(a1 + 160, &v11);
  if ( v11 )
  {
    v5 = *a2;
    sub_18008456C((__int64 *)(*a2 + 496LL), (__int64 *)&v10);
    v6 = v10;
    v7 = (_QWORD *)sub_180012BF8(v5 + 8, &v13);
    sub_1800291F0(v6, v7);
    if ( *((_QWORD *)&v13 + 1) )
      sub_180010EC8(*((__int64 *)&v13 + 1));
    v8 = v10;
    v9 = sub_18007FFA8((__int64)v14, a1 + 96);
    sub_180084D84(v8, *a2, v9, v11);
    v13 = v10;
    v10 = 0LL;
    result = sub_180084B68(a1, &v13);
    if ( *((_QWORD *)&v10 + 1) )
      result = sub_180010EC8(*((__int64 *)&v10 + 1));
  }
  if ( v12 )
    return sub_180010EC8(v12);
  return result;
}
