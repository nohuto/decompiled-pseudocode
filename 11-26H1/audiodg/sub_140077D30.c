/*
 * XREFs of sub_140077D30 @ 0x140077D30
 * Callers:
 *     sub_14007EA94 @ 0x14007EA94 (sub_14007EA94.c)
 * Callees:
 *     sub_140077804 @ 0x140077804 (sub_140077804.c)
 */

__int64 __fastcall sub_140077D30(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  sub_140077804((_QWORD *)(a1 + 24), (__int64 *)(a2 + 24));
  return v2;
}
