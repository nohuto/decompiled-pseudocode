/*
 * XREFs of LdrpWorkCallback @ 0x180086FF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpUpdateStatistics @ 0x1800870D4 (LdrpUpdateStatistics.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x180087118 (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 */

void LdrpWorkCallback()
{
  bool v0; // di
  __int64 *v1; // rbx
  __int64 v2; // rax

  v0 = 0;
  while ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v1 = (__int64 *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
      || (v2 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
    {
      __fastfail(3u);
    }
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v2 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v1 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue == v1 )
      break;
    if ( !v0 && LdrpMainThreadToken )
      v0 = (int)LdrpThreadTokenSetImpersonationToken(LdrpMainThreadToken) >= 0;
    LdrpProcessWork((_BYTE)v1 - 64);
  }
  if ( v0 )
    LdrpThreadTokenSetImpersonationToken(0LL);
}
