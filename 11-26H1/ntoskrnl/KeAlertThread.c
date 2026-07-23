/*
 * XREFs of KeAlertThread @ 0x1403108E0
 * Callers:
 *     KeRequestTerminationThread @ 0x1403107F4 (KeRequestTerminationThread.c)
 *     IoDecrementKeepAliveCount @ 0x1404C1670 (IoDecrementKeepAliveCount.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1404C7DA0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     KeAlertResumeThread @ 0x1405EE8E0 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x140B1DB00 (NtAlertThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAlertThread @ 0x1405308C8 (KiAlertThread.c)
 */

char __fastcall KeAlertThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  char v7; // al
  char v8; // bl
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( *(_QWORD *)(v4 + 64) );
  }
  LOBYTE(a3) = v3;
  v7 = KiAlertThread(CurrentPrcb, v4, a3);
  *(_QWORD *)(v4 + 64) = 0LL;
  v8 = v7;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 2u, CurrentIrql);
  return v8;
}
