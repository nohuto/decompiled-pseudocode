/*
 * XREFs of ExRegisterHost @ 0x140840A68
 * Callers:
 *     EtwpInitializeProcessorTrace @ 0x1408303B8 (EtwpInitializeProcessorTrace.c)
 *     VmInitSystem @ 0x140C80258 (VmInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140CCA3AC (KiInitSupervisorStateExtensionHost.c)
 *     PspInitPhase1 @ 0x140CD812C (PspInitPhase1.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140CDD238 (SepInitializeAuthorizationCallbacks.c)
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 *     ExpInitializeCrossVmIntegration @ 0x140CE76EC (ExpInitializeCrossVmIntegration.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExpDereferenceHost @ 0x140840D58 (ExpDereferenceHost.c)
 *     ExpFindHost @ 0x140840D90 (ExpFindHost.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExRegisterHost(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v5; // esi
  char *PoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rbp
  __int64 Host; // rbp
  _QWORD *QuantumTarget; // rax

  v5 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)(*((_DWORD *)a3 + 4) | 0x400), 16LL * a3[1] + 120, 0x48457845u);
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_WORD *)PoolWithTag + 8) = *a3;
  *((_QWORD *)PoolWithTag + 3) = 1LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_QWORD *)PoolWithTag + 11) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)PoolWithTag + 11);
  *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 120;
  memmove(PoolWithTag + 120, *((const void **)a3 + 1), 16LL * a3[1]);
  *((_WORD *)PoolWithTag + 24) = a3[1];
  *((_QWORD *)PoolWithTag + 8) = *((_QWORD *)a3 + 3);
  *((_QWORD *)PoolWithTag + 9) = *((_QWORD *)a3 + 4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.WaitBlock[3], 0LL, 0LL, v9);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.WaitBlockFill11[144], 0LL);
  v13 = v10;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.WaitBlock[3],
      v10,
      (__int64)&PspSiloMonitorLock.WaitBlock[3]);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v11);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  Host = ExpFindHost(*a3);
  if ( Host )
  {
    v5 = -1073741771;
    ExpDereferenceHost(PoolWithTag);
    ExpDereferenceHost(Host);
  }
  else
  {
    QuantumTarget = (_QWORD *)KiSystemServiceTraceCallbackLock.QuantumTarget;
    if ( *(struct _KTHREAD **)KiSystemServiceTraceCallbackLock.QuantumTarget != (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.SListFaultAddress )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = &KiSystemServiceTraceCallbackLock.SListFaultAddress;
    *((_QWORD *)PoolWithTag + 1) = QuantumTarget;
    *QuantumTarget = PoolWithTag;
    KiSystemServiceTraceCallbackLock.QuantumTarget = (unsigned __int64)PoolWithTag;
    *a1 = PoolWithTag;
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PspSiloMonitorLock.WaitBlock[3].WaitListEntry.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.WaitBlock[3]);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.WaitBlock[3]);
  KeLeaveCriticalRegion();
  return v5;
}
