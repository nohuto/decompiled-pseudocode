/*
 * XREFs of sub_1800C90B8 @ 0x1800C90B8
 * Callers:
 *     sub_1800C9978 @ 0x1800C9978 (sub_1800C9978.c)
 * Callees:
 *     sub_1800C90A0 @ 0x1800C90A0 (sub_1800C90A0.c)
 */

__int64 __fastcall sub_1800C90B8(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_1800C90A0(*(_OWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 32;
  return result;
}
