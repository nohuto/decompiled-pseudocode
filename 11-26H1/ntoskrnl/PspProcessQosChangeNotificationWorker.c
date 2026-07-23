/*
 * XREFs of PspProcessQosChangeNotificationWorker @ 0x140B77F30
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     KeCalculateProcessDefaultQos @ 0x1405FBE10 (KeCalculateProcessDefaultQos.c)
 *     Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline @ 0x140617CAC (Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PspProcessQosChangeNotificationWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  unsigned __int64 ExtensionTable; // rsi
  struct _KPROCESS *p_Blink; // rdi
  char v11; // r14
  __int64 v12; // rdx
  unsigned int ProcessId; // eax
  unsigned __int8 *v14; // rdx
  struct _KLOCK_ENTRIES *v15; // r9
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  char v20; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v22; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+48h] [rbp-19h] BYREF
  unsigned int *v24; // [rsp+68h] [rbp+7h]
  __int64 v25; // [rsp+70h] [rbp+Fh]
  char *v26; // [rsp+78h] [rbp+17h]
  __int64 v27; // [rsp+80h] [rbp+1Fh]
  __int64 *v28; // [rsp+88h] [rbp+27h]
  __int64 v29; // [rsp+90h] [rbp+2Fh]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(
         (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[16],
         0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry,
      v5,
      (__int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDxgExtensionHost);
  while ( 1 )
  {
    Blink = PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry.Blink;
    if ( !PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry.Blink )
      break;
    p_Blink = (struct _KPROCESS *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry.Blink[-132].Blink;
    PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry.Blink = PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry.Blink->Flink;
    Blink->Flink = (struct _LIST_ENTRY *)1;
    v11 = KeCalculateProcessDefaultQos((__int64)&Blink[-132].Blink);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
    KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
    if ( ExtensionTable )
    {
      LOBYTE(v12) = v11;
      guard_dispatch_icall_no_overrides((__int64)p_Blink, v12);
      if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] <= 5u
        || !tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 1LL) )
      {
        goto LABEL_18;
      }
      ProcessId = (unsigned int)PsGetProcessId(p_Blink);
      v14 = (unsigned __int8 *)byte_140053675;
    }
    else
    {
      if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] <= 5u
        || !tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 1LL) )
      {
        goto LABEL_18;
      }
      ProcessId = (unsigned int)PsGetProcessId(p_Blink);
      v14 = (unsigned __int8 *)&word_1400536DE;
    }
    v21 = ProcessId;
    v25 = 4LL;
    v24 = &v21;
    v20 = v11;
    v26 = &v20;
    v27 = 1LL;
    v28 = &v22;
    v22 = 0x1000000LL;
    v29 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&SshpBlockerCollections.SavedApcStateFill[40], v14, 0LL, 0LL, 5u, &v23);
LABEL_18:
    if ( (unsigned int)Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline() )
      ObfDereferenceObjectWithTag(p_Blink, 0x71447350u);
    else
      ObfDereferenceObject(p_Blink);
    v16 = (AutoBoost *)KeAbPreAcquire(
                         (__int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry,
                         0LL,
                         0LL,
                         v15);
    v7 = _interlockedbittestandset64(
           (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[16],
           0LL);
    v18 = v16;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry,
        v16,
        (__int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
  }
  PsAltSystemCallRegistrationLock.SchedulerApc.Thread = (struct _KTHREAD *)((unsigned __int64)PsAltSystemCallRegistrationLock.SchedulerApc.Thread & ~1uLL);
  if ( ExtensionTable )
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDxgExtensionHost);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
  KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
  KeLeaveCriticalRegion();
}
