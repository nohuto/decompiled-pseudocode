/*
 * XREFs of KeAlertThread @ 0x1402C5C40
 * Callers:
 *     KeRequestTerminationThread @ 0x1402C5B58 (KeRequestTerminationThread.c)
 *     IoDecrementKeepAliveCount @ 0x1404C7930 (IoDecrementKeepAliveCount.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1404CE370 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     KeAlertResumeThread @ 0x1405EBF70 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x140B1B8F0 (NtAlertThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAlertThread @ 0x14052E3A8 (KiAlertThread.c)
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
