/*
 * XREFs of KiGetTrapFrameMode @ 0x14047C5B0
 * Callers:
 *     KiSwInterruptDispatch @ 0x140540C30 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
