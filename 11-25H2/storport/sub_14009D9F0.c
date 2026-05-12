/*
 * XREFs of sub_14009D9F0 @ 0x14009D9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14008F5F4 @ 0x14008F5F4 (sub_14008F5F4.c)
 *     sub_14009F5C4 @ 0x14009F5C4 (sub_14009F5C4.c)
 */

void __fastcall sub_14009D9F0(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  char *DeviceExtension; // rdi
  struct _IO_WORKITEM *v4; // rbx
  unsigned __int64 v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 240, &LockHandle);
  v4 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 237);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 == Context )
  {
    sub_14008F5F4(*((_QWORD *)DeviceExtension + 3), *((_DWORD *)DeviceExtension + 26), -2147221375, 1);
    ++*(_DWORD *)(*((_QWORD *)DeviceExtension + 3) + 4700LL);
    sub_14009F5C4(DeviceExtension);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 240, &LockHandle);
    if ( *((struct _IO_WORKITEM **)DeviceExtension + 237) == Context )
    {
      *((_QWORD *)DeviceExtension + 237) = 0LL;
      *((_DWORD *)DeviceExtension + 476) = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  IoFreeWorkItem(Context);
  v5 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v6 = *(_DWORD *)(v5 + *((_QWORD *)DeviceExtension + 5));
  while ( (v6 & 1) == 0 )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + *((_QWORD *)DeviceExtension + 5)), v6 - 2, v6);
    if ( v7 == v6 )
      return;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
}
