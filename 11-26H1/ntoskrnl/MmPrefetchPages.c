/*
 * XREFs of MmPrefetchPages @ 0x140A51A80
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x140A51A98 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
