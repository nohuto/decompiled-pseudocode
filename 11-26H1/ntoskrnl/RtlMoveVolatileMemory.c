/*
 * XREFs of RtlMoveVolatileMemory @ 0x140737C60
 * Callers:
 *     RtlMoveToUserFromUser @ 0x140781FA8 (RtlMoveToUserFromUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlMoveVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
