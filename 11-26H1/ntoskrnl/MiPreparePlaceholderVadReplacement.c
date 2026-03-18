/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x140AEA978
 * Callers:
 *     MiReserveUserMemoryInsertVad @ 0x14095BBAC (MiReserveUserMemoryInsertVad.c)
 *     MiMapViewOfDataSection @ 0x1409C47B0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiReferenceVad @ 0x14027E890 (MiReferenceVad.c)
 *     MiRemoveVad @ 0x140455D20 (MiRemoveVad.c)
 *     PerfInfoLogVirtualFree @ 0x140961510 (PerfInfoLogVirtualFree.c)
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
