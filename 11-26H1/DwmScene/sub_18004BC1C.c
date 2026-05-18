/*
 * XREFs of sub_18004BC1C @ 0x18004BC1C
 * Callers:
 *     sub_18004C874 @ 0x18004C874 (sub_18004C874.c)
 * Callees:
 *     sub_180083810 @ 0x180083810 (sub_180083810.c)
 */

void **__fastcall sub_18004BC1C(_QWORD *a1)
{
  void **result; // rax

  sub_180083810(a1, 3LL);
  result = &Spectre::Engine::DomainShader::`vftable';
  *a1 = &Spectre::Engine::DomainShader::`vftable';
  return result;
}
