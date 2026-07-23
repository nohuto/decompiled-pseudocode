/*
 * XREFs of __asan_set_shadow_f3 @ 0x1405E26F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall _asan_set_shadow_f3(void *a1, size_t a2)
{
  return memset_0(a1, 243, a2);
}
