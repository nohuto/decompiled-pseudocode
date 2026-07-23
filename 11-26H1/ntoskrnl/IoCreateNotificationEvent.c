/*
 * XREFs of IoCreateNotificationEvent @ 0x140B01E70
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 *     DifIoCreateNotificationEventWrapper @ 0x14065EAE0 (DifIoCreateNotificationEventWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ZwCreateEvent @ 0x1407288C0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

PKEVENT __stdcall IoCreateNotificationEvent(PUNICODE_STRING EventName, PHANDLE EventHandle)
{
  NTSTATUS v3; // eax
  struct _KEVENT *v4; // rbx
  PKEVENT result; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandlea; // [rsp+70h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+20h] BYREF

  ObjectAttributes.ObjectName = EventName;
  EventHandlea = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 640LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent(&EventHandlea, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u) < 0 )
    return 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(EventHandlea, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  v4 = (struct _KEVENT *)Object;
  if ( v3 < 0 )
    v4 = 0LL;
  else
    ObfDereferenceObject(Object);
  result = v4;
  *EventHandle = EventHandlea;
  return result;
}
