/*
 * XREFs of PiUEventNotifyUserMode @ 0x1409DD808
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x1409119E4 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140912530 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpDeviceEventWorker @ 0x1409DCD90 (PnpDeviceEventWorker.c)
 *     PnpProcessCustomDeviceEvent @ 0x1409DD260 (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     RtlStringCchCopyNW @ 0x14048B010 (RtlStringCchCopyNW.c)
 *     KeInitializeGuardedMutex @ 0x140492250 (KeInitializeGuardedMutex.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404A0040 (McTemplateK0z_EtwWriteTransfer.c)
 *     PiUEventShouldQueueEvent @ 0x1404C43BC (PiUEventShouldQueueEvent.c)
 *     McTemplateK0jqzjzx_EtwWriteTransfer @ 0x1405DA758 (McTemplateK0jqzjzx_EtwWriteTransfer.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PpDevCfgRequestDeviceInstall @ 0x14077A6E4 (PpDevCfgRequestDeviceInstall.c)
 *     PiUEventReferenceEventEntry @ 0x14099C594 (PiUEventReferenceEventEntry.c)
 *     PiUEventDereferenceEventEntry @ 0x1409D712C (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x1409D7190 (PiUEventFreeEventEntry.c)
 *     PnpWatchdogTimerStart @ 0x1409DCA2C (PnpWatchdogTimerStart.c)
 *     PiUEventIsDeviceEventVetoable @ 0x1409DDD10 (PiUEventIsDeviceEventVetoable.c)
 *     PiUEventCacheObjectProperties @ 0x1409DDD60 (PiUEventCacheObjectProperties.c)
 *     PnpWatchdogTimerPause @ 0x1409DE0A8 (PnpWatchdogTimerPause.c)
 *     PiUEventGatherEventData @ 0x140AE12C0 (PiUEventGatherEventData.c)
 *     PiUEventDeviceNeedsInstall @ 0x140B0F5E8 (PiUEventDeviceNeedsInstall.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // edi
  char v3; // r12
  const wchar_t *v4; // r13
  size_t v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rdx
  char IsDeviceEventVetoable; // al
  __int16 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 Pool2; // rsi
  struct _FAST_MUTEX *v14; // rax
  char v15; // cl
  _DWORD *v16; // rax
  __int64 v17; // rax
  wchar_t *v18; // rcx
  __int64 *v19; // rax
  bool v20; // r15
  __int64 v21; // rax
  char v22; // r15
  __int64 v24; // rcx
  __int64 v25; // r8
  NTSTATUS v26; // edi
  char v27; // r13
  struct _WORK_QUEUE_ITEM *v28; // rax
  __int64 v29; // rcx
  struct _KEVENT *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // [rsp+54h] [rbp-15h] BYREF
  const wchar_t *v40; // [rsp+58h] [rbp-11h] BYREF
  __int64 v41; // [rsp+60h] [rbp-9h] BYREF
  const wchar_t *v42; // [rsp+68h] [rbp-1h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+7h] BYREF
  PVOID Object[9]; // [rsp+78h] [rbp+Fh] BYREF
  char v45; // [rsp+D8h] [rbp+6Fh] BYREF
  char v46; // [rsp+E8h] [rbp+7Fh]

  Timeout.QuadPart = 0LL;
  v2 = 0;
  v45 = 0;
  v3 = 0;
  v42 = 0LL;
  v4 = 0LL;
  v41 = 0LL;
  v5 = 0LL;
  v40 = 0LL;
  v6 = 0LL;
  v46 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 136) == 4
    && (int)PiUEventDeviceNeedsInstall(a1 + 168, &v45) >= 0
    && v45
    && (int)PpDevCfgRequestDeviceInstall() >= 0
    && (byte_140EF3DCA & 0x10) != 0 )
  {
    McTemplateK0z_EtwWriteTransfer(
      v24,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceInstall_Requested,
      v25,
      (const wchar_t *)(a1 + 168));
  }
  if ( PiUEventShouldQueueEvent(a1) )
  {
    IsDeviceEventVetoable = PiUEventIsDeviceEventVetoable(a1, v7, 0LL);
    v10 = *(_QWORD *)(a1 + 160);
    v45 = IsDeviceEventVetoable;
    if ( v10 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
      if ( v11 )
      {
        v4 = *(const wchar_t **)(v11 + 48);
        v12 = -1LL;
        do
          ++v12;
        while ( v4[v12] != v9 );
        v5 = v12 + 1;
      }
    }
    v39 = *(_DWORD *)(a1 + 156) + 80 + 2 * v5;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v14 = (struct _FAST_MUTEX *)ExAllocatePool2(0x40uLL);
    *(_QWORD *)(Pool2 + 16) = v14;
    if ( !v14 )
    {
      v2 = -1073741670;
      goto LABEL_71;
    }
    KeInitializeGuardedMutex(v14);
    v15 = v45;
    *(_BYTE *)(Pool2 + 77) = v45;
    *(_DWORD *)(Pool2 + 56) = 1;
    v16 = *(_DWORD **)(a1 + 48);
    if ( v15 )
    {
      *(_QWORD *)(Pool2 + 32) = v16;
      v21 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(Pool2 + 40) = v21;
      **(_WORD **)(v21 + 8) = 0;
      **(_WORD **)(Pool2 + 40) = 0;
      **(_DWORD **)(Pool2 + 32) = 0;
    }
    else
    {
      if ( v16 )
        *v16 = 0;
      v17 = *(_QWORD *)(a1 + 56);
      if ( v17 )
      {
        **(_WORD **)(v17 + 8) = 0;
        **(_WORD **)(a1 + 56) = 0;
      }
    }
    if ( *(_QWORD *)(a1 + 24) || v15 )
    {
      v29 = *(_QWORD *)(a1 + 104);
      v3 = 1;
      if ( v29 )
      {
        PnpWatchdogTimerPause(*(_QWORD *)(v29 + 8), 0LL);
        v46 = 1;
      }
      v30 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
      *(_QWORD *)(Pool2 + 24) = v30;
      if ( !v30 )
      {
        v27 = 0;
        goto LABEL_45;
      }
      KeInitializeEvent(v30, NotificationEvent, 0);
      PiUEventReferenceEventEntry(Pool2);
    }
    *(_BYTE *)(Pool2 + 76) = v3;
    *(_DWORD *)(Pool2 + 72) = *(_DWORD *)(a1 + 156) + 8;
    memmove((void *)(Pool2 + 80), (const void *)(a1 + 120), *(unsigned int *)(a1 + 156));
    if ( v5 )
    {
      v18 = (wchar_t *)(Pool2 + *(unsigned int *)(a1 + 156) + 80LL);
      *(_QWORD *)(Pool2 + 64) = v18;
      RtlStringCchCopyNW(v18, v5, v4, v5);
    }
    PiUEventCacheObjectProperties(Pool2);
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v19 = (__int64 *)qword_140F84808;
    v20 = PiUEventUsermodeEventQueue == &PiUEventUsermodeEventQueue;
    if ( *(PVOID **)qword_140F84808 != &PiUEventUsermodeEventQueue )
LABEL_21:
      __fastfail(3u);
    *(_QWORD *)Pool2 = &PiUEventUsermodeEventQueue;
    *(_QWORD *)(Pool2 + 8) = v19;
    v27 = 1;
    *v19 = Pool2;
    qword_140F84808 = Pool2;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    if ( v20 )
    {
      v28 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
      if ( !v28 )
      {
LABEL_45:
        v2 = -1073741670;
        v22 = 0;
LABEL_26:
        if ( v46 )
          PnpWatchdogTimerStart(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL));
        if ( v22 )
          return v2;
        if ( v27 )
        {
          ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
          v31 = *(_QWORD *)Pool2;
          if ( *(_QWORD *)(*(_QWORD *)Pool2 + 8LL) != Pool2 )
            goto LABEL_21;
          v32 = *(_QWORD **)(Pool2 + 8);
          if ( *v32 != Pool2 )
            goto LABEL_21;
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
        }
        if ( v3 && *(_QWORD *)(Pool2 + 24) )
          PiUEventDereferenceEventEntry((PVOID)Pool2);
LABEL_71:
        PiUEventFreeEventEntry((_QWORD *)Pool2);
        return v2;
      }
      v28->List.Flink = 0LL;
      v28->WorkerRoutine = PiUEventProcessEventWorker;
      v28->Parameter = v28;
      ExQueueWorkItem(v28, NormalWorkQueue);
    }
    v22 = 1;
    if ( v3 )
    {
      if ( (byte_140EF3DCC & 2) != 0 )
        v6 = MEMORY[0xFFFFF78000000014];
      Object[0] = &PnpShutdownEvent;
      Object[1] = *(PVOID *)(Pool2 + 24);
      Timeout.QuadPart = -10000 * (unsigned __int16)PiUEventSyncTimeoutMs;
      v26 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
      v39 = 0;
      ZwUpdateWnfStateData((__int64)&WNF_PNPB_AWAITING_RESPONSE, (__int64)&v39);
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          if ( !v45 || (v2 = -1073741536, !**(_DWORD **)(a1 + 48)) )
            v2 = 0;
          if ( (byte_140EF3DCC & 2) != 0 )
          {
            v33 = (__int64)((unsigned __int128)((MEMORY[0xFFFFF78000000014] - v6) * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
            v34 = (v33 >> 63) + v33;
            if ( v34 > (unsigned __int16)PiUEventSyncLongRunningMs )
            {
              PiUEventGatherEventData(Pool2, &v42, &v41, &v40);
              if ( (byte_140EF3DCC & 2) != 0 )
                McTemplateK0jqzjzx_EtwWriteTransfer(
                  v35,
                  (const EVENT_DESCRIPTOR *)KMPnPEvt_SynchronousEventLongRunning,
                  v36,
                  Pool2 + 80,
                  *(_DWORD *)(Pool2 + 96),
                  v42,
                  v41,
                  v40,
                  v34);
            }
          }
        }
        else if ( v26 == 258 )
        {
          if ( (byte_140EF3DCC & 2) != 0 )
          {
            PiUEventGatherEventData(Pool2, &v42, &v41, &v40);
            McTemplateK0jqzjzx_EtwWriteTransfer(
              v37,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SynchronousEventTimeout,
              v38,
              Pool2 + 80,
              *(_DWORD *)(Pool2 + 96),
              v42,
              v41,
              v40,
              PiUEventSyncTimeoutMs);
          }
          v2 = 0;
        }
        else
        {
          v2 = -1073741823;
        }
      }
      else
      {
        v2 = -1073741431;
      }
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
      PiUEventDereferenceEventEntry((PVOID)Pool2);
    }
    goto LABEL_26;
  }
  return v2;
}
