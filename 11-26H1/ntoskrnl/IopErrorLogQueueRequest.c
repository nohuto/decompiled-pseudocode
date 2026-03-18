/*
 * XREFs of IopErrorLogQueueRequest @ 0x140ADC288
 * Callers:
 *     IopErrorLogThread @ 0x140ADBA70 (IopErrorLogThread.c)
 *     IopErrorLogConnectSession @ 0x140ADC230 (IopErrorLogConnectSession.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x140483D00 (KeInitializeTimer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *Pool2; // rax
  struct _KDPC *Dpc; // rdi

  Pool2 = (struct _KDPC *)ExAllocatePool2(0x40uLL);
  Dpc = Pool2;
  if ( Pool2 )
  {
    KeInitializeDpc(Pool2, (PKDEFERRED_ROUTINE)IopErrorLogDpc, 0LL);
    KeInitializeTimer((PKTIMER)&Dpc[1]);
    LOBYTE(Pool2) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)-300000000LL, 0, 0x7D0u, Dpc);
  }
  else
  {
    IopErrorLogSessionPending = 0;
  }
  return (char)Pool2;
}
