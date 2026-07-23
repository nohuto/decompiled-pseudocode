/*
 * XREFs of IoRegisterContainerNotification @ 0x140799D90
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionObjectById @ 0x140216024 (PsGetSessionObjectById.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopGetDevicePDO @ 0x14026E760 (IopGetDevicePDO.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IopSetFileObjectExtensionFlag @ 0x140462F80 (IopSetFileObjectExtensionFlag.c)
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x1404E9CF0 (ExRegisterCallback.c)
 *     IopGetSessionIdFromPDO @ 0x140A9C068 (IopGetSessionIdFromPDO.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  struct _KTHREAD *v14; // rcx
  struct _KTHREAD *v15; // rax
  _QWORD *Pool2; // rax
  _QWORD *v17; // rdi
  PVOID v18; // rsi
  void *SessionObjectById; // r12
  void *v20; // r14
  signed __int64 v21; // rdx
  unsigned __int64 v22; // rtt
  _DWORD *DevicePDO; // rax
  void *v24; // r15
  _QWORD *v25; // rax

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
                       (__int64)&IopPerfIoTrackingLock.Padding[3],
                       0LL,
                       0LL,
                       *(struct _KLOCK_ENTRIES **)&NotificationInformationLength);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock.Padding[3], 0LL) )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock.Padding[3], v11, (__int64)&IopPerfIoTrackingLock.Padding[3]);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = (struct _KTHREAD *)IopPerfIoTrackingLock.Padding[1];
  if ( (unsigned __int64 *)IopPerfIoTrackingLock.Padding[1] != &IopPerfIoTrackingLock.Padding[1] )
  {
    while ( v14 != (struct _KTHREAD *)&IopPerfIoTrackingLock.Padding[1] )
    {
      v15 = v14;
      v14 = *(struct _KTHREAD **)&v14->Header.Lock;
      if ( v15->InitialStack == (void *)v9 )
      {
        v7 = -1073741791;
        goto LABEL_26;
      }
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v17 = Pool2;
  if ( Pool2 )
  {
    v18 = ExRegisterCallback(IopSessionCallbackObject, IopDispatchSessionNotifications, Pool2);
    if ( !v18 )
    {
      v7 = -1073741670;
      goto LABEL_24;
    }
    SessionObjectById = 0LL;
    switch ( *(_WORD *)v9 )
    {
      case 3:
        v20 = *(void **)(v9 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) & 0x400) != 0 )
        {
          DevicePDO = IopGetDevicePDO(v9);
          v24 = DevicePDO;
          if ( DevicePDO )
          {
            IopGetSessionIdFromPDO(DevicePDO);
            SessionObjectById = PsGetSessionObjectById();
            ObfDereferenceObject(v24);
          }
          v6 = CallbackFunction;
        }
        *(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) |= 0x1000u;
        break;
      case 4:
        v20 = (void *)v9;
        break;
      case 5:
        v20 = *(void **)(*(_QWORD *)(v9 + 8) + 8LL);
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
    v17[5] = v9;
    v17[2] = v20;
    v17[4] = v18;
    v17[8] = *((_QWORD *)NotificationInformation + 3);
    *((_DWORD *)v17 + 14) = *((_DWORD *)NotificationInformation + 4);
    v17[3] = v6;
    v17[6] = SessionObjectById;
    *(_QWORD *)CallbackRegistration = v18;
    v25 = (_QWORD *)IopPerfIoTrackingLock.Padding[2];
    if ( *(struct _KTHREAD **)IopPerfIoTrackingLock.Padding[2] != (struct _KTHREAD *)&IopPerfIoTrackingLock.Padding[1] )
      __fastfail(3u);
    *v17 = &IopPerfIoTrackingLock.Padding[1];
    v17[1] = v25;
    *v25 = v17;
    IopPerfIoTrackingLock.Padding[2] = (unsigned __int64)v17;
    goto LABEL_26;
  }
  v7 = -1073741670;
LABEL_26:
  _m_prefetchw(&IopPerfIoTrackingLock.Padding[3]);
  v21 = IopPerfIoTrackingLock.Padding[3] - 16;
  if ( (IopPerfIoTrackingLock.Padding[3] & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v21 = 0LL;
  if ( (IopPerfIoTrackingLock.Padding[3] & 2) != 0
    || (v22 = IopPerfIoTrackingLock.Padding[3],
        v22 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopPerfIoTrackingLock.Padding[3],
                 v21,
                 IopPerfIoTrackingLock.Padding[3])) )
  {
    ExfReleasePushLock(&IopPerfIoTrackingLock.Padding[3]);
  }
  KeAbPostRelease((unsigned __int64)&IopPerfIoTrackingLock.Padding[3]);
  KeLeaveCriticalRegion();
  return v7;
}
