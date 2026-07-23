/*
 * XREFs of PiUEventNotifyUserMode @ 0x140A1AAC0
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x1409B3AC4 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1409B4610 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 *     PnpProcessCustomDeviceEvent @ 0x140A1A510 (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     RtlStringCchCopyNW @ 0x140484B50 (RtlStringCchCopyNW.c)
 *     KeInitializeGuardedMutex @ 0x14048BDA0 (KeInitializeGuardedMutex.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140499B90 (McTemplateK0z_EtwWriteTransfer.c)
 *     PiUEventShouldQueueEvent @ 0x1404BDC9C (PiUEventShouldQueueEvent.c)
 *     Feature_KernelPnP_CheckDeviceInstancePath__private_IsEnabledDeviceUsageNoInline @ 0x1405DCEFC (Feature_KernelPnP_CheckDeviceInstancePath__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0jqzjzx_EtwWriteTransfer @ 0x1405DCF58 (McTemplateK0jqzjzx_EtwWriteTransfer.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PpDevCfgRequestDeviceInstall @ 0x14077D614 (PpDevCfgRequestDeviceInstall.c)
 *     PiUEventReferenceEventEntry @ 0x14095CFF4 (PiUEventReferenceEventEntry.c)
 *     PiUEventDereferenceEventEntry @ 0x1409A801C (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x1409A8080 (PiUEventFreeEventEntry.c)
 *     PnpWatchdogTimerStart @ 0x140A19CDC (PnpWatchdogTimerStart.c)
 *     PnpWatchdogTimerPause @ 0x140A1B1D4 (PnpWatchdogTimerPause.c)
 *     PiUEventCacheObjectProperties @ 0x140AA6D44 (PiUEventCacheObjectProperties.c)
 *     PiUEventIsDeviceEventVetoable @ 0x140AD3304 (PiUEventIsDeviceEventVetoable.c)
 *     PiUEventGatherEventData @ 0x140ADE7B0 (PiUEventGatherEventData.c)
 *     PiUEventDeviceNeedsInstall @ 0x140B10E18 (PiUEventDeviceNeedsInstall.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // edi
  char v3; // r13
  const wchar_t *v4; // r12
  size_t v5; // r15
  __int64 v6; // rbx
  const wchar_t *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  const wchar_t *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 Pool2; // rsi
  struct _FAST_MUTEX *v18; // rax
  char v19; // cl
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  struct _KEVENT *v24; // rax
  char v25; // r12
  char v26; // r15
  wchar_t *v27; // rcx
  __int64 *v28; // rax
  bool v29; // r15
  struct _WORK_QUEUE_ITEM *v30; // rax
  NTSTATUS v31; // edi
  unsigned __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  _QWORD *v39; // rax
  int Buffer; // [rsp+54h] [rbp-15h] BYREF
  const wchar_t *v41; // [rsp+58h] [rbp-11h] BYREF
  __int64 v42; // [rsp+60h] [rbp-9h] BYREF
  const wchar_t *v43; // [rsp+68h] [rbp-1h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+7h] BYREF
  PVOID Object[9]; // [rsp+78h] [rbp+Fh] BYREF
  char IsDeviceEventVetoable; // [rsp+D8h] [rbp+6Fh] BYREF
  char v47; // [rsp+E8h] [rbp+7Fh]

  Timeout.QuadPart = 0LL;
  IsDeviceEventVetoable = 0;
  v2 = 0;
  v43 = 0LL;
  v3 = 0;
  v42 = 0LL;
  v4 = 0LL;
  v41 = 0LL;
  v5 = 0LL;
  v47 = 0;
  v6 = 0LL;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 136) == 4 )
  {
    v8 = (const wchar_t *)(a1 + 168);
    if ( (int)PiUEventDeviceNeedsInstall(a1 + 168, &IsDeviceEventVetoable) >= 0
      && IsDeviceEventVetoable
      && (int)PpDevCfgRequestDeviceInstall() >= 0
      && (byte_140EF412A & 0x10) != 0 )
    {
      McTemplateK0z_EtwWriteTransfer(v9, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceInstall_Requested, v10, v8);
    }
  }
  if ( !PiUEventShouldQueueEvent(a1) )
    return v2;
  IsDeviceEventVetoable = PiUEventIsDeviceEventVetoable(a1);
  v11 = Feature_KernelPnP_CheckDeviceInstancePath__private_IsEnabledDeviceUsageNoInline();
  v12 = *(_QWORD *)(a1 + 160);
  if ( v12 )
  {
    if ( !v11 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      if ( !v16 )
        goto LABEL_22;
      v4 = *(const wchar_t **)(v16 + 48);
      v15 = -1LL;
      do
        ++v15;
      while ( v4[v15] );
      goto LABEL_21;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
    if ( v13 )
    {
      v14 = *(const wchar_t **)(v13 + 48);
      if ( v14 )
      {
        v4 = v14;
        v15 = -1LL;
        do
          ++v15;
        while ( v14[v15] );
LABEL_21:
        v5 = v15 + 1;
      }
    }
  }
LABEL_22:
  Buffer = *(_DWORD *)(a1 + 156) + 80 + 2 * v5;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v18 = (struct _FAST_MUTEX *)ExAllocatePool2(0x40uLL);
  *(_QWORD *)(Pool2 + 16) = v18;
  if ( !v18 )
  {
    v2 = -1073741670;
LABEL_75:
    PiUEventFreeEventEntry((_QWORD *)Pool2);
    return v2;
  }
  KeInitializeGuardedMutex(v18);
  v19 = IsDeviceEventVetoable;
  *(_BYTE *)(Pool2 + 77) = IsDeviceEventVetoable;
  *(_DWORD *)(Pool2 + 56) = 1;
  v20 = *(_DWORD **)(a1 + 48);
  if ( v19 )
  {
    *(_QWORD *)(Pool2 + 32) = v20;
    v21 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(Pool2 + 40) = v21;
    **(_WORD **)(v21 + 8) = 0;
    **(_WORD **)(Pool2 + 40) = 0;
    **(_DWORD **)(Pool2 + 32) = 0;
  }
  else
  {
    if ( v20 )
      *v20 = 0;
    v22 = *(_QWORD *)(a1 + 56);
    if ( v22 )
    {
      **(_WORD **)(v22 + 8) = 0;
      **(_WORD **)(a1 + 56) = 0;
    }
  }
  if ( *(_QWORD *)(a1 + 24) || v19 )
  {
    v23 = *(_QWORD *)(a1 + 104);
    v3 = 1;
    if ( v23 )
    {
      PnpWatchdogTimerPause(*(_QWORD *)(v23 + 8), 0LL);
      v47 = 1;
    }
    v24 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
    *(_QWORD *)(Pool2 + 24) = v24;
    if ( !v24 )
    {
      v25 = 0;
LABEL_38:
      v2 = -1073741670;
      v26 = 0;
      goto LABEL_65;
    }
    KeInitializeEvent(v24, NotificationEvent, 0);
    PiUEventReferenceEventEntry(Pool2);
  }
  *(_BYTE *)(Pool2 + 76) = v3;
  *(_DWORD *)(Pool2 + 72) = *(_DWORD *)(a1 + 156) + 8;
  memmove((void *)(Pool2 + 80), (const void *)(a1 + 120), *(unsigned int *)(a1 + 156));
  if ( v5 )
  {
    v27 = (wchar_t *)(Pool2 + *(unsigned int *)(a1 + 156) + 80LL);
    *(_QWORD *)(Pool2 + 64) = v27;
    RtlStringCchCopyNW(v27, v5, v4, v5);
  }
  PiUEventCacheObjectProperties(Pool2);
  ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
  v28 = (__int64 *)qword_140F84B88;
  v29 = PiUEventUsermodeEventQueue == &PiUEventUsermodeEventQueue;
  if ( *(PVOID **)qword_140F84B88 != &PiUEventUsermodeEventQueue )
    goto LABEL_76;
  *(_QWORD *)Pool2 = &PiUEventUsermodeEventQueue;
  *(_QWORD *)(Pool2 + 8) = v28;
  v25 = 1;
  *v28 = Pool2;
  qword_140F84B88 = Pool2;
  KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
  if ( v29 )
  {
    v30 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( !v30 )
      goto LABEL_38;
    v30->List.Flink = 0LL;
    v30->WorkerRoutine = PiUEventProcessEventWorker;
    v30->Parameter = v30;
    ExQueueWorkItem(v30, NormalWorkQueue);
  }
  v26 = 1;
  if ( v3 )
  {
    if ( (byte_140EF412C & 2) != 0 )
      v6 = MEMORY[0xFFFFF78000000014];
    Object[0] = &PnpShutdownEvent;
    Object[1] = *(PVOID *)(Pool2 + 24);
    Timeout.QuadPart = -10000 * (unsigned __int16)PiUEventSyncTimeoutMs;
    v31 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
    Buffer = 0;
    ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( v31 )
    {
      if ( v31 == 1 )
      {
        if ( !IsDeviceEventVetoable || (v2 = -1073741536, !**(_DWORD **)(a1 + 48)) )
          v2 = 0;
        if ( (byte_140EF412C & 2) != 0 )
        {
          v32 = (__int64)((unsigned __int128)((MEMORY[0xFFFFF78000000014] - v6) * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
          v33 = (v32 >> 63) + v32;
          if ( v33 > (unsigned __int16)PiUEventSyncLongRunningMs )
          {
            PiUEventGatherEventData(Pool2, &v43, &v42, &v41);
            if ( (byte_140EF412C & 2) != 0 )
              McTemplateK0jqzjzx_EtwWriteTransfer(
                v34,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_SynchronousEventLongRunning,
                v35,
                Pool2 + 80,
                *(_DWORD *)(Pool2 + 96),
                v43,
                v42,
                v41,
                v33);
          }
        }
      }
      else if ( v31 == 258 )
      {
        if ( (byte_140EF412C & 2) != 0 )
        {
          PiUEventGatherEventData(Pool2, &v43, &v42, &v41);
          McTemplateK0jqzjzx_EtwWriteTransfer(
            v36,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_SynchronousEventTimeout,
            v37,
            Pool2 + 80,
            *(_DWORD *)(Pool2 + 96),
            v43,
            v42,
            v41,
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
LABEL_65:
  if ( v47 )
    PnpWatchdogTimerStart(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL));
  if ( !v26 )
  {
    if ( !v25 )
    {
LABEL_72:
      if ( v3 && *(_QWORD *)(Pool2 + 24) )
        PiUEventDereferenceEventEntry((PVOID)Pool2);
      goto LABEL_75;
    }
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v38 = *(_QWORD *)Pool2;
    if ( *(_QWORD *)(*(_QWORD *)Pool2 + 8LL) == Pool2 )
    {
      v39 = *(_QWORD **)(Pool2 + 8);
      if ( *v39 == Pool2 )
      {
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
        KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
        goto LABEL_72;
      }
    }
LABEL_76:
    __fastfail(3u);
  }
  return v2;
}
