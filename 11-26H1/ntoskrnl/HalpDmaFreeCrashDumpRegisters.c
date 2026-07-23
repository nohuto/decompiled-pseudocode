/*
 * XREFs of HalpDmaFreeCrashDumpRegisters @ 0x14057CA10
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 */

__int64 __fastcall HalpDmaFreeCrashDumpRegisters(int a1)
{
  unsigned int v1; // edi
  int i; // ebx
  __int64 result; // rax

  v1 = 0;
  for ( i = 1; v1 < HalpDmaHibernateRegisterSetIndex; ++v1 )
  {
    result = *((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * v1);
    *(_QWORD *)(result + 56) = result;
    if ( a1 )
      result = HalpDmaFreeMapRegisters(
                 (__int64)HalpDmaHibernateAdapter,
                 *((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * v1),
                 *((_DWORD *)&HalpDmaHibernateRegisterSets + 4 * v1 + 2));
  }
  if ( a1 )
  {
    HalpDmaHibernateAdapter = 0LL;
    i = 0;
    HalpDmaHibernateRegisterSetIndex = 0;
    HalpDmaHibernatePhase1RegisterSetIndex = 0;
  }
  HalpDmaHibernateRegisterPhase = i;
  return result;
}
