/*
 * XREFs of MiGetThreadPartition @ 0x14046BE90
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x140AF2F20 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1198LL));
}
