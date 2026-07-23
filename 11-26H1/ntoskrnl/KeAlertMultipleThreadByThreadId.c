/*
 * XREFs of KeAlertMultipleThreadByThreadId @ 0x1405EE81C
 * Callers:
 *     PspIumAlertMultipleThreadByThreadId @ 0x1406191A8 (PspIumAlertMultipleThreadByThreadId.c)
 *     NtAlertMultipleThreadByThreadId @ 0x140804F30 (NtAlertMultipleThreadByThreadId.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     KiAlertSingleThreadByThreadId @ 0x140382DF0 (KiAlertSingleThreadByThreadId.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeAlertMultipleThreadByThreadId(__int64 a1, int a2, struct _KTHREAD *a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v6; // esi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rbp

  if ( a2 )
  {
    v4 = 0LL;
    v6 = a2;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      while ( (unsigned int)v4 < v6 )
      {
        KiAlertSingleThreadByThreadId((__int64)CurrentPrcb, *(_QWORD *)(a1 + 8 * v4), a3, a4);
        v4 = (unsigned int)(v4 + 1);
        if ( (v4 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
          break;
      }
      KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
    }
    while ( (unsigned int)v4 < v6 );
  }
}
