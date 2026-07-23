/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x140516710
 * Callers:
 *     KiScanInterruptObjectList @ 0x14072E930 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x14030E378 (IoProcessPassiveInterrupts.c)
 *     KiForceIdleInterruptNotify @ 0x140338970 (KiForceIdleInterruptNotify.c)
 */

__int64 __fastcall KiDispatchPassiveInterrupts(__int64 a1)
{
  if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 48) <= 0x9F )
    KiForceIdleInterruptNotify();
  return IoProcessPassiveInterrupts();
}
