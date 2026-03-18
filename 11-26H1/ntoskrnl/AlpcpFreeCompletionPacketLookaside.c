/*
 * XREFs of AlpcpFreeCompletionPacketLookaside @ 0x1404AAF0C
 * Callers:
 *     AlpcpDeletePort @ 0x1408EA7B0 (AlpcpDeletePort.c)
 *     AlpcpInitializeCompletionList @ 0x140A8CBD8 (AlpcpInitializeCompletionList.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140A8D65C (AlpcpAssociateIoCompletionPort.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1404AAF70 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 */

void __fastcall AlpcpFreeCompletionPacketLookaside(KSPIN_LOCK *P)
{
  int v2; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(P, &LockHandle);
  if ( *((_DWORD *)P + 3) )
  {
    v2 = 0;
    *((_DWORD *)P + 6) = 1;
  }
  else
  {
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
    AlpcpDeferredFreeCompletionPacketLookaside(P);
}
