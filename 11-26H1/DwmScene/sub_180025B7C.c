/*
 * XREFs of sub_180025B7C @ 0x180025B7C
 * Callers:
 *     sub_1800D8F17 @ 0x1800D8F17 (sub_1800D8F17.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180025B7C(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
