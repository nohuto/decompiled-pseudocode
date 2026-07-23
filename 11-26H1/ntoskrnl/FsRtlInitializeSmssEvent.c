/*
 * XREFs of FsRtlInitializeSmssEvent @ 0x140CBECE4
 * Callers:
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 */

NTSTATUS FsRtlInitializeSmssEvent()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  _QWORD v2[2]; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  EventHandle = 0LL;
  v2[1] = L"\\Device\\VolumesSafeForWriteAccess";
  v2[0] = 4456514LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 592LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result >= 0 )
  {
    Object = 0LL;
    v1 = ObReferenceObjectByHandle(EventHandle, 0x100000u, 0LL, 0, &Object, 0LL);
    NtClose(EventHandle);
    if ( v1 >= 0 )
    {
      SmssEventWorkItem.List.Flink = 0LL;
      SmssEventWorkItem.WorkerRoutine = (void (__fastcall *)(void *))FsRtlWaitForSmssEvent;
      SmssEventWorkItem.Parameter = Object;
      ExQueueWorkItem(&SmssEventWorkItem, DelayedWorkQueue);
      return 0;
    }
    else
    {
      return v1;
    }
  }
  return result;
}
