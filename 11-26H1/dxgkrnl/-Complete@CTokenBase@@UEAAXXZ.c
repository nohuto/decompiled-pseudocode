/*
 * XREFs of ?Complete@CTokenBase@@UEAAXXZ @ 0x140042190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenBase::Complete(LARGE_INTEGER *this)
{
  this[3].LowPart = 2;
  this[4] = KeQueryPerformanceCounter(0LL);
}
