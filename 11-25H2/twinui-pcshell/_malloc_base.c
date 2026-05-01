/*
 * XREFs of _malloc_base @ 0x1802D2EF2
 * Callers:
 *     __tlregdtor @ 0x1802DAFAC (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
