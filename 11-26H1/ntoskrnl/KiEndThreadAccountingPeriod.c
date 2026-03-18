/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x1405F65F0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x140225DC0 (KiEndThreadAccountingPeriodEx.c)
 */

void __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  KiEndThreadAccountingPeriodEx(a1, a2, a3, 0);
}
