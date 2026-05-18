/*
 * XREFs of sub_180097BF8 @ 0x180097BF8
 * Callers:
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 * Callees:
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_180097B68 @ 0x180097B68 (sub_180097B68.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180097BF8(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v7[5]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  if ( !sub_180041DBC(a1 + 8) )
    return 0LL;
  v10 = a1;
  sub_180029674(a1);
  v9 = 0LL;
  v4 = sub_180012B20(v7);
  v8 = 1;
  sub_180097B68((_QWORD *)(a1 + 32), &v8, a2, v4, &v9);
  v5 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3);
  sub_1800297F4(a1);
  return v5 - 1;
}
