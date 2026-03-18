/*
 * XREFs of BgpGxRectangleSize @ 0x1404FA16C
 * Callers:
 *     AnFwConfigureProgressResources @ 0x140C510AC (AnFwConfigureProgressResources.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     BgpGxReservePoolRectangleSize @ 0x140C54E28 (BgpGxReservePoolRectangleSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
