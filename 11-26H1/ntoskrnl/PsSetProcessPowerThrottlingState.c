/*
 * XREFs of PsSetProcessPowerThrottlingState @ 0x140617EEC
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KeSetProcessPpmPolicy @ 0x140203314 (KeSetProcessPpmPolicy.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PspEnqueueProcessQosChangeNotification @ 0x140518208 (PspEnqueueProcessQosChangeNotification.c)
 *     PsComputeProcessPpmPolicy @ 0x140617D08 (PsComputeProcessPpmPolicy.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PsSetProcessPowerThrottlingState(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  AutoBoost *v10; // r14
  char v11; // si
  int v12; // eax
  int v13; // r14d
  int v14; // [rsp+30h] [rbp-69h] BYREF
  int v15; // [rsp+34h] [rbp-65h] BYREF
  int v16; // [rsp+38h] [rbp-61h] BYREF
  int v17; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v18; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-49h] BYREF
  int *v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  int *v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  int *v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  int *v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]
  __int64 *v28; // [rsp+B0h] [rbp+17h]
  __int64 v29; // [rsp+B8h] [rbp+1Fh]

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 260;
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 260), 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v8, (__int64)v5);
  v11 = 1;
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v9) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v9, 1);
    }
    else
    {
      *((_BYTE *)v10 + 10) = 1;
    }
  }
  *((_DWORD *)a1 + 523) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)a1 + 524) = *(_DWORD *)(a2 + 8);
  v12 = PsComputeProcessPpmPolicy(a1);
  v13 = v12;
  if ( v12 == ((*((_DWORD *)a1 + 34) >> 7) & 0xF) )
    v11 = 0;
  else
    KeSetProcessPpmPolicy((__int64)a1, v12);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  if ( v11 )
    PspEnqueueProcessQosChangeNotification(a1);
  if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
    && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 2LL) )
  {
    v14 = *((_DWORD *)a1 + 116);
    v21 = 4LL;
    v20 = &v14;
    v15 = v13;
    v22 = &v15;
    v16 = *(_DWORD *)(a2 + 4);
    v24 = &v16;
    v17 = *(_DWORD *)(a2 + 8);
    v26 = &v17;
    v28 = &v18;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    v18 = 0x1000000LL;
    v29 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
      (unsigned __int8 *)word_1400535AA,
      0LL,
      0LL,
      7u,
      &v19);
  }
}
