/*
 * XREFs of RtlMoveMemory @ 0x1404E1030
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void __stdcall RtlMoveMemory(void *a1, const void *Source, SIZE_T Length)
{
  memmove(a1, Source, Length);
}
