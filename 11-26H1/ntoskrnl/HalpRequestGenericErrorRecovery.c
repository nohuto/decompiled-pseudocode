/*
 * XREFs of HalpRequestGenericErrorRecovery @ 0x14058F490
 * Callers:
 *     <none>
 * Callees:
 *     HalpGenericErrorSourceRecovery @ 0x14058EED0 (HalpGenericErrorSourceRecovery.c)
 */

__int64 __fastcall HalpRequestGenericErrorRecovery(__int64 a1, _DWORD *a2)
{
  return HalpGenericErrorSourceRecovery(a1, a2);
}
