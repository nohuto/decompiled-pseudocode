/*
 * XREFs of ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x14004B7F4
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1400C94D0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1400C9940 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheStorePolarity @ 0x14004D460 (ACPIInternalInterruptPolarityCacheStorePolarity.c)
 */

__int64 __fastcall ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned int i; // ebp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 result; // rax

  if ( gAcpiHonorBiosPolarities )
  {
    v4 = a2 + 32;
    for ( i = 0; i < *(_DWORD *)(a2 + 28); ++i )
    {
      v6 = v4 + 8;
      v7 = v4 + 8 + 32LL * *(unsigned int *)(v4 + 4);
      while ( v6 < v7 )
      {
        if ( *(_BYTE *)(v6 + 1) == 2 )
        {
          result = ACPIInternalInterruptPolarityCacheStorePolarity(
                     a1,
                     *(unsigned int *)(v6 + 12),
                     *(unsigned int *)(v6 + 16));
          if ( (int)result < 0 )
            return result;
        }
        v6 += 32LL;
      }
      v4 += 32LL * *(unsigned int *)(v4 + 4) + 8;
    }
  }
  return 0LL;
}
