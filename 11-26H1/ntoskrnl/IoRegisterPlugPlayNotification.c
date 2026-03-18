/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x140908ED0
 * Callers:
 *     HalpAddDevice @ 0x140781BF0 (HalpAddDevice.c)
 *     PopRegisterTargetDeviceProtection @ 0x1407CB3E4 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1407CBED8 (PopRegisterCoolingExtensionProtection.c)
 *     PopConnectToPolicyDevice @ 0x1407D746C (PopConnectToPolicyDevice.c)
 *     ExpAcquirePrmInterface @ 0x14083EDB0 (ExpAcquirePrmInterface.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x140857820 (CmpHiveCacheSubscribePnpNotifications.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     PoInitDriverServices @ 0x140CCE614 (PoInitDriverServices.c)
 *     SbpWaitForVmbus @ 0x140D03BD0 (SbpWaitForVmbus.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14043DAF0 (ObReferenceObjectByPointerWithTag.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     PnpGetRelatedTargetDevice @ 0x1404A15E4 (PnpGetRelatedTargetDevice.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x1404B5E14 (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1407B2BE4 (PiRegisterKernelSoftRestartNotification.c)
 *     IoGetDeviceInterfaces @ 0x140908920 (IoGetDeviceInterfaces.c)
 *     PnpInitializeNotifyEntry @ 0x1409092E4 (PnpInitializeNotifyEntry.c)
 *     PnpDeferNotification @ 0x140909368 (PnpDeferNotification.c)
 *     PnpNotifyDriverCallback @ 0x1409DD5EC (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140A97B50 (IopGetSessionIdFromSymbolicName.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterPlugPlayNotification(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  NTSTATUS result; // eax
  __int32 v11; // ebx
  __int32 v12; // ebx
  __int32 v13; // ebx
  NTSTATUS RelatedTargetDevice; // edi
  _QWORD *Pool2; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rdx
  void *v18; // rcx
  char *v19; // rsi
  _DWORD *v20; // rbx
  char *v21; // rdx
  char **v22; // rax
  PZZWSTR v23; // r15
  const WCHAR *v24; // r14
  int v25; // ebx
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG v28; // edx
  void *v29; // rcx
  struct _FAST_MUTEX *v30; // rcx
  int SessionIdFromSymbolicName; // eax
  __int64 v32; // rax
  _QWORD *KcsanThread; // rax
  __int64 v34; // [rsp+30h] [rbp-51h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+38h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-41h] BYREF
  int v37; // [rsp+50h] [rbp-31h] BYREF
  GUID v38; // [rsp+54h] [rbp-2Dh]
  __int128 v39; // [rsp+64h] [rbp-1Dh]
  _BYTE v40[12]; // [rsp+74h] [rbp-Dh] BYREF

  LODWORD(v34) = EventCategoryFlags;
  *NotificationEntry = 0LL;
  result = ObReferenceObjectByPointerWithTag(DriverObject, 0, IoDriverObjectType, 0, 0x4E706E50u);
  if ( result >= 0 )
  {
    if ( EventCategory == EventCategoryReserved )
      goto LABEL_39;
    v11 = EventCategory - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          v34 = 0LL;
          RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)EventCategoryData, &v34);
          if ( RelatedTargetDevice >= 0 )
          {
            Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
            if ( Pool2 )
            {
              RelatedTargetDevice = PnpInitializeNotifyEntry(
                                      (_DWORD)Pool2,
                                      3,
                                      (_DWORD)CallbackRoutine,
                                      (_DWORD)Context,
                                      (__int64)DriverObject,
                                      (__int64)&PnpTargetDeviceNotifyLock);
              if ( RelatedTargetDevice < 0 )
              {
                ExFreePoolWithTag(Pool2, 0x43706E50u);
                v18 = *(void **)(v34 + 32);
              }
              else
              {
                v16 = v34;
                Pool2[10] = EventCategoryData;
                Pool2[11] = *(_QWORD *)(v16 + 32);
                RelatedTargetDevice = PnpDeferNotification(Pool2);
                if ( RelatedTargetDevice >= 0 )
                {
                  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
                  v17 = *(_QWORD **)(v16 + 480);
                  if ( *v17 != v16 + 472 )
                    goto LABEL_11;
                  *Pool2 = v16 + 472;
                  v30 = &PnpTargetDeviceNotifyLock;
                  Pool2[1] = v17;
                  *v17 = Pool2;
                  *(_QWORD *)(v16 + 480) = Pool2;
                  goto LABEL_34;
                }
                ExFreePoolWithTag(Pool2, 0x43706E50u);
                v18 = *(void **)(v16 + 32);
              }
              ObfDereferenceObject(v18);
              goto LABEL_14;
            }
            ObfDereferenceObject(*(PVOID *)(v34 + 32));
            goto LABEL_41;
          }
LABEL_14:
          ObfDereferenceObjectWithTag(DriverObject, 0x4E706E50u);
          return RelatedTargetDevice;
        }
        if ( v13 == 1 )
        {
          RelatedTargetDevice = PiRegisterKernelSoftRestartNotification(
                                  (__int64)DriverObject,
                                  (int)CallbackRoutine,
                                  (int)Context,
                                  NotificationEntry);
          if ( RelatedTargetDevice >= 0 )
            return RelatedTargetDevice;
          goto LABEL_14;
        }
LABEL_39:
        RelatedTargetDevice = -1073741585;
        goto LABEL_14;
      }
      v19 = (char *)ExAllocatePool2(0x100uLL);
      if ( v19 )
      {
        RelatedTargetDevice = PnpInitializeNotifyEntry(
                                (_DWORD)v19,
                                2,
                                (_DWORD)CallbackRoutine,
                                (_DWORD)Context,
                                (__int64)DriverObject,
                                (__int64)&PnpDeviceClassNotifyLock);
        if ( RelatedTargetDevice < 0 )
          goto LABEL_14;
        v20 = v19 + 80;
        *((_OWORD *)v19 + 5) = *(_OWORD *)EventCategoryData;
        RelatedTargetDevice = PnpDeferNotification(v19);
        if ( RelatedTargetDevice >= 0 )
        {
          ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
          v21 = (char *)&unk_140FD77A0
              + 16 * ((*v20 + *((_DWORD *)v19 + 21) + *((_DWORD *)v19 + 22) + *((_DWORD *)v19 + 23)) % 0xDu);
          v22 = (char **)*((_QWORD *)v21 + 1);
          if ( *v22 == v21 )
          {
            *(_QWORD *)v19 = v21;
            *((_QWORD *)v19 + 1) = v22;
            *v22 = v19;
            *((_QWORD *)v21 + 1) = v19;
            KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
            if ( (v34 & 1) != 0 )
            {
              v37 = 3145729;
              DestinationString = 0LL;
              SymbolicLinkList = 0LL;
              memset(v40, 0, sizeof(v40));
              v38 = GUID_DEVICE_INTERFACE_ARRIVAL;
              v39 = *(_OWORD *)v20;
              RelatedTargetDevice = IoGetDeviceInterfaces((const GUID *)v19 + 5, 0LL, 0, &SymbolicLinkList);
              if ( RelatedTargetDevice < 0 )
                goto LABEL_14;
              v23 = SymbolicLinkList;
              v24 = SymbolicLinkList;
              if ( *SymbolicLinkList )
              {
                do
                {
                  RtlInitUnicodeString(&DestinationString, v24);
                  v25 = *((_DWORD *)v19 + 5);
                  *(_QWORD *)&v40[4] = &DestinationString;
                  CurrentServerSilo = PsGetCurrentServerSilo();
                  if ( v25 == (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo)
                    || (SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(*(_QWORD *)&v40[4]),
                        SessionIdFromSymbolicName == -1)
                    || *((_DWORD *)v19 + 5) == SessionIdFromSymbolicName )
                  {
                    Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage();
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->KernelApcDisable;
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 9), 1u);
                    PnpNotifyDriverCallback(v19, &v37, &v34);
                    Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage();
                    ExReleaseResourceLite(*((PERESOURCE *)v19 + 9));
                    KeLeaveCriticalRegion();
                  }
                  v24 += ((unsigned __int64)DestinationString.Length >> 1) + 1;
                }
                while ( *v24 );
                v23 = SymbolicLinkList;
              }
              ExFreePoolWithTag(v23, 0);
            }
            *NotificationEntry = v19;
            return RelatedTargetDevice;
          }
LABEL_11:
          __fastfail(3u);
        }
        v28 = 1148218960;
        v29 = v19;
        goto LABEL_32;
      }
    }
    else
    {
      v32 = ExAllocatePool2(0x100uLL);
      Pool2 = (_QWORD *)v32;
      if ( v32 )
      {
        RelatedTargetDevice = PnpInitializeNotifyEntry(
                                v32,
                                1,
                                (_DWORD)CallbackRoutine,
                                (_DWORD)Context,
                                (__int64)DriverObject,
                                (__int64)&PnpHwProfileNotifyLock);
        if ( RelatedTargetDevice < 0 )
          goto LABEL_14;
        RelatedTargetDevice = PnpDeferNotification(Pool2);
        if ( RelatedTargetDevice >= 0 )
        {
          ExAcquireFastMutex(&PnpHwProfileNotifyLock);
          KcsanThread = (_QWORD *)PspSiloMonitorLock.KcsanThread;
          if ( *(struct _KTHREAD **)PspSiloMonitorLock.KcsanThread == (struct _KTHREAD *)&PspSiloMonitorLock.1144 )
          {
            *Pool2 = &PspSiloMonitorLock.1144;
            v30 = &PnpHwProfileNotifyLock;
            Pool2[1] = KcsanThread;
            *KcsanThread = Pool2;
            PspSiloMonitorLock.KcsanThread = (unsigned __int64)Pool2;
LABEL_34:
            KeReleaseGuardedMutex(v30);
            *NotificationEntry = Pool2;
            return RelatedTargetDevice;
          }
          goto LABEL_11;
        }
        v28 = 963669584;
        v29 = Pool2;
LABEL_32:
        ExFreePoolWithTag(v29, v28);
        goto LABEL_14;
      }
    }
LABEL_41:
    RelatedTargetDevice = -1073741670;
    goto LABEL_14;
  }
  return result;
}
