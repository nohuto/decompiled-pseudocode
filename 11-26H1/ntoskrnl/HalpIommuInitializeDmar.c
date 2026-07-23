/*
 * XREFs of HalpIommuInitializeDmar @ 0x1405903A8
 * Callers:
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpIommuGetHardwareDomain @ 0x14050D954 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuAllocateDmaDomain @ 0x14058F814 (HalpIommuAllocateDmaDomain.c)
 */

__int64 HalpIommuInitializeDmar()
{
  __int64 result; // rax
  unsigned int v1; // ecx
  __int64 i; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( HalpHvIommu )
    return 0LL;
  result = HalpIommuAllocateDmaDomain(1LL, 0x8000000000000000uLL, 0LL, 0LL, (ULONG_PTR *)&HalpIommuBypassDomain);
  v1 = result;
  if ( (int)result >= 0 )
  {
    for ( i = HalpIommuList; (ULONG_PTR *)i != &HalpIommuList; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 464) & 0x180) != 0 )
      {
        result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, i, 1, 0, 0, &v3);
        v1 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    return v1;
  }
  return result;
}
