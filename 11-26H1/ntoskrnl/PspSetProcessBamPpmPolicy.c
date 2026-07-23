/*
 * XREFs of PspSetProcessBamPpmPolicy @ 0x1407F64F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetProcessPpmPolicy @ 0x140203314 (KeSetProcessPpmPolicy.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     KeGetProcessPpmPolicy @ 0x140467410 (KeGetProcessPpmPolicy.c)
 *     PspEnqueueProcessQosChangeNotification @ 0x140518208 (PspEnqueueProcessQosChangeNotification.c)
 *     PsComputeProcessPpmPolicy @ 0x140617D08 (PsComputeProcessPpmPolicy.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PspSetProcessBamPpmPolicy(
        PEPROCESS Process,
        volatile _KSTACK_COUNT a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Spare0d; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // r14
  char v11; // si
  int v12; // r14d
  __int64 v13; // rcx
  unsigned int ProcessId; // [rsp+30h] [rbp-59h] BYREF
  volatile _KSTACK_COUNT v15; // [rsp+34h] [rbp-55h] BYREF
  int v16; // [rsp+38h] [rbp-51h] BYREF
  __int64 v17; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *p_ProcessId; // [rsp+70h] [rbp-19h]
  __int64 v20; // [rsp+78h] [rbp-11h]
  volatile _KSTACK_COUNT *v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  int *v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]
  __int64 *v25; // [rsp+A0h] [rbp+17h]
  __int64 v26; // [rsp+A8h] [rbp+1Fh]

  CurrentThread = KeGetCurrentThread();
  p_Spare0d = (unsigned __int64 *)&Process[4].Spare0d;
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&Process[4].Spare0d, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Spare0d, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Spare0d, v8, (__int64)p_Spare0d);
  v11 = 1;
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  Process[4].StackCount = a2;
  v12 = PsComputeProcessPpmPolicy(Process);
  if ( v12 == (unsigned int)KeGetProcessPpmPolicy((__int64)Process) )
    v11 = 0;
  else
    KeSetProcessPpmPolicy(v13, v12);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Spare0d, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_Spare0d);
  KeAbPostRelease((unsigned __int64)p_Spare0d);
  KeLeaveCriticalRegion();
  if ( v11 )
    PspEnqueueProcessQosChangeNotification(Process);
  if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
    && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 2LL) )
  {
    ProcessId = (unsigned int)PsGetProcessId(Process);
    v20 = 4LL;
    p_ProcessId = &ProcessId;
    v15.Value = a2.Value;
    v21 = &v15;
    v22 = 4LL;
    v23 = &v16;
    v16 = v12;
    v25 = &v17;
    v24 = 4LL;
    v17 = 0x1000000LL;
    v26 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
      (unsigned __int8 *)byte_140053543,
      0LL,
      0LL,
      6u,
      &v18);
  }
}
