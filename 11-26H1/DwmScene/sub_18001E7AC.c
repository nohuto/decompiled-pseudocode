/*
 * XREFs of sub_18001E7AC @ 0x18001E7AC
 * Callers:
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F61C @ 0x18001F61C (sub_18001F61C.c)
 */

__int64 __fastcall sub_18001E7AC(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = sub_1800141BC(a2);
  sub_18001F61C(a1, v3, *(_QWORD *)(v4 + 16));
  return a1;
}
