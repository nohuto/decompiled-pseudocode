/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x1405F8FB0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x140227750 (KiEndThreadAccountingPeriodEx.c)
 */

void __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  KiEndThreadAccountingPeriodEx(a1, a2, a3, 0);
}
