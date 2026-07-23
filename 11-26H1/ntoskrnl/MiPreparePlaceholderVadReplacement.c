/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x140AED468
 * Callers:
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 * Callees:
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 *     PerfInfoLogVirtualFree @ 0x140A06DC0 (PerfInfoLogVirtualFree.c)
 */

void __fastcall MiPreparePlaceholderVadReplacement(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 232));
  MiReferenceVad(BugCheckParameter2);
  MiRemoveVad(BugCheckParameter2, 0, 0LL);
  *(_QWORD *)(a2 + 552) += ((*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32))
                          - (*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32))
                          - 1) << 12;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
    PerfInfoLogVirtualFree(
      (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32)) << 12,
      ((*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32))
     - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32))
     + 1) << 12,
      a2,
      0x8000);
}
