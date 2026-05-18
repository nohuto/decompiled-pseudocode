/*
 * XREFs of sub_180025C28 @ 0x180025C28
 * Callers:
 *     sub_180025C5C @ 0x180025C5C (sub_180025C5C.c)
 *     sub_180025F90 @ 0x180025F90 (sub_180025F90.c)
 * Callees:
 *     sub_180025974 @ 0x180025974 (sub_180025974.c)
 *     sub_1800D5408 @ 0x1800D5408 (sub_1800D5408.c)
 */

void **__fastcall sub_180025C28(__int64 a1)
{
  void **result; // rax

  sub_180025974((void **)(a1 + 24));
  sub_1800D5408(a1 + 8);
  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
