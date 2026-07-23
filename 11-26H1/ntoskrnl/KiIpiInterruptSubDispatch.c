/*
 * XREFs of KiIpiInterruptSubDispatch @ 0x140734A40
 * Callers:
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x140229AE0 (KiStartInterruptCycleAccumulation.c)
 *     KiIpiProcessRequests @ 0x14047B410 (KiIpiProcessRequests.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 */

char __fastcall KiIpiInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 v2; // r8
  char result; // al

  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(0xEu);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xEuLL);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  KiStartInterruptCycleAccumulation((__int64)KeGetCurrentPrcb(), 0LL);
  _enable();
  result = KiIpiProcessRequests((_KTRAP_FRAME *)(v0 - 128), 0LL, v2);
  _disable();
  return result;
}
