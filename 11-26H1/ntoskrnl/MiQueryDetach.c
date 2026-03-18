/*
 * XREFs of MiQueryDetach @ 0x140920308
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14040F210 (MiGetWorkingSetInfo.c)
 *     MiQueryImageExtensionInformation @ 0x1404E6410 (MiQueryImageExtensionInformation.c)
 *     MmQueryVirtualMemory @ 0x14091F870 (MmQueryVirtualMemory.c)
 *     MiQueryReturnResults @ 0x140920250 (MiQueryReturnResults.c)
 *     MiQueryMappedFileName @ 0x1409FE7DC (MiQueryMappedFileName.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027DA30 (MiUnlockAndDereferenceVadShared.c)
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
