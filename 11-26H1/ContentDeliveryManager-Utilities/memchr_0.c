/*
 * XREFs of memchr_0 @ 0x180021D1A
 * Callers:
 *     _Stoulx @ 0x180004C5C (_Stoulx.c)
 *     _Stoullx @ 0x1800057BC (_Stoullx.c)
 *     _Stoxflt @ 0x18000C048 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
