/*
 * XREFs of IommuFlushDomainVaList @ 0x140789B60
 * Callers:
 *     <none>
 * Callees:
 *     IommupHvFlushDeviceDomainVaList @ 0x1405A0B38 (IommupHvFlushDeviceDomainVaList.c)
 */

__int64 __fastcall IommuFlushDomainVaList(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( !HalpHvIommu )
    return 3221225474LL;
  LOBYTE(a2) = *(_BYTE *)(a1 + 52);
  return IommupHvFlushDeviceDomainVaList(*(_DWORD *)(a1 + 48), a2, a3);
}
