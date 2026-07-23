/*
 * XREFs of PspJobClose @ 0x140A06ED0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspHardDereferenceSiloWorker @ 0x1403DEE90 (PspHardDereferenceSiloWorker.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140A07050 (PspLockJobMemoryLimitsExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140A0717C (PspTerminateAllProcessesInJobHierarchy.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  char *ServerSiloGlobals; // rbx
  void *v14; // rcx

  v4 = 1;
  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1552), 1u);
    PspLockJobExclusive(a2, (__int64)CurrentThread);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1552), 0x1Du)
        || (*(_DWORD *)(a2 + 1552) & 0x40000000) == 0 )
      {
        v4 = 0;
      }
      PspUnlockJobExclusive(a2, (__int64)CurrentThread, v7, v8);
      PspTerminateAllProcessesInJobHierarchy((PRKEVENT)a2);
      PspLockJobExclusive(a2, (__int64)CurrentThread);
      if ( v4 )
        PspHardDereferenceSiloWorker(a2);
    }
    PspLockJobMemoryLimitsExclusive(a2, 0LL, 0LL);
    v9 = *(void **)(a2 + 552);
    *(_QWORD *)(a2 + 552) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1264));
    KeAbPostRelease(a2 + 1264);
    PspUnlockJobExclusive(a2, (__int64)CurrentThread, v10, v11);
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x624A7350u);
    if ( (*(_DWORD *)(a2 + 1552) & 0x40000000) != 0 && PsIsServerSilo(a2) )
    {
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals(v12);
      v14 = (void *)*((_QWORD *)ServerSiloGlobals + 174);
      if ( v14 )
      {
        ExFreePoolWithTag(v14, 0);
        *(_OWORD *)(ServerSiloGlobals + 1384) = 0LL;
      }
    }
  }
}
