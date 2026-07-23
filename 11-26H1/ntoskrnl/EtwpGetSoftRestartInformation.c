/*
 * XREFs of EtwpGetSoftRestartInformation @ 0x1408343E8
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 */

__int64 __fastcall EtwpGetSoftRestartInformation(__int64 a1, unsigned int a2, char a3, _DWORD *a4)
{
  char v8; // si
  __int64 v9; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rax

  v8 = 0;
  if ( !PspSiloMonitorLock.KernelWaitTime || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  *a4 = 24;
  if ( a2 < 0x18 )
    return 3221225476LL;
  if ( a3 )
    LOWORD(v11) = RtlReadULong64FromUser((volatile void *)(a1 + 8));
  else
    v11 = *(_QWORD *)(a1 + 8);
  v12 = (unsigned __int16)v11;
  if ( (unsigned __int16)v11 == 0xFFFF )
    v12 = *(unsigned __int8 *)(EtwpHostSiloState + 4504);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v9) = 1;
  v14 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v12, v9);
  if ( v14 )
  {
    v16 = EtwpCheckLoggerControlAccess(1u);
    if ( v16 >= 0 )
    {
      v17 = *(_QWORD *)(v14 + 1352);
      if ( v17 )
        v8 = *(_BYTE *)(v17 + 32);
    }
    LOBYTE(v15) = 1;
    EtwpReleaseLoggerContext(v14, v15);
  }
  else
  {
    v16 = -1073741162;
  }
  KeLeaveCriticalRegion();
  if ( v16 >= 0 )
  {
    if ( a3 )
      RtlWriteUCharToUser((_BYTE *)(a1 + 16), v8);
    else
      *(_BYTE *)(a1 + 16) = v8;
  }
  return (unsigned int)v16;
}
