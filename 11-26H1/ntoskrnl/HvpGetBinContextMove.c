/*
 * XREFs of HvpGetBinContextMove @ 0x1408E20D0
 * Callers:
 *     HvpGetCellContextMove @ 0x1408E20A4 (HvpGetCellContextMove.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpGetBinContextMove(_WORD *a1, _WORD *a2)
{
  *a1 = *a2;
  return HvpGetBinContextInitialize(a2);
}
