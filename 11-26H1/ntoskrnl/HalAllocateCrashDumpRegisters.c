/*
 * XREFs of HalAllocateCrashDumpRegisters @ 0x14057C1C0
 * Callers:
 *     DifHalAllocateCrashDumpRegistersWrapper @ 0x1406597A0 (DifHalAllocateCrashDumpRegistersWrapper.c)
 * Callees:
 *     HalpDmaExtractFromVerifierShadowAdapter @ 0x1404E95F4 (HalpDmaExtractFromVerifierShadowAdapter.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14058B44C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 */

PVOID __stdcall HalAllocateCrashDumpRegisters(PADAPTER_OBJECT AdapterObject, PULONG NumberOfMapRegisters)
{
  __int64 v3; // rax
  _DWORD *v4; // rdx
  ULONG v5; // edi
  __int64 v6; // rbx
  unsigned int v7; // edx
  PVOID result; // rax
  __int64 MapRegistersAtHighLevel; // rax
  int v10; // edx
  __int64 v11; // rcx

  v3 = HalpDmaExtractFromVerifierShadowAdapter((__int64)AdapterObject);
  v5 = 0;
  v6 = v3;
  if ( *(_BYTE *)(v3 + 440) || !*(_BYTE *)(v3 + 445) )
  {
    if ( HalpDmaHibernateRegisterPhase == 1 )
    {
      v7 = HalpDmaHibernatePhase1RegisterSetIndex;
      *NumberOfMapRegisters = *((_DWORD *)&HalpDmaHibernateRegisterSets
                              + 4 * (unsigned int)HalpDmaHibernatePhase1RegisterSetIndex
                              + 2);
      result = (PVOID)*((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * v7);
      *(_QWORD *)(v6 + 240) = result;
      *(_DWORD *)(v6 + 248) = *NumberOfMapRegisters;
      HalpDmaHibernatePhase1RegisterSetIndex = v7 + 1;
      return result;
    }
    if ( *v4 > *(_DWORD *)(v3 + 232) )
    {
      *(_DWORD *)(v3 + 248) = 0;
      result = 0LL;
      *v4 = 0;
      return result;
    }
    MapRegistersAtHighLevel = HalpDmaAllocateMapRegistersAtHighLevel(v3);
    *(_QWORD *)(v6 + 240) = MapRegistersAtHighLevel;
    if ( MapRegistersAtHighLevel )
    {
      v10 = HalpDmaHibernateRegisterSetIndex;
      if ( (unsigned int)HalpDmaHibernateRegisterSetIndex < 4 )
      {
        v11 = 2LL * (unsigned int)HalpDmaHibernateRegisterSetIndex;
        *((_QWORD *)&HalpDmaHibernateRegisterSets + v11) = MapRegistersAtHighLevel;
        *((_DWORD *)&HalpDmaHibernateRegisterSets + 2 * v11 + 2) = *NumberOfMapRegisters;
        HalpDmaHibernateRegisterSetIndex = v10 + 1;
      }
    }
    else
    {
      *NumberOfMapRegisters = 0;
    }
    v5 = *NumberOfMapRegisters;
  }
  else
  {
    *(_QWORD *)(v3 + 240) = 0LL;
  }
  *(_DWORD *)(v6 + 248) = v5;
  result = *(PVOID *)(v6 + 240);
  HalpDmaHibernateAdapter = (PVOID)v6;
  return result;
}
