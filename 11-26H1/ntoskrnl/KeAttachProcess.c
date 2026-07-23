/*
 * XREFs of KeAttachProcess @ 0x1403111B0
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 *     KiExecuteDpcDelegate @ 0x1405FD980 (KiExecuteDpcDelegate.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAttachProcess @ 0x140312370 (KiAttachProcess.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPROCESS *v2; // r8
  unsigned __int8 v3; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v2 = CurrentThread->ApcState.Process;
  if ( v2 != Process )
  {
    if ( CurrentThread->ApcStateIndex
      || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
      || (*(_DWORD *)&Process->0 & 0x800) != 0 )
    {
      KeBugCheckEx(
        5u,
        (ULONG_PTR)Process,
        (ULONG_PTR)v2,
        CurrentThread->ApcStateIndex,
        KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    }
    KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, &v3);
    KiAttachProcess((LegacyAutoBoost *)CurrentThread, (__int64)&CurrentThread->600);
  }
}
