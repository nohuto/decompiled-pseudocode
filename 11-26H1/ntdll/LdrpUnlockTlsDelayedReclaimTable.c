/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x18015CD9C
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

struct _TEB *__fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  __int64 *v2; // rdi
  int v3; // esi
  volatile signed __int64 *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rbx

  v2 = (__int64 *)&unk_1801CB540;
  v3 = 15;
  v4 = (volatile signed __int64 *)&unk_1801CB548;
  do
  {
    if ( a1 )
    {
      v5 = *v2;
      if ( *v2 )
      {
        do
        {
          v6 = *(_QWORD *)(v5 + 8);
          RtlFreeHeap_0();
          v5 = v6;
        }
        while ( v6 );
        *v2 = 0LL;
      }
      v2[1] = 1LL;
    }
    RtlReleaseSRWLockExclusive(v4);
    v4 -= 2;
    v2 -= 2;
    --v3;
  }
  while ( v3 >= 0 );
  if ( a1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock = 17LL;
  }
  return RtlReleaseSRWLockShared(&LdrpTlsLock);
}
