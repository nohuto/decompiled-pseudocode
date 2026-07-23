/*
 * XREFs of PopIdlePhaseWatchdogCallback @ 0x1404E8B40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopPowerAggregatorSnapDiagnosticContext @ 0x1407DA0A8 (PopPowerAggregatorSnapDiagnosticContext.c)
 *     PopSnapSystemIdleContext @ 0x1409F5434 (PopSnapSystemIdleContext.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopPdcSnapDiagnosticContext @ 0x140B545A8 (PopPdcSnapDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopIdlePhaseWatchdogCallback(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  PVOID v11; // rbx
  PVOID v12; // rdi
  PVOID v13; // r14
  PVOID v14; // r15
  PVOID v15; // rsi
  unsigned int v17; // eax
  PVOID P[2]; // [rsp+58h] [rbp-69h] BYREF
  PVOID v19[2]; // [rsp+68h] [rbp-59h]
  PVOID v20[2]; // [rsp+78h] [rbp-49h]
  PVOID CycleTime; // [rsp+88h] [rbp-39h] BYREF
  unsigned int CurrentRunTime; // [rsp+90h] [rbp-31h]
  PVOID v23; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v24[8]; // [rsp+A0h] [rbp-21h] BYREF
  PVOID v25; // [rsp+A8h] [rbp-19h]
  PVOID v26; // [rsp+B0h] [rbp-11h]
  PVOID v27; // [rsp+B8h] [rbp-9h]
  PVOID v28; // [rsp+C0h] [rbp-1h]
  PVOID v29; // [rsp+C8h] [rbp+7h]
  PVOID v30[7]; // [rsp+D0h] [rbp+Fh] BYREF

  v6 = 0;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v19 = 0LL;
  *(_OWORD *)v20 = 0LL;
  memset_0(&CycleTime, 0, 0x50uLL);
  PopPdcSnapDiagnosticContext(P);
  v11 = P[0];
  v12 = P[1];
  v13 = v19[1];
  v14 = v20[0];
  v15 = v20[1];
  v25 = P[0];
  v26 = P[1];
  v27 = v19[1];
  v28 = v20[0];
  v29 = v20[1];
  if ( ((__int64)v19[0] & 0xFFFFFFDF) != 0 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPdcDeviceListLock.StackBase, v8, v9, v10);
    CycleTime = (PVOID)PopPdcDeviceListLock.CycleTime;
    CurrentRunTime = PopPdcDeviceListLock.CurrentRunTime;
    PopPdcDeviceListLock.CurrentRunTime = 0;
    PopPdcDeviceListLock.CycleTime = 0LL;
    PopReleaseRwLock((struct _KTHREAD *)&PopPdcDeviceListLock.StackBase);
    PopSnapSystemIdleContext(&v23, v24);
    PopPowerAggregatorSnapDiagnosticContext(v30);
    v17 = DbgkWerCaptureLiveKernelDump((unsigned int)L"IdlePhaseWatchdog", a2, a3, a4, a5, a6, 0LL, 0LL, 0);
    v15 = v29;
    v6 = v17;
    v14 = v28;
    v13 = v27;
    v12 = v26;
    v11 = v25;
  }
  if ( CycleTime )
    ExFreePoolWithTag(CycleTime, 0x67696450u);
  if ( v23 )
    ExFreePoolWithTag(v23, 0x67696450u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x54445050u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x54445050u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x54445050u);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x54445050u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x54445050u);
  if ( v30[0] )
    ExFreePoolWithTag(v30[0], 0x67696450u);
  return v6;
}
