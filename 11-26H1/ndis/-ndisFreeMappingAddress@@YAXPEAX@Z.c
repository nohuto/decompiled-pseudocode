/*
 * XREFs of ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1400C7E18
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x140144614 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMappingAddress(void *a1)
{
  MmFreeMappingAddress(a1, 0x6C53444Eu);
}
