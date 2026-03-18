/*
 * XREFs of PopDereferenceWakeInfos @ 0x1404FA21C
 * Callers:
 *     PopGetWakeSource @ 0x140B322A4 (PopGetWakeSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     PopWakeInfoDereference @ 0x1404FE7D4 (PopWakeInfoDereference.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDereferenceWakeInfos(unsigned int a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F11D08.Teb, &LockHandle);
  if ( (_DWORD)v2 )
  {
    v4 = a2;
    do
    {
      PopWakeInfoDereference(*v4++);
      --v2;
    }
    while ( v2 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExFreePoolWithTag(a2, 0x206D654Du);
}
