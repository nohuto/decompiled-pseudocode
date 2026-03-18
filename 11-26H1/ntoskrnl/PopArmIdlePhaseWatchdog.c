/*
 * XREFs of PopArmIdlePhaseWatchdog @ 0x140A396D0
 * Callers:
 *     PopProcessSessionDisplayStateChange @ 0x140A3EE2C (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ZwPowerInformation @ 0x140723FD0 (ZwPowerInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x140A39804 (PopPdcAreAllPhasesDisengaged.c)
 *     PopSnapSystemIdleContext @ 0x140A3982C (PopSnapSystemIdleContext.c)
 */

void __fastcall PopArmIdlePhaseWatchdog(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int InputBuffer; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h]
  int v11; // [rsp+40h] [rbp-9h]
  int v12; // [rsp+48h] [rbp-1h]
  __int64 v13; // [rsp+50h] [rbp+7h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  __int64 v15; // [rsp+60h] [rbp+17h]
  volatile int *p_AbCompletedIoQoSBoostCount; // [rsp+68h] [rbp+1Fh]
  __int64 (__fastcall *v17)(__int64, int, int, int, __int64, __int64); // [rsp+78h] [rbp+2Fh]
  int *p_InputBuffer; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+B8h] [rbp+6Fh] BYREF
  unsigned __int64 v20; // [rsp+C0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)&PopModernStandbyStateNotify.AbCompletedIoQoSBoostCount;
  v2 = a1;
  v20 = 0LL;
  v19 = 0;
  if ( *(_QWORD *)&PopModernStandbyStateNotify.AbCompletedIoQoSBoostCount
    && (unsigned __int8)PopPdcAreAllPhasesDisengaged() )
  {
    PopSnapSystemIdleContext(&v20, &v19);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.ForegroundLossTime, v3, v4, v5);
    v6 = v19;
    PopModernStandbyStateNotify.InGlobalForegroundList = v20;
    LODWORD(PopModernStandbyStateNotify.ReadOperationCount) = v19;
    PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.ForegroundLossTime);
    if ( (unsigned int)v2 <= 0x10 && (v7 = 69728, _bittest(&v7, v2)) )
      v8 = PopIdleScanInterval + v6;
    else
      v8 = PopPdcIdlePhaseDefaultWatchdogTimeoutSeconds;
    memset_0(&InputBuffer, 0, 0x60uLL);
    InputBuffer = 21;
    v10 = v1;
    v12 = 160;
    v13 = 2050LL;
    v11 = 1000 * v8;
    v15 = (unsigned int)PopEventProcessorEnabled;
    p_AbCompletedIoQoSBoostCount = &PopModernStandbyStateNotify.AbCompletedIoQoSBoostCount;
    p_InputBuffer = &InputBuffer;
    v17 = PopIdlePhaseWatchdogCallback;
    v14 = v2;
    ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
  }
}
