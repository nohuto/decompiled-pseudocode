/*
 * XREFs of PspProcessQosChangeNotificationWorker @ 0x140B47740
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     KeCalculateProcessDefaultQos @ 0x1405F93F0 (KeCalculateProcessDefaultQos.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.WaitBlock[3], 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(
         (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[144],
         0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3],
      v5,
      (__int64)&PsAltSystemCallRegistrationLock.WaitBlock[3]);
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
    Blink = PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Blink;
    if ( !PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Blink )
      break;
    p_Blink = (struct _KPROCESS *)&PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Blink[-132].Blink;
    PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Blink = PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Blink->Flink;
    Blink->Flink = (struct _LIST_ENTRY *)1;
    v11 = KeCalculateProcessDefaultQos((__int64)&Blink[-132].Blink);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3]);
    KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock.WaitBlock[3]);
    if ( ExtensionTable )
    {
      LOBYTE(v12) = v11;
      guard_dispatch_icall_no_overrides((__int64)p_Blink, v12);
      if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
        && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 1LL) )
      {
        ProcessId = (unsigned int)PsGetProcessId(p_Blink);
        v14 = (unsigned __int8 *)byte_14005256D;
LABEL_17:
        v21 = ProcessId;
        v25 = 4LL;
        v24 = &v21;
        v20 = v11;
        v26 = &v20;
        v27 = 1LL;
        v28 = &v22;
        v22 = 0x1000000LL;
        v29 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
          v14,
          0LL,
          0LL,
          5u,
          &v23);
      }
    }
    else if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
           && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 1LL) )
    {
      ProcessId = (unsigned int)PsGetProcessId(p_Blink);
      v14 = (unsigned __int8 *)&word_1400525D6;
      goto LABEL_17;
    }
    ObfDereferenceObject(p_Blink);
    v16 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.WaitBlock[3], 0LL, 0LL, v15);
    v7 = _interlockedbittestandset64(
           (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[144],
           0LL);
    v18 = v16;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3],
        v16,
        (__int64)&PsAltSystemCallRegistrationLock.WaitBlock[3]);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
  }
  PsAltSystemCallRegistrationLock.WaitBlock[2].SparePtr = (PVOID)((unsigned __int64)PsAltSystemCallRegistrationLock.WaitBlock[2].SparePtr & ~1uLL);
  if ( ExtensionTable )
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDxgExtensionHost);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3]);
  KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock.WaitBlock[3]);
  KeLeaveCriticalRegion();
}
