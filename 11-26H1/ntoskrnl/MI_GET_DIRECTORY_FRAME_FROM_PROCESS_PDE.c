/*
 * XREFs of MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x1406F2468
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiReplicatePteChangeToProcess @ 0x14070BB80 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 */

unsigned __int64 __fastcall MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE(__int64 a1, ULONG_PTR a2)
{
  if ( a1 )
    return *(_QWORD *)(a1 + 40) >> 12;
  else
    return MiGetContainingPageTable(a2);
}
