/*
 * XREFs of sub_180028E84 @ 0x180028E84
 * Callers:
 *     sub_1800DA5C8 @ 0x1800DA5C8 (sub_1800DA5C8.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180028E84(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
