/*
 * XREFs of RaidCreateDeferredQueue @ 0x14007213C
 * Callers:
 *     RaidCreateAdapter @ 0x14006C434 (RaidCreateAdapter.c)
 *     CreateNvmeAdapter @ 0x1400D162C (CreateNvmeAdapter.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall RaidCreateDeferredQueue(union _SLIST_HEADER *a1)
{
  memset_0(a1, 0, 0x80uLL);
  InitializeSListHead(a1 + 5);
  InitializeSListHead(a1 + 6);
}
