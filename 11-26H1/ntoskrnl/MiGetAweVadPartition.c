/*
 * XREFs of MiGetAweVadPartition @ 0x1403C5FF4
 * Callers:
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  __int64 LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x880000) == 0x880000 )
    return *(_QWORD *)(stru_140E2ED08.ThreadLock
                     + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256LL);
  return MiGetAweInfoPartition(*(_QWORD *)(LockedVadEvent + 72));
}
