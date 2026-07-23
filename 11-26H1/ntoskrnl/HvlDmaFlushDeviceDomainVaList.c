/*
 * XREFs of HvlDmaFlushDeviceDomainVaList @ 0x1405BED20
 * Callers:
 *     <none>
 * Callees:
 *     HvlDmaFlushDeviceDomain @ 0x1405BEC90 (HvlDmaFlushDeviceDomain.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x1405C0FD4 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405C10B4 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 */

__int64 __fastcall HvlDmaFlushDeviceDomainVaList(int *a1, unsigned int a2)
{
  if ( a2 - 1 > 0x1FB )
    return HvlDmaFlushDeviceDomain(a1);
  if ( a2 <= 0xA && (HvlEnlightenments & 0x80) != 0 )
    return HvlpDmaFastFlushDeviceDomainVaList();
  return HvlpDmaSlowFlushDeviceDomainVaList();
}
