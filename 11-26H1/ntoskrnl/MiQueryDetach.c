/*
 * XREFs of MiQueryDetach @ 0x140923A4C
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14040E930 (MiGetWorkingSetInfo.c)
 *     MiQueryImageExtensionInformation @ 0x1404DF9B0 (MiQueryImageExtensionInformation.c)
 *     MiQueryMappedFileName @ 0x1409233DC (MiQueryMappedFileName.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 */

LONG_PTR __fastcall MiQueryDetach(__int64 a1)
{
  ULONG_PTR v2; // rcx
  LONG_PTR result; // rax

  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    MiUnlockAndDereferenceVadShared(v2);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  result = *(unsigned int *)(a1 + 72);
  if ( (result & 2) != 0 )
  {
    if ( (result & 1) != 0 )
    {
      KiUnstackDetachProcess(a1 + 88, 0);
      *(_DWORD *)(a1 + 72) &= ~1u;
    }
    return ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 80), 0x6D566D4Du);
  }
  return result;
}
