/*
 * XREFs of FsRtlInitializeSmssEvent @ 0x140CB8CA0
 * Callers:
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 */

__int64 FsRtlInitializeSmssEvent()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  _QWORD v2[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v4; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  Handle = 0LL;
  v2[1] = L"\\Device\\VolumesSafeForWriteAccess";
  v2[0] = 4456514LL;
  v3[2] = v2;
  v3[0] = 48LL;
  v3[3] = 592LL;
  v3[1] = 0LL;
  v4 = 0LL;
  result = NtCreateEvent(&Handle, 0x1F0003u, (__int64)v3, NotificationEvent, 0);
  if ( (int)result >= 0 )
  {
    Object = 0LL;
    v1 = ObReferenceObjectByHandle(Handle, 0x100000u, 0LL, 0, &Object, 0LL);
    NtClose(Handle);
    if ( v1 >= 0 )
    {
      SmssEventWorkItem.List.Flink = 0LL;
      SmssEventWorkItem.WorkerRoutine = (void (__fastcall *)(void *))FsRtlWaitForSmssEvent;
      SmssEventWorkItem.Parameter = Object;
      ExQueueWorkItem(&SmssEventWorkItem, DelayedWorkQueue);
      return 0LL;
    }
    else
    {
      return (unsigned int)v1;
    }
  }
  return result;
}
