/*
 * XREFs of memcpy_0 @ 0x1800032A8
 * Callers:
 *     memcpy_s @ 0x180006CEC (memcpy_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
