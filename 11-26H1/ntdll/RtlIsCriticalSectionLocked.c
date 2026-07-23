/*
 * XREFs of RtlIsCriticalSectionLocked @ 0x180115AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlIsCriticalSectionLocked(PRTL_CRITICAL_SECTION CriticalSection)
{
  return (CriticalSection->LockCount & 1) == 0;
}
