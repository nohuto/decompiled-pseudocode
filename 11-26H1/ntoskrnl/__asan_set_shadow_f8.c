/*
 * XREFs of __asan_set_shadow_f8 @ 0x1405DFDC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall _asan_set_shadow_f8(void *a1, size_t a2)
{
  return memset_0(a1, 248, a2);
}
