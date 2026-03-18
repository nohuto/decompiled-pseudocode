/*
 * XREFs of IsAllocationOffered @ 0x14010FD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsAllocationOffered(void *a1)
{
  return *(_DWORD *)(*(_QWORD *)a1 + 288LL) != 4 && *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 368LL) + 8LL) == 2;
}
