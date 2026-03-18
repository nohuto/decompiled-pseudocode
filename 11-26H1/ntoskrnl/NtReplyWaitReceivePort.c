/*
 * XREFs of NtReplyWaitReceivePort @ 0x1407BFF20
 * Callers:
 *     DifNtReplyWaitReceivePortWrapper @ 0x140689600 (DifNtReplyWaitReceivePortWrapper.c)
 *     NtListenPort @ 0x1407BFC20 (NtListenPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     NtReplyWaitReceivePortEx @ 0x1407BFF70 (NtReplyWaitReceivePortEx.c)
 */

__int64 __fastcall NtReplyWaitReceivePort(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !*(_DWORD *)&AlpcpMessageLogLock.ApcStateFill[8] )
    return NtReplyWaitReceivePortEx(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeLeaveCriticalRegion();
  return 3221225659LL;
}
