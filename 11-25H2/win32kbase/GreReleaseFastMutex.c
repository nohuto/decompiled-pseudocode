/*
 * XREFs of GreReleaseFastMutex @ 0x1401A20D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreReleaseFastMutex(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 64))-- == 1 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)a1);
  }
}
