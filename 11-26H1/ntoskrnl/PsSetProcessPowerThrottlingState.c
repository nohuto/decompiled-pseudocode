/*
 * XREFs of PsSetProcessPowerThrottlingState @ 0x14061502C
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
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

void __fastcall PsSetProcessPowerThrottlingState(_DWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  AutoBoost *v10; // r14
  char v11; // si
  int v12; // eax
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  int v17; // [rsp+30h] [rbp-69h] BYREF
  int v18; // [rsp+34h] [rbp-65h] BYREF
  int v19; // [rsp+38h] [rbp-61h] BYREF
  int v20; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v21; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+50h] [rbp-49h] BYREF
  int *v23; // [rsp+70h] [rbp-29h]
  __int64 v24; // [rsp+78h] [rbp-21h]
  int *v25; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  int *v27; // [rsp+90h] [rbp-9h]
  __int64 v28; // [rsp+98h] [rbp-1h]
  int *v29; // [rsp+A0h] [rbp+7h]
  __int64 v30; // [rsp+A8h] [rbp+Fh]
  __int64 *v31; // [rsp+B0h] [rbp+17h]
  __int64 v32; // [rsp+B8h] [rbp+1Fh]

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 520);
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 520), 0LL, 0LL, a4);
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
  a1[523] = *(_DWORD *)(a2 + 4);
  a1[524] = *(_DWORD *)(a2 + 8);
  v12 = PsComputeProcessPpmPolicy(a1);
  v13 = v12;
  if ( v12 == ((a1[34] >> 7) & 0xF) )
    v11 = 0;
  else
    KeSetProcessPpmPolicy((__int64)a1, v12);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  if ( v11 )
    PspEnqueueProcessQosChangeNotification((__int64)a1, v14, v15, v16);
  if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
    && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 2LL) )
  {
    v17 = a1[116];
    v24 = 4LL;
    v23 = &v17;
    v18 = v13;
    v25 = &v18;
    v19 = *(_DWORD *)(a2 + 4);
    v27 = &v19;
    v20 = *(_DWORD *)(a2 + 8);
    v29 = &v20;
    v31 = &v21;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    v21 = 0x1000000LL;
    v32 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
      (unsigned __int8 *)&unk_1400524F8,
      0LL,
      0LL,
      7u,
      &v22);
  }
}
