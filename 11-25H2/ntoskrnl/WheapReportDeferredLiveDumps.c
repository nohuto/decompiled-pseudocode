/*
 * XREFs of WheapReportDeferredLiveDumps @ 0x1407B9020
 * Callers:
 *     WheaCrashDumpInitializationComplete @ 0x1407B8FBC (WheaCrashDumpInitializationComplete.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     WheapReportLiveDump @ 0x1407B9128 (WheapReportLiveDump.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 WheapReportDeferredLiveDumps()
{
  PDRIVER_CONTROL DeviceRoutine; // rbx
  __int64 v1; // rax
  bool v2; // di
  unsigned int v3; // esi
  __int64 v4; // rax

  DeviceRoutine = 0LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  if ( (PDRIVER_CONTROL *)WheapDispatchPtr.Queue.Wcb.DeviceRoutine != &WheapDispatchPtr.Queue.Wcb.DeviceRoutine )
  {
    DeviceRoutine = WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
    v1 = *(_QWORD *)WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
    if ( *((struct _DEVICE_OBJECT **)WheapDispatchPtr.Queue.Wcb.DeviceRoutine + 1) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine
      || *(PDRIVER_CONTROL *)(v1 + 8) != WheapDispatchPtr.Queue.Wcb.DeviceRoutine )
    {
LABEL_18:
      __fastfail(3u);
    }
    WheapDispatchPtr.Queue.Wcb.DeviceRoutine = *(PDRIVER_CONTROL *)WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
    *(_QWORD *)(v1 + 8) = &WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  v2 = 0;
  v3 = 0;
  while ( DeviceRoutine )
  {
    if ( !v2 )
      v3 = WheapReportLiveDump(DeviceRoutine);
    ExFreePoolWithTag(DeviceRoutine, 0x61656857u);
    if ( !v2 )
      v2 = v3 != 0;
    ExAcquireFastMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
    DeviceRoutine = WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
    if ( (PDRIVER_CONTROL *)WheapDispatchPtr.Queue.Wcb.DeviceRoutine == &WheapDispatchPtr.Queue.Wcb.DeviceRoutine )
    {
      DeviceRoutine = 0LL;
    }
    else
    {
      if ( *((struct _DEVICE_OBJECT **)WheapDispatchPtr.Queue.Wcb.DeviceRoutine + 1) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine )
        goto LABEL_18;
      v4 = *(_QWORD *)WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
      if ( *(PDRIVER_CONTROL *)(*(_QWORD *)WheapDispatchPtr.Queue.Wcb.DeviceRoutine + 8LL) != WheapDispatchPtr.Queue.Wcb.DeviceRoutine )
        goto LABEL_18;
      WheapDispatchPtr.Queue.Wcb.DeviceRoutine = *(PDRIVER_CONTROL *)WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
      *(_QWORD *)(v4 + 8) = &WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  }
  return v3;
}
