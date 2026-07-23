/*
 * XREFs of ExReleaseCacheAwarePushLockExclusive @ 0x140318F70
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall ExReleaseCacheAwarePushLockExclusive(_KTIMER *a1)
{
  _KTIMER *v1; // rsi
  volatile signed __int64 **v3; // rdi
  volatile signed __int64 *v4; // rcx

  v1 = a1 + 4;
  v3 = (volatile signed __int64 **)a1;
  if ( a1 < &a1[4] )
  {
    do
    {
      v4 = *v3;
      if ( (_InterlockedExchangeAdd64(*v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v4);
      ++v3;
    }
    while ( v3 < (volatile signed __int64 **)v1 );
  }
  KeAbPostRelease((unsigned __int64)a1);
}
