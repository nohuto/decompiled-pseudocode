/*
 * XREFs of WheapInitializeInUsePageOfflineNotifications @ 0x140848D88
 * Callers:
 *     WheaInitializeServices @ 0x140CE7F90 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *WheapInitializeInUsePageOfflineNotifications()
{
  LIST_ENTRY *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &WheapInUsePageOfflineNotifyLock.Header.WaitListHead;
  *(_QWORD *)&WheapInUsePageOfflineNotifyLock.Header.Lock = 0LL;
  WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Blink = &WheapInUsePageOfflineNotifyLock.Header.WaitListHead;
  WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Flink = &WheapInUsePageOfflineNotifyLock.Header.WaitListHead;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  WheapInUsePageOfflineNotifyInit = 1;
  return result;
}
