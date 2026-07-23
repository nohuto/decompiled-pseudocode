/*
 * XREFs of PspRefreshProcessUserPresencePpmPolicyCallback @ 0x140618260
 * Callers:
 *     <none>
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

__int64 __fastcall PspRefreshProcessUserPresencePpmPolicyCallback(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  AutoBoost *v9; // r15
  char v10; // si
  int v11; // eax
  int v12; // r15d
  int v14; // [rsp+38h] [rbp-29h] BYREF
  int v15; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+48h] [rbp-19h] BYREF
  int *v18; // [rsp+68h] [rbp+7h]
  __int64 v19; // [rsp+70h] [rbp+Fh]
  int *v20; // [rsp+78h] [rbp+17h]
  __int64 v21; // [rsp+80h] [rbp+1Fh]
  __int64 *v22; // [rsp+88h] [rbp+27h]
  __int64 v23; // [rsp+90h] [rbp+2Fh]

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 260;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 260), 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v7, (__int64)v5);
  v10 = 1;
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v8) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v8, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  if ( *((_DWORD *)a1 + 522) == 9 )
  {
    v11 = PsComputeProcessPpmPolicy(a1);
    v12 = v11;
    if ( v11 == ((*((_DWORD *)a1 + 34) >> 7) & 0xF) )
      v10 = 0;
    else
      KeSetProcessPpmPolicy((__int64)a1, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((unsigned __int64)v5);
    if ( v10 )
      PspEnqueueProcessQosChangeNotification(a1);
    if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
      && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 2LL) )
    {
      v14 = *((_DWORD *)a1 + 116);
      v19 = 4LL;
      v18 = &v14;
      v15 = v12;
      v20 = &v15;
      v21 = 4LL;
      v22 = &v16;
      v16 = 0x1000000LL;
      v23 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
        (unsigned __int8 *)byte_1400534EB,
        0LL,
        0LL,
        5u,
        &v17);
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((unsigned __int64)v5);
  }
  KeLeaveCriticalRegion();
  return 0LL;
}
