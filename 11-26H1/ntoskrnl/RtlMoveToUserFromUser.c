/*
 * XREFs of RtlMoveToUserFromUser @ 0x140781FA8
 * Callers:
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     RtlMoveToUserFromUser$thunk$1901439844982784537 @ 0x140C67060 (RtlMoveToUserFromUser$thunk$1901439844982784537.c)
 * Callees:
 *     RtlMoveVolatileMemory @ 0x140737C60 (RtlMoveVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

void *__fastcall RtlMoveToUserFromUser(void *a1, void *Src, size_t Size)
{
  ProbeForRead(Src, Size, 1u);
  ProbeForRead(a1, Size, 1u);
  return RtlMoveVolatileMemory(a1, Src, Size);
}
