/*
 * XREFs of sub_1800D4664 @ 0x1800D4664
 * Callers:
 *     sub_1800E53F5 @ 0x1800E53F5 (sub_1800E53F5.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800D4664(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Utils::ICancellationToken::`vftable';
  *a1 = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
