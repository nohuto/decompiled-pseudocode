/*
 * XREFs of sub_18005E6D4 @ 0x18005E6D4
 * Callers:
 *     sub_18005FE28 @ 0x18005FE28 (sub_18005FE28.c)
 *     sub_18006A3F0 @ 0x18006A3F0 (sub_18006A3F0.c)
 *     sub_1800D3A88 @ 0x1800D3A88 (sub_1800D3A88.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 */

bool __fastcall sub_18005E6D4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  sub_1800141BC(a3);
  v4 = sub_1800141BC(v3);
  return !sub_18001F05C(v4, *(_QWORD *)(v5 + 16), v6, v7);
}
