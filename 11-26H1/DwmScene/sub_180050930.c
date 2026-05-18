/*
 * XREFs of sub_180050930 @ 0x180050930
 * Callers:
 *     sub_180051B50 @ 0x180051B50 (sub_180051B50.c)
 * Callees:
 *     sub_180051F84 @ 0x180051F84 (sub_180051F84.c)
 */

void **__fastcall sub_180050930(_QWORD *a1)
{
  void **result; // rax

  sub_180051F84();
  result = &Spectre::Engine::SamplerGeneric::`vftable';
  *a1 = &Spectre::Engine::SamplerGeneric::`vftable';
  return result;
}
