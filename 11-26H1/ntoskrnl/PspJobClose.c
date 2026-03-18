/*
 * XREFs of PspJobClose @ 0x140958D70
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PspHardDereferenceSiloWorker @ 0x1403DBCA0 (PspHardDereferenceSiloWorker.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140957FF0 (PspLockJobMemoryLimitsExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140958CB0 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x14095A894 (PspLockJobExclusive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  struct _KLOCK_ENTRIES *v7; // r9
  void *v8; // rbp
  __int64 v9; // rcx
  char *ServerSiloGlobals; // rbx
  void *v11; // rcx

  v4 = 1;
  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1552), 1u);
    PspLockJobExclusive(a2, CurrentThread);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1552), 0x1Du)
        || (*(_DWORD *)(a2 + 1552) & 0x40000000) == 0 )
      {
        v4 = 0;
      }
      PspUnlockJobExclusive(a2, CurrentThread);
      PspTerminateAllProcessesInJobHierarchy((volatile signed __int32 *)a2, 0, 0);
      PspLockJobExclusive(a2, CurrentThread);
      if ( v4 )
        PspHardDereferenceSiloWorker(a2);
    }
    PspLockJobMemoryLimitsExclusive(a2, 0LL, 0LL, v7);
    v8 = *(void **)(a2 + 552);
    *(_QWORD *)(a2 + 552) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1264));
    KeAbPostRelease(a2 + 1264);
    PspUnlockJobExclusive(a2, CurrentThread);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x624A7350u);
    if ( (*(_DWORD *)(a2 + 1552) & 0x40000000) != 0 && PsIsServerSilo(a2) )
    {
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals(v9);
      v11 = (void *)*((_QWORD *)ServerSiloGlobals + 174);
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0);
        *(_OWORD *)(ServerSiloGlobals + 1384) = 0LL;
      }
    }
  }
}
