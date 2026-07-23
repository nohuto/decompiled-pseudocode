/*
 * XREFs of __asan_set_shadow_f2 @ 0x1405E26D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall _asan_set_shadow_f2(void *a1, size_t a2)
{
  return memset_0(a1, 242, a2);
}
