/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x140516120
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x1403B45E4 (IopCancelWaitCompletionPacket.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rsi
  KIRQL v8; // r14
  KIRQL v9; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(
         WaitCompletionPacketHandle,
         1u,
         IopWaitCompletionPacketObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    v7 = (KSPIN_LOCK *)*((_QWORD *)v4 + 11);
    v8 = v6;
    if ( v7 )
      ObfReferenceObjectWithTag(*((PVOID *)v4 + 11), 0x746C6644u);
    KeReleaseSpinLock((PKSPIN_LOCK)v4 + 12, v8);
    if ( !v7 )
    {
      v5 = -1073741536;
      goto LABEL_15;
    }
    KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 12);
    if ( *((_BYTE *)v4 + 104) )
    {
      if ( *((KSPIN_LOCK **)v4 + 11) == v7 )
      {
        if ( IopCancelWaitCompletionPacket(v4, RemoveSignaledPacket, v9) )
        {
LABEL_14:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          goto LABEL_15;
        }
        if ( *((_BYTE *)v4 + 104) )
          v5 = 259;
      }
      else
      {
        v5 = -1073700861;
      }
    }
    else
    {
      v5 = -1073741536;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v4 + 12, v9);
    goto LABEL_14;
  }
LABEL_15:
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return v5;
}
