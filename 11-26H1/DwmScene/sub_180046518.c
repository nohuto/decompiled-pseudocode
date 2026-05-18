/*
 * XREFs of sub_180046518 @ 0x180046518
 * Callers:
 *     sub_180046558 @ 0x180046558 (sub_180046558.c)
 * Callees:
 *     sub_180081C90 @ 0x180081C90 (sub_180081C90.c)
 */

void **__fastcall sub_180046518(_QWORD *a1)
{
  void **result; // rax

  sub_180081C90(a1, 8LL, 6LL);
  result = &Spectre::Engine::IndexBuffer::`vftable';
  *a1 = &Spectre::Engine::IndexBuffer::`vftable';
  return result;
}
