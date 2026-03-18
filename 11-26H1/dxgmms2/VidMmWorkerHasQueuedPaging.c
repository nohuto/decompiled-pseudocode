/*
 * XREFs of VidMmWorkerHasQueuedPaging @ 0x140042CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidMmWorkerHasQueuedPaging(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)a1 + 208LL) != 0;
}
