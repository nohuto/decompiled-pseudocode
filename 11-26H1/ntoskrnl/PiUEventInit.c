/*
 * XREFs of PiUEventInit @ 0x140CCAF2C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 */

__int64 __fastcall PiUEventInit(int a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rcx
  char *v4; // r9
  char *v5; // r10
  char *v6; // r11
  char *v7; // rbx
  _QWORD *v8; // rax

  v1 = 0;
  if ( !a1 )
  {
    PiUEventClientRegistrationListLock.Count = 1;
    PiUEventClientRegistrationListLock.Event.Header.WaitListHead.Blink = &PiUEventClientRegistrationListLock.Event.Header.WaitListHead;
    PiUEventClientRegistrationListLock.Event.Header.WaitListHead.Flink = &PiUEventClientRegistrationListLock.Event.Header.WaitListHead;
    PiUEventClientRegistrationListLock.Owner = 0LL;
    PiUEventUsermodeEventQueueLock.Event.Header.WaitListHead.Blink = &PiUEventUsermodeEventQueueLock.Event.Header.WaitListHead;
    PiUEventUsermodeEventQueueLock.Event.Header.WaitListHead.Flink = &PiUEventUsermodeEventQueueLock.Event.Header.WaitListHead;
    PiUEventClientRegistrationListLock.Contention = 0;
    PiUEventBroadcastEventQueueLock.Event.Header.WaitListHead.Blink = &PiUEventBroadcastEventQueueLock.Event.Header.WaitListHead;
    v2 = 14LL;
    PiUEventBroadcastEventQueueLock.Event.Header.WaitListHead.Flink = &PiUEventBroadcastEventQueueLock.Event.Header.WaitListHead;
    v3 = 0LL;
    LOWORD(PiUEventClientRegistrationListLock.Event.Header.Lock) = 1;
    v4 = (char *)&PiUEventDevInterfaceClientList;
    PiUEventClientRegistrationListLock.Event.Header.Size = 6;
    v5 = (char *)&PiUEventDevInstanceClientList;
    PiUEventClientRegistrationListLock.Event.Header.SignalState = 0;
    v6 = (char *)&PiUEventDevInstancePropertyClientList;
    PiUEventUsermodeEventQueueLock.Count = 1;
    v7 = (char *)&PiUEventDevHandleClientList;
    PiUEventUsermodeEventQueueLock.Owner = 0LL;
    PiUEventUsermodeEventQueueLock.Contention = 0;
    LOWORD(PiUEventUsermodeEventQueueLock.Event.Header.Lock) = 1;
    PiUEventUsermodeEventQueueLock.Event.Header.Size = 6;
    PiUEventUsermodeEventQueueLock.Event.Header.SignalState = 0;
    PiUEventBroadcastEventQueueLock.Count = 1;
    PiUEventBroadcastEventQueueLock.Owner = 0LL;
    PiUEventBroadcastEventQueueLock.Contention = 0;
    LOWORD(PiUEventBroadcastEventQueueLock.Event.Header.Lock) = 1;
    PiUEventBroadcastEventQueueLock.Event.Header.Size = 6;
    PiUEventBroadcastEventQueueLock.Event.Header.SignalState = 0;
    do
    {
      v8 = (_QWORD *)((char *)&PiUEventDevInterfaceClientList + v3);
      *(_QWORD *)((char *)&PiUEventDevInstanceClientList + v3 + 8) = v5;
      v8[1] = v4;
      v5 += 16;
      *v8 = v8;
      v4 += 16;
      *(_QWORD *)((char *)&PiUEventDevInstancePropertyClientList + v3 + 8) = v6;
      *(_QWORD *)((char *)&PiUEventDevInstanceClientList + v3) = (char *)&PiUEventDevInstanceClientList + v3;
      v6 += 16;
      *(_QWORD *)((char *)&PiUEventDevHandleClientList + v3 + 8) = v7;
      *(_QWORD *)((char *)&PiUEventDevInstancePropertyClientList + v3) = (char *)&PiUEventDevInstancePropertyClientList
                                                                       + v3;
      v7 += 16;
      *(_QWORD *)((char *)&PiUEventDevHandleClientList + v3) = (char *)&PiUEventDevHandleClientList + v3;
      v3 += 16LL;
      --v2;
    }
    while ( v2 );
    qword_140F84B88 = (__int64)&PiUEventUsermodeEventQueue;
    PiUEventUsermodeEventQueue = &PiUEventUsermodeEventQueue;
    qword_140F84B28 = (__int64)&PiUEventBroadcastEventQueue;
    PiUEventBroadcastEventQueue = &PiUEventBroadcastEventQueue;
    return (unsigned int)ExSubscribeWnfStateChange(
                           (__int64)&PiUEventMetaNotificationHandle,
                           (__int64)&WNF_PNPA_DEVNODES_CHANGED);
  }
  return v1;
}
