/*
 * XREFs of MiGetThreadPartition @ 0x140465610
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x140AF5710 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1198LL));
}
