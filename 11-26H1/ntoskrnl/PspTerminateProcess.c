/*
 * XREFs of PspTerminateProcess @ 0x14094A8D8
 * Callers:
 *     PspTerminatePicoProcess @ 0x1408025C0 (PspTerminatePicoProcess.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 * Callees:
 *     KeForceResumeProcess @ 0x140203224 (KeForceResumeProcess.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwTraceProcessTerminate @ 0x1404C375C (EtwTraceProcessTerminate.c)
 *     KeSetProcessSchedulingGroup @ 0x1405225A4 (KeSetProcessSchedulingGroup.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PspTerminateAllThreads @ 0x14094AA84 (PspTerminateAllThreads.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 */

__int64 __fastcall PspTerminateProcess(PRKPROCESS PROCESS, __int64 a2, unsigned int a3, char a4)
{
  signed __int32 v7; // edi
  int v8; // r15d
  struct _KLOCK_ENTRIES *v9; // r9
  char v10; // al
  bool v11; // cf
  PRKPROCESS v12; // rdi
  char v13; // si
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbp
  unsigned int v17; // eax
  unsigned int v18; // edi

  _m_prefetchw((char *)&PROCESS[1].DirectoryTableBase + 4);
  v7 = _InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, 8u);
  v8 = v7 & 8;
  if ( (v7 & 8) != 0 )
  {
    v13 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate((__int64)PROCESS);
    KeSetProcessSchedulingGroup((__int64)PROCESS, 0LL);
    v10 = a4 | 4;
    v11 = (v7 & 0x40000000) != 0;
    v12 = PROCESS + 1;
    if ( !v11 )
      v10 = a4;
    v13 = v10;
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)&PROCESS[1], 0LL, 0LL, v9);
    v16 = v14;
    if ( _interlockedbittestandset64(&v12->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&PROCESS[1], v14, (__int64)&PROCESS[1]);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    if ( LODWORD(PROCESS[1].CpuPartitionList.Blink)
      && (a3 != -1073741749 || HIDWORD(PROCESS[2].AvailableCpuState) == 259) )
    {
      HIDWORD(PROCESS[2].AvailableCpuState) = a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v12->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PROCESS[1].Header.Lock);
    KeAbPostRelease((unsigned __int64)&PROCESS[1]);
  }
  if ( (PROCESS[1].DirectoryTableBase & 0x400) == 0 )
  {
    v17 = PspTerminateAllThreads(PROCESS);
LABEL_19:
    v18 = v17;
    goto LABEL_20;
  }
  if ( PsAltSystemCallRegistrationLock.KernelStack && (v13 & 8) == 0 )
  {
    v17 = guard_dispatch_icall_no_overrides((__int64)PROCESS, a3);
    goto LABEL_19;
  }
  v18 = 290;
  PspRundownSingleProcess(PROCESS);
LABEL_20:
  if ( !v8 )
    KeForceResumeProcess((__int64)PROCESS);
  return v18;
}
