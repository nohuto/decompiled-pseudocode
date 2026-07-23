/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x1404783C0
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 *     KiEpfStart @ 0x1405F9914 (KiEpfStart.c)
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 *     ExpSetSwappingKernelApc @ 0x140C0C8F0 (ExpSetSwappingKernelApc.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // dl

  CurrentThread = KeGetCurrentThread();
  v2 = (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0;
  if ( Enable != v2 )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
  }
  return v2;
}
