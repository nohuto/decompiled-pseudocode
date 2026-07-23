/*
 * XREFs of PspSetJobIoRateControl @ 0x1407FEF84
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspIoRateControlInfoIsAnySet @ 0x1404E4910 (PspIoRateControlInfoIsAnySet.c)
 *     PspLockJobAndRootExclusive @ 0x1407FE8E0 (PspLockJobAndRootExclusive.c)
 *     PspUnlockJobAndRootExclusive @ 0x1407FFA68 (PspUnlockJobAndRootExclusive.c)
 *     PspIoRateEntryActivate @ 0x140ABECE0 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x140ABEEC8 (PspSetJobIoAttribution.c)
 *     PspJobIoRateControlDisable @ 0x140AFC11C (PspJobIoRateControlDisable.c)
 *     EtwTracePsIoRateControl @ 0x140B1BE9C (EtwTracePsIoRateControl.c)
 *     PspIoRateEntryDeactivate @ 0x140B3CA34 (PspIoRateEntryDeactivate.c)
 *     PspSetJobIoRateControlForVolume @ 0x140B5D6BC (PspSetJobIoRateControlForVolume.c)
 */

__int64 __fastcall PspSetJobIoRateControl(unsigned __int64 *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // r15
  unsigned __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // r12
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // r14
  int v12; // edi
  int v13; // r14d
  __int64 v14; // r10
  char v15; // al
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v19[9]; // [rsp+30h] [rbp-48h] BYREF
  char v20; // [rsp+90h] [rbp+18h] BYREF
  char v21; // [rsp+98h] [rbp+20h] BYREF

  v4 = Object + 218;
  v5 = 0LL;
  v19[0] = 0LL;
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  v21 = 0;
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)(Object + 218), 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v9, (__int64)v4);
  v12 = 1;
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( (*(_DWORD *)(a2 + 36) & 1) == 0 )
  {
    if ( Object[209] )
      v5 = Object[209];
    v12 = PspJobIoRateControlDisable(Object);
LABEL_24:
    v13 = 0;
    if ( !v12 )
      goto LABEL_27;
    goto LABEL_25;
  }
  PspLockJobAndRootExclusive((__int64)Object, (__int64)CurrentThread);
  v13 = PspSetJobIoAttribution(Object);
  if ( v13 >= 0 )
  {
    PspUnlockJobAndRootExclusive(Object, CurrentThread);
    if ( *(_QWORD *)(a2 + 24) )
    {
      v16 = PspSetJobIoRateControlForVolume((_DWORD)Object, a2, (unsigned int)&v20, (unsigned int)&v21, (__int64)v19);
      v5 = v19[0];
      v13 = v16;
      if ( v16 >= 0 )
      {
        v15 = v21;
LABEL_17:
        if ( !v20 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
    else
    {
      if ( !PspIoRateControlInfoIsAnySet((_QWORD *)a2) )
      {
        if ( !*(_QWORD *)(v14 + 40) )
          goto LABEL_24;
        v5 = Object[209];
        PspIoRateEntryDeactivate(v14);
        v15 = 0;
LABEL_18:
        v12 = 2;
LABEL_19:
        if ( v15 )
          --v12;
        goto LABEL_24;
      }
      v13 = PspIoRateEntryActivate(v14, Object, a2, &v20);
      if ( v13 >= 0 )
      {
        v5 = Object[209];
        v15 = 1;
        goto LABEL_17;
      }
    }
LABEL_25:
    PspLockJobAndRootExclusive((__int64)Object, (__int64)CurrentThread);
    PspSetJobIoAttribution(Object);
  }
  PspUnlockJobAndRootExclusive(Object, CurrentThread);
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v17);
  EtwTracePsIoRateControl(*((unsigned int *)Object + 367), a2, v5, (unsigned int)v13);
  return (unsigned int)v13;
}
