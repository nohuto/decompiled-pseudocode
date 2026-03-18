/*
 * XREFs of HalpIommuFlushDomainTbs @ 0x14047B168
 * Callers:
 *     HalpIommuDomainUnmapIdentityRange @ 0x14047AE04 (HalpIommuDomainUnmapIdentityRange.c)
 *     IommuUnmapLogicalRange @ 0x14047AF50 (IommuUnmapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x14047B04C (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuDomainMapIdentityRange @ 0x1404A9B54 (HalpIommuDomainMapIdentityRange.c)
 * Callees:
 *     HalpIommuFlushDmaDomain @ 0x14047B404 (HalpIommuFlushDmaDomain.c)
 *     IommupHvFlushDomainTbs @ 0x14047BC18 (IommupHvFlushDomainTbs.c)
 */

__int64 __fastcall HalpIommuFlushDomainTbs(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx

  if ( HalpHvIommu )
  {
    IommupHvFlushDomainTbs();
  }
  else
  {
    v4 = (a3 + (unsigned __int64)(a2 & 0xFFF) + 4095) >> 12;
    v5 = a2 & 0xFFFFFFFFFFFFF000uLL;
    while ( v4 )
    {
      v6 = 1024LL;
      if ( v4 < 0x400 )
        v6 = v4;
      HalpIommuFlushDmaDomain(a1, (v6 - 1) ^ (v5 ^ (v6 - 1)) & 0xFFFFFFFFFFFFFC00uLL);
      v4 -= v6;
      v5 += v6 << 12;
    }
  }
  return 0LL;
}
