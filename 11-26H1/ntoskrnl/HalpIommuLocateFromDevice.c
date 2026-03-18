/*
 * XREFs of HalpIommuLocateFromDevice @ 0x1407823E0
 * Callers:
 *     HalpIommuDmaRemappingCapable @ 0x14058D730 (HalpIommuDmaRemappingCapable.c)
 *     IommuCreateAtsDevice @ 0x14059B6F0 (IommuCreateAtsDevice.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1407824AC (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuLocateFromDevice(__int64 a1, ULONG_PTR **a2)
{
  ULONG_PTR *v2; // rbx
  __int64 result; // rax
  ULONG_PTR *v6; // rdi
  ULONG_PTR *i; // rbx

  v2 = (ULONG_PTR *)HalpIommuList;
  result = 3221226021LL;
  v6 = 0LL;
  while ( v2 != &HalpIommuList )
  {
    v6 = v2;
    if ( v2[26] )
    {
      result = guard_dispatch_icall_no_overrides(v2[2], a1);
      if ( (int)result >= 0 )
        break;
    }
    v2 = (ULONG_PTR *)*v2;
  }
  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    if ( (int)result >= 0 )
      goto LABEL_13;
    v6 = i;
    if ( i[26] )
    {
      result = guard_dispatch_icall_no_overrides(i[2], a1);
      if ( (int)result >= 0 )
        goto LABEL_13;
    }
  }
  if ( (int)result < 0 )
    return result;
LABEL_13:
  *a2 = v6;
  return result;
}
