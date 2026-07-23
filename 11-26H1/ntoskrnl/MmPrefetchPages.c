/*
 * XREFs of MmPrefetchPages @ 0x140A5AD70
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
