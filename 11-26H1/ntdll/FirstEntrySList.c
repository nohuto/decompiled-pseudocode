/*
 * XREFs of FirstEntrySList @ 0x180162BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall FirstEntrySList(const SLIST_HEADER *ListHead)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)ListHead->Region;
  LOBYTE(result) = (unsigned __int8)result & 0xF0;
  return result;
}
