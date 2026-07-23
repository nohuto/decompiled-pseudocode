/*
 * XREFs of WheaInitializeServices @ 0x140CEE330
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x14084F058 (WheapInitializeInUsePageOfflineNotifications.c)
 *     WheapSetDefaultErrorSourceConfiguration @ 0x140CEE77C (WheapSetDefaultErrorSourceConfiguration.c)
 */

PVOID *WheaInitializeServices()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  WheapSetDefaultErrorSourceConfiguration();
  *(_QWORD *)&WheapPfaLock.Header.Lock = 0LL;
  WheapPfaLock.SListFaultAddress = &WheapPfaLock.Header.WaitListHead.Blink;
  WheapPfaLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&WheapPfaLock.Header.WaitListHead.Blink;
  _InterlockedOr(v1, 0);
  LOBYTE(WheapPfaLock.Header.WaitListHead.Flink) = 1;
  *(_QWORD *)&CmpContextListLock.AffinityPrimaryGroup = &CmpContextListLock.Affinity;
  CmpContextListLock.Affinity = (_KAFFINITY_EX *)&CmpContextListLock.Affinity;
  CmpContextListLock.QueueListEntry.Flink = (struct _LIST_ENTRY *)&CmpContextListLock.512;
  *(_QWORD *)&CmpContextListLock.ThreadFlags2 = &CmpContextListLock.512;
  qword_140EFE598 = (__int64)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  LODWORD(CmpContextListLock.Process) = 1;
  CmpContextListLock.UserAffinity = 0LL;
  *(_DWORD *)&CmpContextListLock.UserAffinityPrimaryGroup = 0;
  LOWORD(CmpContextListLock.AffinityVersion) = 1;
  BYTE2(CmpContextListLock.AffinityVersion) = 6;
  HIDWORD(CmpContextListLock.AffinityVersion) = 0;
  WheaPassiveDrsListLock = 0LL;
  LODWORD(WheaDrsDpc) = 275;
  qword_140EFE5A0 = 0LL;
  qword_140EFE5B8 = 0LL;
  qword_140EFE590 = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v1, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
