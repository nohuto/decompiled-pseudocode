/*
 * XREFs of sub_140089B40 @ 0x140089B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140089B40(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  return ~v1 & (v1 + sub_1400B6010(*(_QWORD *)(a1 + 24)));
}
