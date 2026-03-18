/*
 * XREFs of KiRcuCheckQuiescentForIdle @ 0x1405F0068
 * Callers:
 *     KiRcuStartGracePeriodEnumCallback @ 0x1404FA128 (KiRcuStartGracePeriodEnumCallback.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRcuReportQuiescentState @ 0x1404D99B8 (KiRcuReportQuiescentState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiRcuCheckQuiescentForIdle(unsigned __int64 *a1)
{
  signed __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v5; // edi

  v2 = qword_140F24F28;
  if ( *(char *)(a1[2] + 14567) <= 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v5 = KiRcuReportQuiescentState(a1, v2, 1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
