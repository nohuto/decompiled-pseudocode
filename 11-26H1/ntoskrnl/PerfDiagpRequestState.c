/*
 * XREFs of PerfDiagpRequestState @ 0x140B2E60C
 * Callers:
 *     PerfDiagpBootSystemProxyCallback @ 0x14081ED60 (PerfDiagpBootSystemProxyCallback.c)
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x14081F050 (PerfDiagpSecondaryLogonProxyCallback.c)
 *     PerfDiagpShutdownProxyCallback @ 0x14081F080 (PerfDiagpShutdownProxyCallback.c)
 *     PerfDiagpBootUserProxyCallback @ 0x140B2E5E0 (PerfDiagpBootUserProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall PerfDiagpRequestState(int a1)
{
  __int64 Pool2; // rax

  if ( a1 < 8 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_QWORD *)(Pool2 + 16) = PerfDiagpProxyWorker;
      *(_QWORD *)Pool2 = 0LL;
      *(_DWORD *)(Pool2 + 32) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
    }
  }
}
