/*
 * XREFs of RtlMoveToUserFromUser @ 0x14077F4A8
 * Callers:
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 *     RtlMoveToUserFromUser$thunk$1901439844982784537 @ 0x140C61060 (RtlMoveToUserFromUser$thunk$1901439844982784537.c)
 * Callees:
 *     RtlMoveVolatileMemory @ 0x140733090 (RtlMoveVolatileMemory.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

void *__fastcall RtlMoveToUserFromUser(void *a1, void *Src, size_t Size)
{
  ProbeForRead(Src, Size, 1u);
  ProbeForRead(a1, Size, 1u);
  return RtlMoveVolatileMemory(a1, Src, Size);
}
