/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x140474D78
 * Callers:
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x140474D10 (MiFreeExcessSegments.c)
 *     MiComputeUnusedSegmentReduction @ 0x1404C475C (MiComputeUnusedSegmentReduction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiShouldTrimUnusedSegments(ULONG *a1)
{
  unsigned int v1; // r9d
  struct _LIST_ENTRY *Flink; // r8

  v1 = 0;
  if ( a1 )
  {
    Flink = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 305);
  }
  else
  {
    Flink = stru_140E2C7D0.Header.WaitListHead.Flink;
    a1 = &MiSystemPartition;
  }
  if ( !Flink )
    return 0LL;
  LOBYTE(v1) = (unsigned __int64)Flink >> 12 > 3 * (*((_QWORD *)a1 + 2931) / 0x64uLL);
  return v1;
}
