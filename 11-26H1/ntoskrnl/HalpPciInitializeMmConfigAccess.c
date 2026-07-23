/*
 * XREFs of HalpPciInitializeMmConfigAccess @ 0x140CB91B0
 * Callers:
 *     HalpPciInitSystem @ 0x140BF15C0 (HalpPciInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalpPciInitializeMmConfigAccess(__int64 a1)
{
  __int64 Table; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  unsigned int v5; // edx
  char v6; // r11
  unsigned int i; // r10d

  if ( !HalpAvoidMmConfigAccessMethod )
  {
    Table = HalpAcpiGetTable(a1, 1195787085, 0, 0);
    v2 = Table;
    if ( Table )
    {
      v3 = *(unsigned int *)(Table + 4);
      if ( (unsigned int)v3 < 0x3C )
        return 3221225473LL;
      HalpPciMcfgTable = v2;
      HalpPciMcfgTableCount = (unsigned __int64)(v3 - 44) >> 4;
      v5 = 0;
      HalpPciMcfgTableSegments = 0;
      while ( v5 < HalpPciMcfgTableCount )
      {
        v6 = 0;
        for ( i = 0; i < v5; ++i )
        {
          if ( *(_WORD *)(v2 + 16LL * i + 52) == *(_WORD *)(v2 + 16LL * v5 + 52) )
          {
            if ( *(_QWORD *)(v2 + 16LL * i + 44) != *(_QWORD *)(v2 + 16LL * v5 + 44)
              && !HalpPciMultiBaseAddressSegmentAllowed
              || *(_BYTE *)(v2 + 16LL * i + 54) <= *(_BYTE *)(v2 + 16LL * v5 + 55)
              && *(_BYTE *)(v2 + 16LL * i + 55) >= *(_BYTE *)(v2 + 16LL * v5 + 54) )
            {
              result = 3221225473LL;
              HalpPciMcfgTable = 0LL;
              HalpPciMcfgTableCount = 0;
              HalpPciMcfgTableSegments = 0;
              return result;
            }
            v6 = 1;
          }
        }
        if ( !v6 )
          ++HalpPciMcfgTableSegments;
        ++v5;
      }
      off_140E00CC0[0] = (__int64 (__fastcall *)())HalpPciGetDeviceLocationFromPhysicalAddress;
    }
  }
  return 0LL;
}
