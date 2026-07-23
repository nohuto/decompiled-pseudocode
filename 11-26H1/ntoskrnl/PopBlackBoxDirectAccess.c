/*
 * XREFs of PopBlackBoxDirectAccess @ 0x140B5B474
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock.152, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock.152, 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopPdcDeviceListLock.152,
        v8,
        (__int64)&PopPdcDeviceListLock.152);
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock.152, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock.152);
    KeAbPostRelease((unsigned __int64)&PopPdcDeviceListLock.152);
    KeLeaveCriticalRegion();
  }
  return v4;
}
