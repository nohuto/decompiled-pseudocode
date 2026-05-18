/*
 * XREFs of sub_180075AE0 @ 0x180075AE0
 * Callers:
 *     sub_180075B50 @ 0x180075B50 (sub_180075B50.c)
 * Callees:
 *     sub_18002E290 @ 0x18002E290 (sub_18002E290.c)
 */

void **__fastcall sub_180075AE0(__int64 a1)
{
  void **result; // rax

  sub_18002E290((void **)(a1 + 16), a1 + 16);
  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
