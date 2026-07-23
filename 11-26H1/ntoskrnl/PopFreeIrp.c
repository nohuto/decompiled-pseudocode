/*
 * XREFs of PopFreeIrp @ 0x1403BFDEC
 * Callers:
 *     PopRequestCompletion @ 0x1403BE4B0 (PopRequestCompletion.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x1403BE5F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopSystemIrpCompletion @ 0x140C13DC0 (PopSystemIrpCompletion.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     PopFxReleasePowerIrp @ 0x1403BFFD8 (PopFxReleasePowerIrp.c)
 */

LONG_PTR __fastcall PopFreeIrp(PIRP Irp)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rbp
  void *v5; // r14
  __int64 v6; // rcx
  __int64 **v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (__int64 *)*((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v3 = v2[25];
  v4 = (void *)v2[4];
  v5 = (void *)v2[3];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitListEntry.Blink, &LockHandle);
  v6 = *v2;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  if ( *(__int64 **)(v6 + 8) != v2 || (v7 = (__int64 **)v2[1], *v7 != v2) )
    __fastfail(3u);
  *v7 = (__int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 && *((_BYTE *)v2 + 184) == 2 && *((_DWORD *)v2 + 47) == 1 )
  {
    PopFxReleasePowerIrp(v3);
  }
  else
  {
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v2);
    IoFreeIrp(Irp);
  }
  ObfDereferenceObjectWithTag(v4, 0x72496F50u);
  return ObfDereferenceObjectWithTag(v5, 0x72496F50u);
}
