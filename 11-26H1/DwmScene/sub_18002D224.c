/*
 * XREFs of sub_18002D224 @ 0x18002D224
 * Callers:
 *     sub_18003412C @ 0x18003412C (sub_18003412C.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 */

__int64 __fastcall sub_18002D224(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = sub_1800141BC(a2);
  return sub_18002EEDC(v4, v2, *(_QWORD *)(v3 + 16));
}
