/*
 * XREFs of WheaInitializeServices @ 0x140CE7F90
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x140848D88 (WheapInitializeInUsePageOfflineNotifications.c)
 *     WheapSetDefaultErrorSourceConfiguration @ 0x140CE83DC (WheapSetDefaultErrorSourceConfiguration.c)
 */

LIST_ENTRY *WheaInitializeServices()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  WheapSetDefaultErrorSourceConfiguration();
  *(_QWORD *)&WheapPfaLock.Header.Lock = 0LL;
  WheapPfaLock.SListFaultAddress = &WheapPfaLock.Header.WaitListHead.Blink;
  WheapPfaLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&WheapPfaLock.Header.WaitListHead.Blink;
  _InterlockedOr(v1, 0);
  LOBYTE(WheapPfaLock.Header.WaitListHead.Flink) = 1;
  CmpCallbackListLock.NpxState = (unsigned __int64)&CmpCallbackListLock.AffinityPrimaryGroup;
  *(_QWORD *)&CmpCallbackListLock.AffinityPrimaryGroup = &CmpCallbackListLock.AffinityPrimaryGroup;
  CmpCallbackListLock.QueueListEntry.Blink = &CmpCallbackListLock.QueueListEntry;
  CmpCallbackListLock.QueueListEntry.Flink = &CmpCallbackListLock.QueueListEntry;
  qword_140EFE238 = (__int64)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  LODWORD(CmpCallbackListLock.UserAffinity) = 1;
  *(_QWORD *)&CmpCallbackListLock.UserAffinityPrimaryGroup = 0LL;
  LODWORD(CmpCallbackListLock.AffinityVersion) = 0;
  LOWORD(CmpCallbackListLock.Affinity) = 1;
  BYTE2(CmpCallbackListLock.Affinity) = 6;
  HIDWORD(CmpCallbackListLock.Affinity) = 0;
  WheaPassiveDrsListLock = 0LL;
  LODWORD(WheaDrsDpc) = 275;
  qword_140EFE240 = 0LL;
  qword_140EFE258 = 0LL;
  qword_140EFE230 = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v1, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
