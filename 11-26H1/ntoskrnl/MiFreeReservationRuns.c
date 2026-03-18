/*
 * XREFs of MiFreeReservationRuns @ 0x140AC1DB0
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140405328 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140AC1BB4 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x140AC1DFC (MiFreeReservationRun.c)
 */

__int64 __fastcall MiFreeReservationRuns(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx
  __int64 result; // rax

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    result = MiFreeReservationRun(a1, i);
  return result;
}
