/*
 * XREFs of StorProcessNotificationWorker @ 0x1401B07A0
 * Callers:
 *     <none>
 * Callees:
 *     StorGetEventNotificationContext @ 0x14012C6D0 (StorGetEventNotificationContext.c)
 *     StorProcessNotification @ 0x1401AFFBC (StorProcessNotification.c)
 */

void __fastcall StorProcessNotificationWorker(__int64 DeviceObject, PVOID Context)
{
  _BYTE *v2; // rbx
  _BYTE *EventNotificationContext; // rax
  KSPIN_LOCK *v5; // rbp
  struct _LIST_ENTRY *v6; // r14
  PLIST_ENTRY v7; // rax
  PLIST_ENTRY v8; // rsi

  v2 = 0LL;
  if ( DeviceObject )
  {
    EventNotificationContext = (_BYTE *)StorGetEventNotificationContext(DeviceObject);
    v2 = EventNotificationContext;
    if ( EventNotificationContext )
    {
      if ( (*EventNotificationContext & 1) == 0 )
      {
        v5 = (KSPIN_LOCK *)(EventNotificationContext + 144);
        v6 = (struct _LIST_ENTRY *)(EventNotificationContext + 128);
        do
        {
          v7 = ExInterlockedRemoveHeadList(v6, v5);
          v8 = v7;
          if ( !v7 )
            break;
          StorProcessNotification(DeviceObject, (__int64)&v7[1]);
          ExFreePoolWithTag(v8, 0x4E456152u);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 38, 0xFFFFFFFF) == 1 )
            break;
        }
        while ( (*v2 & 1) == 0 );
      }
    }
  }
  KeSetEvent((PRKEVENT)v2 + 7, 0, 0);
}
