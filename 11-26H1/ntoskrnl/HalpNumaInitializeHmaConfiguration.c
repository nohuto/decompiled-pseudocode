/*
 * XREFs of HalpNumaInitializeHmaConfiguration @ 0x140CB1974
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140CB3904 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140342AEC (HalpAcpiGetTable.c)
 *     HalpMmAllocateMemoryInternal @ 0x14057DCF0 (HalpMmAllocateMemoryInternal.c)
 *     HalpNumaParseHmat @ 0x140CB22A0 (HalpNumaParseHmat.c)
 */

__int64 __fastcall HalpNumaInitializeHmaConfiguration(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  result = HalpAcpiGetTable(a1, 1413565768, 0, 0);
  HalpAcpiHmat = result;
  if ( result )
  {
    if ( HalpAcpiSrat )
    {
      result = HalpNumaParseHmat(v2, 0LL, 0LL, &v5);
      if ( (int)result >= 0 )
      {
        result = HalpMmAllocateMemoryInternal(v5, 1u);
        v4 = result;
        if ( result )
        {
          result = HalpNumaParseHmat(v3, result, v5, &v5);
          if ( (int)result >= 0 )
            HalpHmaConfig = v4;
        }
      }
    }
  }
  return result;
}
