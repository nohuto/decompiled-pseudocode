/*
 * XREFs of ObpDeleteDirectoryObject @ 0x140AF94C0
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 */

void __fastcall ObpDeleteDirectoryObject(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v9, 0);
  v5 = (struct _KTHREAD *)(a1 + 296);
  if ( (*(_QWORD *)&v5->Header.Lock & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExfAcquireReleasePushLockExclusive(v5, a2, a3, a4);
    KeLeaveCriticalRegion();
  }
  v6 = *(void **)(a1 + 312);
  if ( v6 )
    ObDereferenceObjectDeferDelete(v6);
  v7 = *(void **)(a1 + 328);
  if ( v7 )
    ObDereferenceObjectDeferDelete(v7);
}
