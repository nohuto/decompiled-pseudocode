/*
 * XREFs of HvpGetCellContextReinitialize @ 0x1408DF8C0
 * Callers:
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextMove @ 0x1408E20A4 (HvpGetCellContextMove.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

double __fastcall HvpGetCellContextReinitialize(__int64 a1)
{
  return HvpGetCellContextInitialize(a1);
}
