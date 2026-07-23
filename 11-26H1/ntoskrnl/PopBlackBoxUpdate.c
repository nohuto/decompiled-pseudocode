/*
 * XREFs of PopBlackBoxUpdate @ 0x140B76EF4
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
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     RtlTestProtectedAccess @ 0x140A85B14 (RtlTestProtectedAccess.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBlackBoxUpdate(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v6; // rax
  __int64 (**v7)[2]; // r14
  unsigned int v8; // edi
  char v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  size_t v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 Pool2; // rax
  void *v19; // rdx
  char *v20; // rcx
  char v22; // [rsp+50h] [rbp+8h]

  v22 = 0;
  v6 = *(int *)(a1 + 24);
  if ( (unsigned int)v6 > 0x17 )
  {
    v8 = -1073741811;
    goto LABEL_37;
  }
  v7 = &PopBlackBoxEntries + 13 * v6;
  if ( a2 )
  {
    ProbeForRead(*(volatile void **)a1, *(_QWORD *)(a1 + 8), 1u);
    if ( ((_DWORD)v7[2] & 1) != 0
      && !RtlTestProtectedAccess(
            (PS_PROTECTION)SBYTE2(KeGetCurrentThread()->Process[3].ActiveGroupsMask.Masks[1]),
            (PS_PROTECTION)97) )
    {
      v8 = -1073741790;
      goto LABEL_37;
    }
  }
  v9 = *(_BYTE *)(a1 + 28) & 1;
  v22 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock.152, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock.152, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopPdcDeviceListLock.152,
      v11,
      (__int64)&PopPdcDeviceListLock.152);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  if ( ((_DWORD)v7[2] & 2) != 0 )
  {
    v8 = -1073741790;
    goto LABEL_37;
  }
  v14 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
  {
    v15 = 0LL;
    v17 = 4096LL;
    if ( v14 < 0x1000 )
      v17 = *(_QWORD *)(a1 + 8);
    v14 = v17;
    v7[12] = *(__int64 (**)[2])(a1 + 8);
    v7[11] = (__int64 (*)[2])v17;
LABEL_28:
    if ( v7[10] || (Pool2 = ExAllocatePool2(0x40uLL), (v7[10] = (__int64 (*)[2])Pool2) != 0LL) )
    {
      v7[9] = (__int64 (*)[2])KiQueryUnbiasedInterruptTime();
      if ( v14 )
      {
        v19 = *(void **)a1;
        v20 = (char *)v7[10] + v15;
        if ( a2 )
          RtlCopyFromUser(v20, v19, v14);
        else
          RtlCopyVolatileMemory(v20, v19, v14);
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
    goto LABEL_37;
  }
  if ( !v14 )
  {
LABEL_16:
    v8 = -1073741811;
    goto LABEL_37;
  }
  v15 = *(_QWORD *)(a1 + 16);
  v16 = -1LL;
  if ( v15 + v14 >= v15 )
    v16 = v15 + v14;
  v8 = v15 + v14 < v15 ? 0xC0000095 : 0;
  if ( v15 + v14 >= v15 )
  {
    if ( v16 > (unsigned __int64)v7[12] )
      goto LABEL_16;
    if ( v15 < 0x1000 )
    {
      if ( v16 > 0x1000 )
        v14 = 4096 - v15;
    }
    else
    {
      v14 = 0LL;
    }
    goto LABEL_28;
  }
LABEL_37:
  if ( v22 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock.152, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock.152);
    KeAbPostRelease((unsigned __int64)&PopPdcDeviceListLock.152);
    KeLeaveCriticalRegion();
  }
  return v8;
}
