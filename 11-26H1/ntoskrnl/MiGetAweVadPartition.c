/*
 * XREFs of MiGetAweVadPartition @ 0x1403BC184
 * Callers:
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x1403BC1DC (MiGetAweInfoPartition.c)
 *     MiLocateLockedVadEvent @ 0x1403BCC30 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  __int64 LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x880000) == 0x880000 )
    return *(_QWORD *)(stru_140E2EB88.ThreadLock
                     + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256LL);
  return MiGetAweInfoPartition(*(_QWORD *)(LockedVadEvent + 72));
}
