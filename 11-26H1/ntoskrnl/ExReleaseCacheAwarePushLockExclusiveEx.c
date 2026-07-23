/*
 * XREFs of ExReleaseCacheAwarePushLockExclusiveEx @ 0x140318FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseCacheAwarePushLockExclusiveEx(_KTIMER *a1, ULONG_PTR BugCheckParameter1)
{
  char v2; // bp
  volatile signed __int64 **v4; // rbx
  _KTIMER *v5; // rdi
  volatile signed __int64 *v6; // rcx

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)a1, 0LL, 0LL);
  v4 = (volatile signed __int64 **)a1;
  v5 = a1 + 4;
  if ( a1 < &a1[4] )
  {
    do
    {
      v6 = *v4;
      if ( (_InterlockedExchangeAdd64(*v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      ++v4;
    }
    while ( v4 < (volatile signed __int64 **)v5 );
  }
  if ( (v2 & 2) == 0 )
    KeAbPostRelease((unsigned __int64)a1);
}
