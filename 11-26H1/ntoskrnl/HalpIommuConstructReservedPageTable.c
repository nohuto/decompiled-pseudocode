/*
 * XREFs of HalpIommuConstructReservedPageTable @ 0x140BF1C40
 * Callers:
 *     HalpIommuProcessReservedDomains @ 0x140BF1D4C (HalpIommuProcessReservedDomains.c)
 * Callees:
 *     HalpIommuMapLogicalRange @ 0x1404757DC (HalpIommuMapLogicalRange.c)
 *     HalpIommuGetPageTableType @ 0x140590198 (HalpIommuGetPageTableType.c)
 *     HalpIommuCreateDmarPageTable @ 0x1405A30AC (HalpIommuCreateDmarPageTable.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405A331C (HalpIommuGetDmarptRootAddress.c)
 */

__int64 __fastcall HalpIommuConstructReservedPageTable(__int64 a1, PHYSICAL_ADDRESS *a2, unsigned int a3)
{
  int PageTableType; // ecx
  __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 i; // rdi
  signed __int64 QuadPart; // rcx
  signed __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]
  unsigned int v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0;
  if ( HalpHvIommu || !a2[4].LowPart )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PageTableType = HalpIommuGetPageTableType(0, (int *)&v15);
    if ( PageTableType >= 0 )
    {
      v8 = (__int64 *)&a2[1];
      PageTableType = HalpIommuCreateDmarPageTable(v15, a3, a3, v7, v14, a1, (__int64 *)&a2[1]);
      if ( PageTableType >= 0 )
      {
        PageTableType = HalpIommuGetDmarptRootAddress(*v8, a3, a2 + 2);
        if ( PageTableType >= 0 )
        {
          for ( i = 0LL; (unsigned int)i < a2[4].LowPart; i = (unsigned int)(i + 1) )
          {
            if ( !LOBYTE(a2[3 * i + 7].LowPart) )
            {
              if ( (a2[3 * i + 5].LowPart & 0xFFF) != 0 )
                return (unsigned int)-1073741811;
              QuadPart = a2[3 * i + 5].QuadPart;
              v11 = a2[3 * i + 6].QuadPart;
              if ( v11 <= QuadPart )
                return (unsigned int)-1073741811;
              v12 = v11 - QuadPart + 1;
              if ( (v12 & 0xFFF) != 0 )
                return (unsigned int)-1073741811;
              PageTableType = HalpIommuMapLogicalRange(a1, *v8, 3, a2[3 * i + 5].QuadPart, v12, QuadPart);
              if ( PageTableType < 0 )
                return (unsigned int)PageTableType;
            }
          }
        }
      }
    }
  }
  return (unsigned int)PageTableType;
}
