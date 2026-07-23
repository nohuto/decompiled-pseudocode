/*
 * XREFs of ExShutdownSystem @ 0x140C05380
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExpRecordShutdownTime @ 0x1406CF26C (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 */

void ExShutdownSystem()
{
  int v0; // edx
  BOOLEAN v1; // cl
  _QWORD *ServerSiloGlobals; // rbx
  struct _KLOCK_ENTRIES *v3; // r9
  void *v4; // rcx
  void *v5; // rcx
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  struct _LIST_ENTRY *v10; // rdx
  struct _LIST_ENTRY *Blink; // rtt

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( v0 )
  {
    if ( v0 == 1 && (PopShutdownCleanly & 2) != 0 )
      ExSwapinWorkerThreads(v1);
  }
  else
  {
    ExpRecordShutdownTime();
    v4 = (void *)ServerSiloGlobals[107];
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      ServerSiloGlobals[107] = 0LL;
    }
    v5 = (void *)ServerSiloGlobals[106];
    if ( v5 )
    {
      ObfDereferenceObjectWithTag(v5, 0x65487845u);
      ServerSiloGlobals[106] = 0LL;
    }
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink, 0LL, 0LL, v3);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.ApcStateFill[24], 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
        v6,
        (__int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v7);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    if ( *(_QWORD *)&ExpSysDbgLock.ApcStateFill[40] )
    {
      ObfDereferenceObject(*(PVOID *)&ExpSysDbgLock.ApcStateFill[40]);
      *(_QWORD *)&ExpSysDbgLock.ApcStateFill[40] = 0LL;
    }
    if ( ExpSysDbgLock.WaitStatus )
    {
      ObfDereferenceObject((PVOID)ExpSysDbgLock.WaitStatus);
      ExpSysDbgLock.WaitStatus = 0LL;
    }
    if ( ExpSysDbgLock.ApcState.ApcListHead[0].Blink )
    {
      ObCloseHandle(ExpSysDbgLock.ApcState.ApcListHead[0].Blink, 0);
      ExpSysDbgLock.ApcState.ApcListHead[0].Blink = 0LL;
    }
    if ( ExpSysDbgLock.ApcState.ApcListHead[1].Flink )
    {
      ObCloseHandle(ExpSysDbgLock.ApcState.ApcListHead[1].Flink, 0);
      ExpSysDbgLock.ApcState.ApcListHead[1].Flink = 0LL;
    }
    _m_prefetchw(&ExpSysDbgLock.ApcStateFill[24]);
    v10 = ExpSysDbgLock.ApcState.ApcListHead[1].Blink - 1;
    if ( ((unsigned __int64)ExpSysDbgLock.ApcState.ApcListHead[1].Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v10 = 0LL;
    if ( (ExpSysDbgLock.ApcStateFill[24] & 2) != 0
      || (Blink = ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
          Blink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
                                           (signed __int64)v10,
                                           (signed __int64)ExpSysDbgLock.ApcState.ApcListHead[1].Blink)) )
    {
      ExfReleasePushLock(&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
    }
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
  }
}
