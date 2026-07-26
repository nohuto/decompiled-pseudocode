/*
 * XREFs of NetDmaIsr @ 0x1400B42F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NetDmaIsr(PVOID NetDmaChannelHandle, LARGE_INTEGER DmaDescriptor, PULONG pCpuNumber)
{
  *pCpuNumber = 0;
}
