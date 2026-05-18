/*
 * XREFs of sub_18000E708 @ 0x18000E708
 * Callers:
 *     sub_18000E7F0 @ 0x18000E7F0 (sub_18000E7F0.c)
 * Callees:
 *     sub_1800110DC @ 0x1800110DC (sub_1800110DC.c)
 */

void **__fastcall sub_18000E708(_QWORD *a1)
{
  void **result; // rax

  sub_1800110DC(a1 + 23);
  sub_1800110DC(a1 + 21);
  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
