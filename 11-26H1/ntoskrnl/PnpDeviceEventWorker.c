/*
 * XREFs of PnpDeviceEventWorker @ 0x1409DCD90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409119E4 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x1409DC660 (PnpNotifyDeviceClassChange.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x1409DC800 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpActivatePdcForDeviceEvent @ 0x1409DCA60 (PnpActivatePdcForDeviceEvent.c)
 *     PnpProcessDeferredRegistrations @ 0x1409DD0E8 (PnpProcessDeferredRegistrations.c)
 *     PnpProcessCustomDeviceEvent @ 0x1409DD260 (PnpProcessCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x1409DD808 (PiUEventNotifyUserMode.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x1409DDF60 (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCompleteDeviceEvent @ 0x1409DE1B4 (PnpCompleteDeviceEvent.c)
 *     PnpNotifyHwProfileChange @ 0x140B6A1EC (PnpNotifyHwProfileChange.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceEventWorker(PVOID P)
{
  char v2; // si
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  struct _LIST_ENTRY v21; // [rsp+48h] [rbp-30h] BYREF

  v21 = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)&PnpDeviceEventThread = KeGetCurrentThread();
  if ( KeWaitForSingleObject((PVOID)(PnpDeviceEventList + 8), Executive, 0, 0, 0LL) < 0 )
  {
    ExAcquireFastMutex(&PnpNotificationInProgressLock);
    KeSetEvent(&PnpEventQueueEmpty, 0, 0);
    BYTE3(NlsMbOemCodePageTag) = 0;
    KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
    *(_QWORD *)&PnpDeviceEventThread = 0LL;
    return;
  }
  while ( 1 )
  {
    v2 = 0;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
    v3 = PnpDeviceEventList;
    v4 = (_QWORD *)(PnpDeviceEventList + 120);
    v5 = *(_QWORD *)(PnpDeviceEventList + 120);
    if ( v5 == PnpDeviceEventList + 120 )
      break;
    if ( *(_QWORD **)(v5 + 8) != v4 || (v6 = *(_QWORD *)v5, *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 64));
    v19 = v5;
    v7 = NullGuid - *(_QWORD *)(v5 + 88);
    if ( (_QWORD)NullGuid == *(_QWORD *)(v5 + 88) )
      v7 = *((_QWORD *)&NullGuid + 1) - *(_QWORD *)(v5 + 96);
    if ( v7 )
    {
      v21 = *(struct _LIST_ENTRY *)(v5 + 88);
      IoSetActivityIdThread(&v21);
      v2 = 1;
    }
    v8 = *(_QWORD *)(v5 + 160);
    v9 = 0;
    if ( v8 && !*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) )
      v9 = -1073741810;
    if ( PnpShutdownEvent.Header.SignalState
      && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
    {
      goto LABEL_27;
    }
    if ( v9 >= 0 )
    {
      *(_QWORD *)(v5 + 104) = PnpAllocateAndEnableEventWatchdog(v5);
      PnpActivatePdcForDeviceEvent(v5);
      v11 = *(_DWORD *)(v5 + 136);
      if ( v11 > 6 )
      {
        v16 = v11 - 7;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 && (unsigned int)(v18 - 1) > 1 )
              goto LABEL_27;
            v15 = PiUEventNotifyUserMode(v5);
LABEL_25:
            v9 = v15;
          }
        }
      }
      else
      {
        if ( v11 == 6 )
          goto LABEL_26;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( !v13 )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)(v5 + 184));
              PnpNotifyDeviceClassChange((__int128 *)(v5 + 120), (_DWORD *)(v5 + 168), (__int64)&DestinationString);
LABEL_34:
              PiUEventNotifyUserMode(v5);
LABEL_27:
              PnpDisableAndFreeEventWatchdog(v5);
              PnpCompleteDeviceEvent((PVOID)v5);
              goto LABEL_28;
            }
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 != 1 )
                goto LABEL_27;
              goto LABEL_34;
            }
            v15 = PnpProcessCustomDeviceEvent(&v19);
          }
          else
          {
            v15 = PnpProcessTargetDeviceEvent(&v19, v10);
          }
          v5 = v19;
          goto LABEL_25;
        }
        v9 = PiUEventNotifyUserMode(v5);
        if ( v9 >= 0 )
          PnpNotifyHwProfileChange((void *)(v5 + 120));
      }
    }
LABEL_26:
    if ( v9 != 259 )
      goto LABEL_27;
LABEL_28:
    PnpProcessDeferredRegistrations();
    if ( v2 )
      IoSetActivityIdThread(0LL);
  }
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  KeSetEvent(&PnpEventQueueEmpty, 0, 0);
  BYTE3(NlsMbOemCodePageTag) = 0;
  PnpProcessDeferredRegistrations();
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( P )
    ExFreePoolWithTag(P, 0x4C706E50u);
  *(_QWORD *)&PnpDeviceEventThread = 0LL;
  KeReleaseMutex((PRKMUTEX)(PnpDeviceEventList + 8), 0);
}
