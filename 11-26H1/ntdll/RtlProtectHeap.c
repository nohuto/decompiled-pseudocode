/*
 * XREFs of RtlProtectHeap @ 0x180076820
 * Callers:
 *     RtlpCallVectoredHandlers @ 0x180037510 (RtlpCallVectoredHandlers.c)
 *     RtlpAddVectoredHandler @ 0x180077074 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x1800788F0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800796A0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CA290 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x1800D7FF0 (RtlDeleteFunctionTable.c)
 *     RtlpRemoveVectoredHandler @ 0x1800DFA80 (RtlpRemoveVectoredHandler.c)
 *     RtlAddFunctionTable @ 0x1800E3560 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800EC760 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F8890 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlpHpHeapValidateProtection @ 0x18006ED00 (RtlpHpHeapValidateProtection.c)
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x1800762FC (RtlpAcquireHeapListLock.c)
 *     RtlpProtectHeap @ 0x1800768F0 (RtlpProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x180076AF0 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapProtect @ 0x180157FA0 (RtlpHpHeapProtect.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // eax
  int v5; // ecx
  unsigned int v6; // edx

  if ( HeapHandle != NtCurrentPeb()->ProcessHeap
    && (*((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0) )
  {
    RtlpAcquireHeapListLock();
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    {
      v6 = 64;
      if ( (*((_DWORD *)HeapHandle + 5) & 0x40000000) == 0 )
        v6 = 4;
      HeapProtection = RtlpHpHeapValidateProtection(
                         HeapHandle,
                         v6,
                         (unsigned __int8)BYTE1(*(_QWORD *)HeapHandle),
                         *((_QWORD *)HeapHandle + 1));
    }
    else
    {
      HeapProtection = RtlpGetHeapProtection(HeapHandle);
    }
    if ( MakeReadOnly )
    {
      v5 = 2;
      if ( HeapProtection == 64 )
        v5 = 32;
      HeapProtection = v5;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      RtlpHpHeapProtect(HeapHandle, HeapProtection);
    else
      RtlpProtectHeap(HeapHandle, HeapProtection);
    RtlpReleaseHeapListLock(0);
  }
}
