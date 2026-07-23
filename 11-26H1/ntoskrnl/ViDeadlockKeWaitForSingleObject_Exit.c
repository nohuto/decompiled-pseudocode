/*
 * XREFs of ViDeadlockKeWaitForSingleObject_Exit @ 0x140C4DEB0
 * Callers:
 *     <none>
 * Callees:
 *     ViDeadlockObjectAcquired @ 0x140C3DCF0 (ViDeadlockObjectAcquired.c)
 */

char __fastcall ViDeadlockKeWaitForSingleObject_Exit(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 32) & 0xFFFFFF7F) == 0 )
    return ViDeadlockObjectAcquired(1u, (_BYTE **)(a1 + 24), *(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  return result;
}
