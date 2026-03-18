/*
 * XREFs of PopBlackBoxDirectAccess @ 0x140B58654
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBlackBoxDirectAccess(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rbp
  __int64 v12; // rsi
  __int64 *Pool2; // rax
  __int64 v14; // rax

  v4 = 0;
  if ( *(_QWORD *)a1
    || *(_QWORD *)(a1 + 8)
    || *(_QWORD *)(a1 + 16)
    || *(_DWORD *)(a1 + 24) > 0x17u
    || *(_DWORD *)(a1 + 28) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&PopModernStandbyStateNotify.SchedulerAssist, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&PopModernStandbyStateNotify.SchedulerAssist, 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopModernStandbyStateNotify.SchedulerAssist,
        v8,
        (__int64)&PopModernStandbyStateNotify.SchedulerAssist);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v12 = 104LL * *(int *)(a1 + 24);
    if ( *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v12 + 80)
      || (Pool2 = (__int64 *)ExAllocatePool2(0x40uLL),
          (*(__int64 (**)[2])((char *)&PopBlackBoxEntries + v12 + 80) = (__int64 (*)[2])Pool2) != 0LL) )
    {
      *(_DWORD *)((char *)&PopBlackBoxEntries + v12 + 16) |= 2u;
      *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v12 + 72) = (__int64 (*)[2])KiQueryUnbiasedInterruptTime();
      v14 = *(__int64 *)((char *)&PopBlackBoxEntries + v12 + 80);
      *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v12 + 88) = (__int64 (*)[2])4096;
      *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v12 + 96) = (__int64 (*)[2])4096;
      *a2 = v14;
      a2[1] = *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v12 + 88);
    }
    else
    {
      v4 = -1073741670;
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopModernStandbyStateNotify.SchedulerAssist,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopModernStandbyStateNotify.SchedulerAssist);
    KeAbPostRelease((unsigned __int64)&PopModernStandbyStateNotify.SchedulerAssist);
    KeLeaveCriticalRegion();
  }
  return v4;
}
