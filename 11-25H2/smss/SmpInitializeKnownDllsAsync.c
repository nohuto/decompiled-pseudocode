/*
 * XREFs of SmpInitializeKnownDllsAsync @ 0x140015AF0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 */

__int64 SmpInitializeKnownDllsAsync()
{
  NTSTATUS v0; // ebx
  int v1; // eax
  void *v2; // rcx
  _QWORD v4[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+80h] [rbp+10h] BYREF
  __int64 v7; // [rsp+88h] [rbp+18h] BYREF

  EventHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v7 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v4[1] = L"\\KnownDlls\\SmKnownDllsInitialized";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v4;
  v4[0] = 4456514LL;
  ObjectAttributes.Attributes = 80;
  v0 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v0 < 0 )
    goto LABEL_4;
  v1 = TpAllocWork(&v7, &SmpInitializeKnownDllsWorker, EventHandle, &SmpCallbackEnviron);
  v0 = v1;
  if ( v1 < 0 )
  {
    SmpLogFailure((__int64)"SmpInitializeKnownDllsAsync", 4195, v1);
LABEL_4:
    v2 = EventHandle;
    goto LABEL_5;
  }
  TpPostWork(v7);
  TpReleaseWork(v7);
  v2 = 0LL;
  EventHandle = 0LL;
LABEL_5:
  if ( v2 )
  {
    NtSetEvent(v2, 0LL);
    NtClose(EventHandle);
  }
  return (unsigned int)v0;
}
