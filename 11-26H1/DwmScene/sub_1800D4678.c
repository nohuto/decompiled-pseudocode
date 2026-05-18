/*
 * XREFs of sub_1800D4678 @ 0x1800D4678
 * Callers:
 *     sub_1800D4730 @ 0x1800D4730 (sub_1800D4730.c)
 * Callees:
 *     sub_1800D2A48 @ 0x1800D2A48 (sub_1800D2A48.c)
 */

void **__fastcall sub_1800D4678(__int64 a1)
{
  void **result; // rax

  sub_1800D2A48((void **)(a1 + 96));
  result = &Spectre::Utils::ICancellationToken::`vftable';
  *(_QWORD *)a1 = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
