/*
 * XREFs of IoRegisterContainerNotification @ 0x140797260
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionObjectById @ 0x140215CF4 (PsGetSessionObjectById.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopGetDevicePDO @ 0x14026F1F0 (IopGetDevicePDO.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     IopSetFileObjectExtensionFlag @ 0x140469800 (IopSetFileObjectExtensionFlag.c)
 *     ExUnregisterCallback @ 0x1404ECF50 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x1404F0710 (ExRegisterCallback.c)
 *     IopGetSessionIdFromPDO @ 0x140A97EE8 (IopGetSessionIdFromPDO.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall IoRegisterContainerNotification(
        IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
        PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
        PVOID NotificationInformation,
        ULONG NotificationInformationLength,
        PVOID CallbackRegistration)
{
  PIO_CONTAINER_NOTIFICATION_FUNCTION v6; // r15
  NTSTATUS v7; // ebx
  __int64 v9; // rbp
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  struct _KTHREAD *Flink; // rcx
  struct _KTHREAD *v15; // rax
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY *v17; // rdi
  struct _LIST_ENTRY *v18; // rsi
  struct _LIST_ENTRY *SessionObjectById; // r12
  struct _LIST_ENTRY *v20; // r14
  signed __int64 v21; // rdx
  __int64 v22; // rtt
  _DWORD *DevicePDO; // rax
  void *v24; // r15
  struct _LIST_ENTRY *Blink; // rax

  v6 = CallbackFunction;
  v7 = 0;
  if ( NotificationClass >= IoMaxContainerNotificationClass )
    return -1073741585;
  if ( NotificationInformationLength != 32 || *(_DWORD *)NotificationInformation != 32 )
    return -1073741582;
  v9 = *((_QWORD *)NotificationInformation + 1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire(
                       (__int64)&IopSessionNotificationLock,
                       0LL,
                       0LL,
                       *(struct _KLOCK_ENTRIES **)&NotificationInformationLength);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&IopSessionNotificationLock,
      v11,
      (__int64)&IopSessionNotificationLock);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  Flink = (struct _KTHREAD *)IopSessionNotificationLock.Header.WaitListHead.Flink;
  if ( IopSessionNotificationLock.Header.WaitListHead.Flink != &IopSessionNotificationLock.Header.WaitListHead )
  {
    while ( Flink != (struct _KTHREAD *)&IopSessionNotificationLock.Header.WaitListHead )
    {
      v15 = Flink;
      Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
      if ( v15->InitialStack == (void *)v9 )
      {
        v7 = -1073741791;
        goto LABEL_26;
      }
    }
  }
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
  v17 = Pool2;
  if ( Pool2 )
  {
    v18 = (struct _LIST_ENTRY *)ExRegisterCallback(IopSessionCallbackObject, IopDispatchSessionNotifications, Pool2);
    if ( !v18 )
    {
      v7 = -1073741670;
      goto LABEL_24;
    }
    SessionObjectById = 0LL;
    switch ( *(_WORD *)v9 )
    {
      case 3:
        v20 = *(struct _LIST_ENTRY **)(v9 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) & 0x400) != 0 )
        {
          DevicePDO = IopGetDevicePDO(v9);
          v24 = DevicePDO;
          if ( DevicePDO )
          {
            IopGetSessionIdFromPDO(DevicePDO);
            SessionObjectById = (struct _LIST_ENTRY *)PsGetSessionObjectById();
            ObfDereferenceObject(v24);
          }
          v6 = CallbackFunction;
        }
        *(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) |= 0x1000u;
        break;
      case 4:
        v20 = (struct _LIST_ENTRY *)v9;
        break;
      case 5:
        v20 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v9 + 8) + 8LL);
        v7 = IopSetFileObjectExtensionFlag(v9, 2u);
        if ( v7 < 0 )
        {
LABEL_24:
          ExFreePoolWithTag(v17, 0);
          if ( v18 )
            ExUnregisterCallback(v18);
          goto LABEL_26;
        }
        break;
      default:
        v7 = -1073741583;
        goto LABEL_24;
    }
    PsReferenceSiloContext(v20);
    v17[2].Blink = (struct _LIST_ENTRY *)v9;
    v17[1].Flink = v20;
    v17[2].Flink = v18;
    v17[4].Flink = (struct _LIST_ENTRY *)*((_QWORD *)NotificationInformation + 3);
    LODWORD(v17[3].Blink) = *((_DWORD *)NotificationInformation + 4);
    v17[1].Blink = (struct _LIST_ENTRY *)v6;
    v17[3].Flink = SessionObjectById;
    *(_QWORD *)CallbackRegistration = v18;
    Blink = IopSessionNotificationLock.Header.WaitListHead.Blink;
    if ( IopSessionNotificationLock.Header.WaitListHead.Blink->Flink != &IopSessionNotificationLock.Header.WaitListHead )
      __fastfail(3u);
    v17->Flink = &IopSessionNotificationLock.Header.WaitListHead;
    v17->Blink = Blink;
    Blink->Flink = v17;
    IopSessionNotificationLock.Header.WaitListHead.Blink = v17;
    goto LABEL_26;
  }
  v7 = -1073741670;
LABEL_26:
  _m_prefetchw(&IopSessionNotificationLock);
  v21 = *(_QWORD *)&IopSessionNotificationLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&IopSessionNotificationLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v21 = 0LL;
  if ( (IopSessionNotificationLock.Header.Type & 2) != 0
    || (v22 = *(_QWORD *)&IopSessionNotificationLock.Header.Lock,
        v22 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v21,
                 *(signed __int64 *)&IopSessionNotificationLock.Header.Lock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock);
  }
  KeAbPostRelease((unsigned __int64)&IopSessionNotificationLock);
  KeLeaveCriticalRegion();
  return v7;
}
