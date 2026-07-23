/*
 * XREFs of PerfDiagpProxyWorker @ 0x140825080
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline @ 0x1406C6FFC (Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x140824F9C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1408252B4 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14082538C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14091851C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     PerfDiagpIsTracingAllowed @ 0x140B3CFFC (PerfDiagpIsTracingAllowed.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int Flink; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v9; // rdx
  const wchar_t *v10; // r8
  const wchar_t *v11; // rcx
  int updated; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  Flink = a1[8];
  ReturnLength = 0;
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F042A0, 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64(&stru_140F042A0.Header.Lock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F042A0, v4, (__int64)&stru_140F042A0);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_34;
  if ( LODWORD(stru_140F042A0.Header.WaitListHead.Flink) == Flink - 1 )
    goto LABEL_16;
  if ( Flink != 3 )
  {
    if ( ((Flink - 5) & 0xFFFFFFFD) != 0 )
      goto LABEL_14;
LABEL_16:
    IsEnabledDeviceUsageNoInline = Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline();
    v10 = L"Diagnostics\\Performance\\BootCKCLSettings2";
    if ( !IsEnabledDeviceUsageNoInline )
      v10 = L"Diagnostics\\Performance\\BootCKCLSettings";
    switch ( Flink )
    {
      case 1:
        v11 = v10;
        break;
      case 2:
      case 3:
        updated = PerfDiagpUpdatePerfDiagLoggerEnableFlags((_DWORD)v10);
        goto LABEL_32;
      case 4:
        goto LABEL_26;
      case 5:
        v11 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
        break;
      case 6:
LABEL_26:
        PerfDiagpInitializeLoggerInfo(0, 0);
        NtTraceControl(
          EtwStopLoggerCode,
          (PVOID)&stru_140F042A0.StackLimit,
          (ULONG)stru_140F042A0.StackLimit,
          (PVOID)&stru_140F042A0.StackLimit,
          (ULONG)stru_140F042A0.StackLimit,
          &ReturnLength);
        goto LABEL_33;
      case 7:
        PerfDiagpSaveActiveDCLLogFileName((unsigned int)(Flink - 6), v9, v10);
        v11 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
        break;
      default:
        goto LABEL_33;
    }
    updated = PerfDiagpStartPerfDiagLogger(v11);
LABEL_32:
    if ( updated >= 0 )
      goto LABEL_33;
LABEL_34:
    LODWORD(stru_140F042A0.Header.WaitListHead.Flink) = 8;
    goto LABEL_35;
  }
  if ( LODWORD(stru_140F042A0.Header.WaitListHead.Flink) == 1 )
    goto LABEL_33;
LABEL_14:
  if ( Flink >= SLODWORD(stru_140F042A0.Header.WaitListHead.Flink) )
    goto LABEL_34;
  Flink = (int)stru_140F042A0.Header.WaitListHead.Flink;
LABEL_33:
  LODWORD(stru_140F042A0.Header.WaitListHead.Flink) = Flink;
LABEL_35:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F042A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F042A0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F042A0);
  KeLeaveCriticalRegion();
}
