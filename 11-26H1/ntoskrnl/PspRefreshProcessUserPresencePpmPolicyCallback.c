/*
 * XREFs of PspRefreshProcessUserPresencePpmPolicyCallback @ 0x140615350
 * Callers:
 *     <none>
 * Callees:
 *     KeSetProcessPpmPolicy @ 0x140203234 (KeSetProcessPpmPolicy.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     PspEnqueueProcessQosChangeNotification @ 0x1404C6FF8 (PspEnqueueProcessQosChangeNotification.c)
 *     PsComputeProcessPpmPolicy @ 0x140614E6C (PsComputeProcessPpmPolicy.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall PspRefreshProcessUserPresencePpmPolicyCallback(
        _DWORD *a1,
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
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  int v17; // [rsp+38h] [rbp-29h] BYREF
  int v18; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v19; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+48h] [rbp-19h] BYREF
  int *v21; // [rsp+68h] [rbp+7h]
  __int64 v22; // [rsp+70h] [rbp+Fh]
  int *v23; // [rsp+78h] [rbp+17h]
  __int64 v24; // [rsp+80h] [rbp+1Fh]
  __int64 *v25; // [rsp+88h] [rbp+27h]
  __int64 v26; // [rsp+90h] [rbp+2Fh]

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 520);
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 520), 0LL, 0LL, a4);
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
  if ( a1[522] == 9 )
  {
    v11 = PsComputeProcessPpmPolicy(a1);
    v12 = v11;
    if ( v11 == ((a1[34] >> 7) & 0xF) )
      v10 = 0;
    else
      KeSetProcessPpmPolicy((__int64)a1, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((unsigned __int64)v5);
    if ( v10 )
      PspEnqueueProcessQosChangeNotification((__int64)a1, v13, v14, v15);
    if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
      && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 2LL) )
    {
      v17 = a1[116];
      v22 = 4LL;
      v21 = &v17;
      v18 = v12;
      v23 = &v18;
      v24 = 4LL;
      v25 = &v19;
      v19 = 0x1000000LL;
      v26 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
        (unsigned __int8 *)&dword_1400526FE + 1,
        0LL,
        0LL,
        5u,
        &v20);
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
