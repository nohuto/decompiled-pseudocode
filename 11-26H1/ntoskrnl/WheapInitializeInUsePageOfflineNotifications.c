/*
 * XREFs of WheapInitializeInUsePageOfflineNotifications @ 0x14084F058
 * Callers:
 *     WheaInitializeServices @ 0x140CEE330 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

PVOID *WheapInitializeInUsePageOfflineNotifications()
{
  PVOID *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &WheapInUsePageOfflineNotifyList;
  *(_QWORD *)&WheapInUsePageOfflineNotifyLock.Header.Lock = 0LL;
  qword_140EEF118 = (__int64)&WheapInUsePageOfflineNotifyList;
  WheapInUsePageOfflineNotifyList = &WheapInUsePageOfflineNotifyList;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  WheapInUsePageOfflineNotifyInit = 1;
  return result;
}
