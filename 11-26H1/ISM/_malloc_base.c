/*
 * XREFs of _malloc_base @ 0x18009AABE
 * Callers:
 *     __tlregdtor @ 0x18009CB2C (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
