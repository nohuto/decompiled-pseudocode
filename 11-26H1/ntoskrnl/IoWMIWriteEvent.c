/*
 * XREFs of IoWMIWriteEvent @ 0x1403E0E10
 * Callers:
 *     PpmFireWmiEvent @ 0x14060FA28 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x14060FAB0 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     EtwTraceEvent @ 0x140216EE0 (EtwTraceEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     WmipDoFindRegEntryByProviderId @ 0x1403E07D0 (WmipDoFindRegEntryByProviderId.c)
 *     ExInterlockedInsertTailList @ 0x1403E1640 (ExInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoWMIWriteEvent(PVOID WnodeEventItem)
{
  NTSTATUS v1; // edi
  int v3; // eax
  int v4; // ebx
  _LIST_ENTRY *Pool2; // rbp
  int v6; // ebx
  _DWORD *RegEntryByProviderId; // rax
  KIRQL v8; // r8
  struct _LIST_ENTRY *v9; // rbx
  NTSTATUS result; // eax
  int v11; // eax
  unsigned __int16 v12; // cx

  v1 = 0;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v3 = *((_DWORD *)WnodeEventItem + 11);
  v4 = v3 & 0x20000;
  if ( (v3 & 0x20000) != 0 || (v3 & 0x40000) != 0 )
  {
    v11 = *(_DWORD *)WnodeEventItem;
    v12 = *((_WORD *)WnodeEventItem + 4);
    if ( (unsigned int)v11 < 0x30 )
      return -1073741789;
    if ( v4 )
    {
      if ( (unsigned int)v11 <= 0xFFFF )
        goto LABEL_15;
    }
    else if ( v11 >= 0 )
    {
LABEL_15:
      result = EtwTraceEvent(v12, WnodeEventItem, 48LL, -1072431104, 0);
      if ( v4 )
        return result;
      goto LABEL_4;
    }
    return -2147483643;
  }
LABEL_4:
  Pool2 = (_LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return -1073741670;
  v6 = *((_DWORD *)WnodeEventItem + 1);
  KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(v6);
  v9 = (struct _LIST_ENTRY *)RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement(RegEntryByProviderId + 12);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v8);
  *((_DWORD *)WnodeEventItem + 10) = *((_DWORD *)WnodeEventItem + 2);
  Pool2[1].Flink = v9;
  Pool2[1].Blink = (struct _LIST_ENTRY *)WnodeEventItem;
  ExInterlockedInsertTailList(&WmipNPEvent, Pool2, &WmipNPNotificationSpinlock);
  if ( _InterlockedIncrement(&WmipEventWorkItems) == 1 )
    ExQueueWorkItem(&WmipEventWorkQueueItem, DelayedWorkQueue);
  return v1;
}
