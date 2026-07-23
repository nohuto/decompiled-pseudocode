/*
 * XREFs of PnpDeviceEventWorker @ 0x140A1A040
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409B3AC4 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x140A19910 (PnpNotifyDeviceClassChange.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x140A19AB0 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpActivatePdcForDeviceEvent @ 0x140A19D10 (PnpActivatePdcForDeviceEvent.c)
 *     PnpProcessDeferredRegistrations @ 0x140A1A398 (PnpProcessDeferredRegistrations.c)
 *     PnpProcessCustomDeviceEvent @ 0x140A1A510 (PnpProcessCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x140A1B08C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCompleteDeviceEvent @ 0x140A1B2E0 (PnpCompleteDeviceEvent.c)
 *     PnpNotifyHwProfileChange @ 0x140B6D3FC (PnpNotifyHwProfileChange.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  struct _LIST_ENTRY v20; // [rsp+48h] [rbp-30h] BYREF

  v20 = 0LL;
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
    v18 = v5;
    v7 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(v5 + 88);
    if ( *(_QWORD *)&NullGuid.Data1 == *(_QWORD *)(v5 + 88) )
      v7 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(v5 + 96);
    if ( v7 )
    {
      v20 = *(struct _LIST_ENTRY *)(v5 + 88);
      IoSetActivityIdThread(&v20);
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
      v10 = *(_DWORD *)(v5 + 136);
      if ( v10 > 6 )
      {
        v15 = v10 - 7;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 && (unsigned int)(v17 - 1) > 1 )
              goto LABEL_27;
            v14 = PiUEventNotifyUserMode(v5);
LABEL_25:
            v9 = v14;
          }
        }
      }
      else
      {
        if ( v10 == 6 )
          goto LABEL_26;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( !v12 )
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
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 != 1 )
                goto LABEL_27;
              goto LABEL_34;
            }
            v14 = PnpProcessCustomDeviceEvent(&v18);
          }
          else
          {
            v14 = PnpProcessTargetDeviceEvent(&v18);
          }
          v5 = v18;
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
