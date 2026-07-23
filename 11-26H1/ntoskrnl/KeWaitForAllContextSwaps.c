/*
 * XREFs of KeWaitForAllContextSwaps @ 0x140530818
 * Callers:
 *     MmOutSwapProcess @ 0x140494118 (MmOutSwapProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeWaitForAllContextSwaps(__int64 a1)
{
  unsigned __int16 *v2; // r8
  unsigned __int16 i; // dx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
LABEL_2:
  v2 = *(unsigned __int16 **)(a1 + 128);
  for ( i = 0; i < *v2; ++i )
  {
    result = i;
    if ( *(_QWORD *)&v2[4 * i + 4] )
    {
      result = KeYieldProcessorEx(&v5);
      goto LABEL_2;
    }
  }
  return result;
}
