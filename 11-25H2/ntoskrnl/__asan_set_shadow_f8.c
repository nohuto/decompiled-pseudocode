/*
 * XREFs of __asan_set_shadow_f8 @ 0x1405A8C50
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall _asan_set_shadow_f8(void *a1, size_t a2)
{
  return memset_0(a1, 248, a2);
}
