/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x14051BB80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x1403AA8D4 (IopCancelWaitCompletionPacket.c)
 *     Feature_4132124986__private_IsEnabledDeviceUsageNoInline @ 0x1405CB8AC (Feature_4132124986__private_IsEnabledDeviceUsageNoInline.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtCancelWaitCompletionPacket(void *a1, char a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  unsigned int v5; // ebx
  KIRQL v6; // al
  KSPIN_LOCK *v7; // r14
  KIRQL v8; // bp
  KIRQL v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  char v14; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(
         a1,
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
      goto LABEL_17;
    }
    KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 12);
    v13 = (unsigned int)Feature_4132124986__private_IsEnabledDeviceUsageNoInline(v11, v10, v12) == 0;
    v14 = *((_BYTE *)v4 + 104);
    if ( v13 )
    {
      if ( !v14 )
        goto LABEL_8;
    }
    else
    {
      if ( !v14 )
      {
LABEL_8:
        v5 = -1073741536;
        goto LABEL_15;
      }
      if ( *((KSPIN_LOCK **)v4 + 11) != v7 )
      {
        v5 = -1073700861;
        goto LABEL_15;
      }
    }
    if ( IopCancelWaitCompletionPacket(v4, a2, v9) )
    {
LABEL_16:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      goto LABEL_17;
    }
    if ( *((_BYTE *)v4 + 104) )
      v5 = 259;
LABEL_15:
    KeReleaseSpinLock((PKSPIN_LOCK)v4 + 12, v9);
    goto LABEL_16;
  }
LABEL_17:
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return v5;
}
