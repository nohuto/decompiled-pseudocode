/*
 * XREFs of KiGetTrapFrameMode @ 0x140475F20
 * Callers:
 *     KiSwInterruptDispatch @ 0x1405430B0 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
