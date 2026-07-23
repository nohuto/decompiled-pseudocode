/*
 * XREFs of HalpIommuDmaRemappingCapable @ 0x14058FEB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404ED060 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuGetAcpiDeviceMapCount @ 0x140590134 (HalpIommuGetAcpiDeviceMapCount.c)
 *     IommupHvIsDmarStageCompatible @ 0x1405A0E84 (IommupHvIsDmarStageCompatible.c)
 *     HalpIommuLocateFromDevice @ 0x140784EE0 (HalpIommuLocateFromDevice.c)
 */

char __fastcall HalpIommuDmaRemappingCapable(__int128 *a1, unsigned int *a2)
{
  char v2; // bl
  __int128 *v5; // rbp
  int v6; // eax
  unsigned int AcpiDeviceMapCount; // eax
  __int64 v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v5 = a1;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
    *a2 = 0;
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 5 )
    return 1;
  if ( v6 == 2 )
  {
    if ( (int)HalpIommuQueryAcpiDeviceMapping((__int64)a1, (__int64)&v10) < 0 )
      return 0;
    v5 = &v10;
    AcpiDeviceMapCount = HalpIommuGetAcpiDeviceMapCount(a1);
    if ( a2 )
      *a2 = AcpiDeviceMapCount;
    if ( AcpiDeviceMapCount > 1 )
      return 0;
  }
  else if ( v6 != 1 )
  {
    return 0;
  }
  v12 = 0LL;
  if ( HalpHvIommu )
  {
    if ( !(unsigned __int8)IommupHvIsDmarStageCompatible(v5, 0LL) )
    {
      LOBYTE(v9) = 1;
      if ( !(unsigned __int8)IommupHvIsDmarStageCompatible(v5, v9) )
        return v2;
    }
  }
  else if ( (int)HalpIommuLocateFromDevice(v5, &v12) < 0 || !v12 || (*(_DWORD *)(v12 + 464) & 0x180) == 0 )
  {
    return v2;
  }
  return 1;
}
