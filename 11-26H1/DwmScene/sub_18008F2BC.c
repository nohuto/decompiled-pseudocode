/*
 * XREFs of sub_18008F2BC @ 0x18008F2BC
 * Callers:
 *     sub_18008F33C @ 0x18008F33C (sub_18008F33C.c)
 * Callees:
 *     sub_18008F324 @ 0x18008F324 (sub_18008F324.c)
 */

__int64 __fastcall sub_18008F2BC(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_18008F324(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 16LL;
  return result;
}
