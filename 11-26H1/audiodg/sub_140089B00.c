/*
 * XREFs of sub_140089B00 @ 0x140089B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140089B00(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  return ~v1 & (v1 + sub_1400B6010(*(_QWORD *)(a1 + 24)));
}
