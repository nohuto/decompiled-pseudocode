/*
 * XREFs of IopAcquireReleaseDispatcherLock @ 0x140AA90C4
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14030FAE0 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void __fastcall IopAcquireReleaseDispatcherLock(struct _KEVENT *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = a1 + 7;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v2, 0, 0);
    KeLeaveCriticalRegion();
  }
}
