/*
 * XREFs of KiRcuCheckQuiescentForIdle @ 0x1405F29D8
 * Callers:
 *     KiRcuStartGracePeriodEnumCallback @ 0x1404F3738 (KiRcuStartGracePeriodEnumCallback.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRcuReportQuiescentState @ 0x1404D3098 (KiRcuReportQuiescentState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiRcuCheckQuiescentForIdle(unsigned __int64 *a1)
{
  struct _KTHREAD *Thread; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v5; // edi

  Thread = KiDpcCorralLock.WaitBlock[2].Thread;
  if ( *(char *)(a1[2] + 14567) <= 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v5 = KiRcuReportQuiescentState(a1, (signed __int64)Thread, 1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
