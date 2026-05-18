/*
 * XREFs of sub_180018584 @ 0x180018584
 * Callers:
 *     sub_180018BF0 @ 0x180018BF0 (sub_180018BF0.c)
 *     sub_18001E6F0 @ 0x18001E6F0 (sub_18001E6F0.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

void **__fastcall sub_180018584(_QWORD *a1)
{
  void **result; // rax

  sub_1800129D0((__int64)(a1 + 2));
  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
