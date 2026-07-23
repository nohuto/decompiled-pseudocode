/*
 * XREFs of IommuUnmapLogicalRange @ 0x1404748C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x140474984 (HalpIommuDomainFreeLogicalAddressRange.c)
 *     IommupHvUnmapDeviceLogicalRange @ 0x140474A70 (IommupHvUnmapDeviceLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x140474AD8 (HalpIommuFlushDomainTbs.c)
 *     HalpIommuUnmapLogicalRange @ 0x140474B78 (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall IommuUnmapLogicalRange(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  int v3; // eax
  unsigned __int64 v6; // r8
  int v7; // ebx
  int v9; // eax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 && v3 != 3 )
  {
    return (unsigned int)-1073741585;
  }
  else if ( (a2 & 0xFFF) != 0 )
  {
    return (unsigned int)-1073741584;
  }
  else
  {
    v6 = a3 << 12;
    v10 = v6;
    if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    {
      v7 = HalpIommuUnmapLogicalRange(*(_QWORD *)(a1 + 40), &v10, a2);
      v9 = HalpIommuFlushDomainTbs(a1, a2, v10);
      if ( v7 >= 0 )
        v7 = v9;
    }
    else
    {
      v11 = v6 >> 12;
      v7 = IommupHvUnmapDeviceLogicalRange(a1, a2);
    }
    if ( v7 >= 0 )
      return (unsigned int)HalpIommuDomainFreeLogicalAddressRange(a1, a2);
  }
  return (unsigned int)v7;
}
