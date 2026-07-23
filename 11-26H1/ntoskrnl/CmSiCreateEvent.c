/*
 * XREFs of CmSiCreateEvent @ 0x14049BBCC
 * Callers:
 *     CmpHiveCacheCreateHiveEntry @ 0x14086808C (CmpHiveCacheCreateHiveEntry.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1407288C0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmSiCreateEvent(__int64 a1, HANDLE *a2)
{
  NTSTATUS v3; // ebx
  HANDLE v4; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+28h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  EventHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v3 < 0 || (Object = 0LL, v3 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, 0LL, 0, &Object, 0LL), v3 < 0) )
  {
    v4 = EventHandle;
  }
  else
  {
    v4 = 0LL;
    *a2 = EventHandle;
    v3 = 0;
    a2[1] = Object;
    EventHandle = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v3;
}
