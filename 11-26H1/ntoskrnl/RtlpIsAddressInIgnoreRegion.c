/*
 * XREFs of RtlpIsAddressInIgnoreRegion @ 0x140534D28
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140504A94 (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsAddressInIgnoreRegion(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 i; // r10
  unsigned int v6; // ecx

  for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
  {
    v6 = *(_DWORD *)(a2 + 4 * i);
    if ( a1 >= v6 && a1 < *(_DWORD *)(a3 + 4 * i) + v6 )
      return 1;
  }
  return 0;
}
