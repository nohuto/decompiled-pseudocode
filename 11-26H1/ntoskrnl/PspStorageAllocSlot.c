/*
 * XREFs of PspStorageAllocSlot @ 0x1407FF9E4
 * Callers:
 *     PsAllocSiloContextSlot @ 0x1407EE600 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x1407FBB20 (PsRegisterSiloMonitor.c)
 *     CmpInitSiloSupport @ 0x140854C64 (CmpInitSiloSupport.c)
 *     VRegSetup @ 0x1408A5210 (VRegSetup.c)
 *     PspInitializeSiloStructures @ 0x140CD8CA4 (PspInitializeSiloStructures.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x1403586A0 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v6; // esi
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi
  ULONG ClearBitsAndSet; // edi

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.UserAffinity, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.UserAffinity, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.UserAffinity,
      v7,
      (__int64)&PspSiloMonitorLock.UserAffinity);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)&KiSystemServiceTraceCallbackLock.StackBase, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)&KiSystemServiceTraceCallbackLock.InitialStack, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v6 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.UserAffinity, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.UserAffinity);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.UserAffinity);
  KeLeaveCriticalRegion();
  if ( v6 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v6;
}
