/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1401467E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmCleanupSessionState @ 0x1400CDC68 (ndisCmCleanupSessionState.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&dword_14011F228, 0);
  if ( dword_14011E898 )
    ndisCmCleanupSessionState();
}
