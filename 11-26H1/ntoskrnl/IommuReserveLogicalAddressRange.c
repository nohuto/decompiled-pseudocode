/*
 * XREFs of IommuReserveLogicalAddressRange @ 0x1405A1F80
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x140474984 (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x14047578C (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuDomainGetLogicalAddressRange @ 0x14049F2BC (HalpIommuDomainGetLogicalAddressRange.c)
 */

__int64 __fastcall IommuReserveLogicalAddressRange(
        ULONG_PTR a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 *v6; // r15
  int v11; // eax
  int v12; // edi
  __int64 v13; // rsi
  int LogicalAddressRange; // eax
  __int64 v15; // rcx

  v6 = a6;
  a6 = 0LL;
  *v6 = 0LL;
  if ( (a2 & 0xFFF) != 0 || !a2 )
    return (unsigned int)-1073741584;
  v11 = *(_DWORD *)(a1 + 8);
  if ( !v11 || v11 == 3 )
  {
    v13 = HalpMmAllocCtxAlloc(a1, 32LL);
    if ( v13 )
    {
      LogicalAddressRange = HalpIommuDomainGetLogicalAddressRange(a1, a3, a2, a4, a5, &a6);
      v12 = LogicalAddressRange;
      if ( LogicalAddressRange >= 0 )
      {
        v12 = HalpIommuDomainMapLogicalRange(a1, 0LL, 0LL, a2, (ULONG_PTR)a6);
        if ( v12 >= 0 )
        {
          *(_QWORD *)(v13 + 16) = a1;
          *(_DWORD *)(v13 + 24) = 0;
          *(_QWORD *)v13 = a6;
          *(_QWORD *)(v13 + 8) = a2;
          *v6 = v13;
          return (unsigned int)v12;
        }
        HalpIommuDomainFreeLogicalAddressRange(a1, (__int64)a6);
      }
      else if ( LogicalAddressRange == -1073741584 || LogicalAddressRange == -1073741811 )
      {
        v12 = -1073741583;
      }
      HalpMmAllocCtxFree(v15, v13);
      return (unsigned int)v12;
    }
    return (unsigned int)-1073741670;
  }
  else
  {
    return (unsigned int)-1073741585;
  }
}
