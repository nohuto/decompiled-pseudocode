/*
 * XREFs of PnpInsertEventInQueue @ 0x14090965C
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1404C2EA8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1404E315C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404E42C0 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetBlockedDriverEvent @ 0x1407AD974 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1407AD9E4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1407ADAF0 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1407ADB90 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1407ADC48 (PnpSetPowerVetoEvent.c)
 *     PnpSetPlugPlayEvent @ 0x140908CAC (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x140908DF4 (PnpSetDeviceClassChange.c)
 *     PnpInsertNoopEvent @ 0x14090945C (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1409094C8 (PnpSetCustomTargetEvent.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14090AD94 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14090E200 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpRequestDeviceRemoval @ 0x14091493C (PnpRequestDeviceRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x140B2E86C (PnpSetTargetDeviceRemove.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     IoGetActivityIdThread @ 0x14046F440 (IoGetActivityIdThread.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140482A30 (PnpIsSafeToExamineUserModeTeb.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     McTemplateK0zjqdtd_EtwWriteTransfer @ 0x1405DB934 (McTemplateK0zjqdtd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned int v3; // esi
  struct _WORK_QUEUE_ITEM *Pool2; // rbx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int128 v15; // [rsp+70h] [rbp-28h] BYREF

  v15 = NullGuid;
  v3 = 0;
  Pool2 = 0LL;
  ActivityIdThread = IoGetActivityIdThread();
  if ( ActivityIdThread )
  {
    v15 = (__int128)*ActivityIdThread;
  }
  else if ( PnpIsSafeToExamineUserModeTeb()
         && KeGetPcr()->NtTib.$1A4E1036E6CD9573DBF0CCD06E827B69::$8A7F5B5E2BB4B7163F26170312D282BB::Self )
  {
    RtlCopyFromUser(
      &v15,
      &KeGetPcr()->NtTib.$1A4E1036E6CD9573DBF0CCD06E827B69::$8A7F5B5E2BB4B7163F26170312D282BB::Self[105].SubSystemTib,
      0x10uLL);
  }
  *(_OWORD *)(a1 + 88) = v15;
  if ( (byte_140EF3DCB & 0x10) != 0 )
  {
    v9 = (_QWORD *)(a1 + 120);
    v10 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
    if ( !v10 )
      goto LABEL_20;
    v11 = *v9 - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( *v9 == *(_QWORD *)&GUID_DEVICE_EJECT.Data1 )
      v11 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( !v11 )
    {
LABEL_20:
      v12 = *(_QWORD *)(a1 + 160);
      if ( v12 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      McTemplateK0zjqdtd_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24) != 0LL,
        (__int64)v9,
        v6,
        *(const wchar_t **)(v13 + 48),
        a1 + 120,
        *(_DWORD *)(a1 + 16),
        *(_DWORD *)(a1 + 20),
        *(_QWORD *)(a1 + 24) != 0LL,
        *(_DWORD *)(a1 + 152));
    }
  }
  ExAcquireFastMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( !BYTE3(NlsMbOemCodePageTag) )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      BYTE3(NlsMbOemCodePageTag) = 1;
      KeResetEvent(&PnpEventQueueEmpty);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  v7 = PnpDeviceEventList + 120;
  v8 = *(_QWORD **)(PnpDeviceEventList + 128);
  if ( *v8 != PnpDeviceEventList + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(v7 + 8) = a1;
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( Pool2 )
  {
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceEventWorker;
    Pool2->Parameter = Pool2;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
  return v3;
}
