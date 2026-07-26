/*
 * XREFs of ndisCmCleanupSessionState @ 0x1400CDC68
 * Callers:
 *     ndisCmCleanupWorkRoutine @ 0x1401467E0 (ndisCmCleanupWorkRoutine.c)
 * Callees:
 *     <none>
 */

void ndisCmCleanupSessionState()
{
  KIRQL v0; // al
  unsigned int v1; // r8d
  __int64 i; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
  v1 = dword_14011E898;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)qword_14011E8E8 + 3 * i + 1) )
    {
      KeReleaseSpinLock(&qword_14011E8E0, v0);
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
      v1 = dword_14011E898;
    }
  }
  KeReleaseSpinLock(&qword_14011E8E0, v0);
}
