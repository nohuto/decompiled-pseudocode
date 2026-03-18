/*
 * XREFs of EngReleaseFastMutex @ 0x14013C650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngReleaseFastMutex(HFASTMUTEX hfm)
{
  if ( (*((_DWORD *)hfm + 16))-- == 1 )
  {
    *((_QWORD *)hfm + 7) = 0LL;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)hfm);
  }
}
