/*
 * XREFs of HalpPowerSetRebootHandler @ 0x140581D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPowerSetRebootHandler(__int64 a1)
{
  return _InterlockedExchange64(&HalpRebootHandler, a1);
}
