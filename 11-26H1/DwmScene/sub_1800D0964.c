/*
 * XREFs of sub_1800D0964 @ 0x1800D0964
 * Callers:
 *     sub_1800D0FD4 @ 0x1800D0FD4 (sub_1800D0FD4.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 */

bool __fastcall sub_1800D0964(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r8

  sub_1800141BC(a2);
  v3 = sub_1800141BC(v2);
  return !sub_18001F05C(v3, *(_QWORD *)(v5 + 16), v6, *(_QWORD *)(v4 + 16));
}
