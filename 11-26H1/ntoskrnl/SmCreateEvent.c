/*
 * XREFs of SmCreateEvent @ 0x140B4EDE8
 * Callers:
 *     SmRegistrationCtxStart @ 0x140B4ED90 (SmRegistrationCtxStart.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x140723CF0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmCreateEvent(__int64 a1, PVOID *a2)
{
  NTSTATUS v3; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+28h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  EventHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    if ( v3 < 0 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
    }
    else
    {
      *a2 = Object;
      v3 = 0;
    }
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)v3;
}
