/*
 * XREFs of NtCompleteConnectPort @ 0x1407BFB10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

__int64 NtCompleteConnectPort()
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !*(_DWORD *)&AlpcpMessageLogLock.ApcStateFill[8] )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeLeaveCriticalRegion();
  return 3221225659LL;
}
