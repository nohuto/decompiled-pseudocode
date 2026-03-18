/*
 * XREFs of ?DxgCreateEvent@@YAJPEAPEAU_KEVENT@@W4_EVENT_TYPE@@E@Z @ 0x14006AE14
 * Callers:
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1401A37D4 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403ED754 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgCreateEvent(PVOID *a1, enum _EVENT_TYPE a2)
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+70h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+28h] BYREF

  *a1 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  EventHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result >= 0 )
  {
    Object = 0LL;
    ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    ZwClose(EventHandle);
    *a1 = Object;
    return 0;
  }
  return result;
}
