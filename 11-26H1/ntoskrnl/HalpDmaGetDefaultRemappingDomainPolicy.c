/*
 * XREFs of HalpDmaGetDefaultRemappingDomainPolicy @ 0x140578DC0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14078041C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1404C55D0 (HalpGetCpuInfo.c)
 *     IommupHvIsStage1DmarCompatible @ 0x14059E728 (IommupHvIsStage1DmarCompatible.c)
 */

__int64 __fastcall HalpDmaGetDefaultRemappingDomainPolicy(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 0;
  if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, &v4) || v4 != 2 )
    return 0LL;
  if ( !HalpHvIommu )
    return 1LL;
  LOBYTE(v2) = (unsigned __int8)IommupHvIsStage1DmarCompatible(a1, 0LL) != 0;
  return v2;
}
