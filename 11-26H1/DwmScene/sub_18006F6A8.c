/*
 * XREFs of sub_18006F6A8 @ 0x18006F6A8
 * Callers:
 *     sub_1800DCD25 @ 0x1800DCD25 (sub_1800DCD25.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18006F6A8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  *a1 = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  return result;
}
