/*
 * XREFs of PsShutdownSystem @ 0x1407FFCB4
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     ObFastReplaceObject @ 0x14047B348 (ObFastReplaceObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsTerminateServerSilo @ 0x1407F4380 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x1408014C4 (PspWaitForUsermodeExit.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     PsEnumProcesses @ 0x1409BBF0C (PsEnumProcesses.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 *     PspGetNextSilo @ 0x1409FF6D8 (PspGetNextSilo.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  _DWORD **ServerSiloGlobals; // r15
  __int64 v3; // rdx
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rdi
  _DWORD *NextProcess; // rbx
  int v10; // ecx
  NTSTATUS v11; // r14d
  PVOID *v12; // rbx
  __int64 v13; // rbp
  _DWORD *v14; // rcx
  __int64 **v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v19; // r14
  __int64 v20; // rdx
  void *v21; // rbp
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  void *UserWaitTime; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  signed __int32 v26[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+58h] [rbp-30h]

  Timeout.QuadPart = -1000000000LL;
  *(_OWORD *)Object = 0LL;
  v29 = 0LL;
  v0 = 1;
  ServerSiloGlobals = (_DWORD **)PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.PriorityFloorCounts[8],
         (signed __int64)KeGetCurrentThread(),
         0LL) )
  {
    return 0LL;
  }
  if ( PsIsCurrentThreadInServerSilo() )
    NT_ASSERT("PsIsCurrentThreadInServerSilo() == 0");
  for ( i = 0LL; ; i = v6 )
  {
    LOBYTE(v3) = 1;
    NextSilo = PspGetNextSilo(i, v3);
    v6 = NextSilo;
    if ( !NextSilo )
      break;
    PsTerminateServerSilo(NextSilo);
  }
  PsEnumProcesses(PspFreezeProcessWorker, 0LL);
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = 0LL;
      NextProcess = (_DWORD *)PsGetNextProcess(0LL);
      if ( NextProcess )
      {
        do
        {
          if ( (NextProcess[383] & 0x1000) == 0
            && NextProcess != PsIdleProcess
            && NextProcess != ServerSiloGlobals[106]
            && (NextProcess[383] & 0x40000000) == 0 )
          {
            v10 = PsTerminateProcess(NextProcess, 3221226219LL);
            if ( (NextProcess[125] & 4) == 0 && v10 != 290 && (unsigned int)v8 < 3 )
            {
              PsReferenceSiloContext(NextProcess);
              Object[v8] = NextProcess;
              v8 = (unsigned int)(v8 + 1);
            }
          }
          NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
        }
        while ( NextProcess );
        if ( (_DWORD)v8 )
        {
          v11 = KeWaitForMultipleObjects(v8, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          v12 = Object;
          v13 = (unsigned int)v8;
          do
          {
            ObfDereferenceObject(*v12++);
            --v13;
          }
          while ( v13 );
          if ( v11 == 258 )
            break;
        }
      }
      v7 = 0;
      if ( !(_DWORD)v8 )
        goto LABEL_26;
    }
    ++v7;
  }
  while ( v7 <= 0xA || PsContinueWaiting );
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v14 = ServerSiloGlobals[106];
    if ( v14 )
    {
      PsTerminateProcess(v14, 3221226219LL);
      PspWaitForUsermodeExit(ServerSiloGlobals[106]);
    }
  }
  v15 = (__int64 **)((char *)&ExpPlatformBinaryLock.116 + 4);
  v16 = 6LL;
  do
  {
    if ( *v15 )
    {
      v17 = (*v15)[4];
      if ( v17 )
        MiUnmapViewOfSection(PsInitialSystemProcess, v17, 0LL, 0LL);
      CurrentThread = KeGetCurrentThread();
      v19 = **v15;
      v21 = (void *)ObFastReplaceObject((volatile __int64 *)v19, 0LL);
      if ( v21 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v26, 0);
        if ( (*(_QWORD *)(v19 + 8) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)(v19 + 8), v20, v22, v23);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v20);
        ObfDereferenceObject(v21);
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  ZwClose(*((HANDLE *)PspSystemPartition + 16));
  *((_QWORD *)PspSystemPartition + 16) = 0LL;
  UserWaitTime = (void *)PsInitialSystemProcess[1].UserWaitTime;
  if ( (unsigned __int64)UserWaitTime >= 2 )
  {
    ObfDereferenceObject(UserWaitTime);
    PsInitialSystemProcess[1].UserWaitTime = 1LL;
  }
  Blink = SshpBlockerCollections.SchedulerApc.ApcListEntry.Blink;
  SshpBlockerCollections.SchedulerApc.ApcListEntry.Blink = 0LL;
  *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] = 0;
  EtwUnregister((REGHANDLE)Blink);
  return v0;
}
