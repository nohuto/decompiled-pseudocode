/*
 * XREFs of HvpGetCellContextReinitialize @ 0x1408D9300
 * Callers:
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextMove @ 0x1408DBAE4 (HvpGetCellContextMove.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 */

double __fastcall HvpGetCellContextReinitialize(__int64 a1)
{
  return HvpGetCellContextInitialize(a1);
}
