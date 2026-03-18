/*
 * XREFs of ProcessorpSelectProcessorsInCluster @ 0x1400BD710
 * Callers:
 *     ProcessorpSelectProcessorSetFromClusters @ 0x1400D226C (ProcessorpSelectProcessorSetFromClusters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpSelectProcessorsInCluster(__int16 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  ULONGLONG v8; // rdx
  __int64 v9; // rbp
  int v10; // ecx

  if ( *(_DWORD *)(a3 + 36) == 1 || a1 == 2 )
  {
    do
    {
      v8 = *(_QWORD *)(a4 + 24);
      v9 = *(unsigned int *)(a4 + 40);
      v10 = *(_DWORD *)(a4 + 40);
      v7 = 1LL << v10;
      if ( (v8 & ~(2 * (1LL << v10) - 1)) != 0 )
        v8 &= ~(2 * (1LL << v10) - 1);
      *(_DWORD *)(a4 + 40) = RtlFindLeastSignificantBit(v8);
    }
    while ( a2 && (v7 & *(_QWORD *)(a4 + 32)) == 0 );
    *(_QWORD *)(a5 + 16) = v9;
  }
  else
  {
    *(_QWORD *)(a5 + 16) = *(unsigned int *)(a4 + 16);
    return *(_QWORD *)((a2 != 0 ? 8 : 0) + a4 + 24);
  }
  return v7;
}
