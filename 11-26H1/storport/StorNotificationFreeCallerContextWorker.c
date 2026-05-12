/*
 * XREFs of StorNotificationFreeCallerContextWorker @ 0x14012CCC0
 * Callers:
 *     <none>
 * Callees:
 *     StorGetEventNotificationContext @ 0x14012C6D0 (StorGetEventNotificationContext.c)
 */

void __fastcall StorNotificationFreeCallerContextWorker(__int64 IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 EventNotificationContext; // rdi
  _QWORD *v6; // rdx
  PVOID *v7; // rax

  if ( Context )
  {
    EventNotificationContext = StorGetEventNotificationContext(IoObject);
    if ( EventNotificationContext )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(EventNotificationContext + 24), 1u);
      v6 = (_QWORD *)*Context;
      if ( *(_QWORD **)(*Context + 8LL) != Context || (v7 = (PVOID *)Context[1], *v7 != Context) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      --*(_BYTE *)(EventNotificationContext + 1);
      ExReleaseResourceLite((PERESOURCE)(EventNotificationContext + 24));
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(Context, 0x4E456152u);
    }
  }
  IoFreeWorkItem(IoWorkItem);
}
