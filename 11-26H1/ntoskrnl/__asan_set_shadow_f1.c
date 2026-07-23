/*
 * XREFs of __asan_set_shadow_f1 @ 0x1405E26B0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall _asan_set_shadow_f1(void *a1, size_t a2)
{
  return memset_0(a1, 241, a2);
}
