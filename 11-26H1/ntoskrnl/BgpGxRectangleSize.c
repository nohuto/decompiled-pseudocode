/*
 * XREFs of BgpGxRectangleSize @ 0x1404F377C
 * Callers:
 *     AnFwConfigureProgressResources @ 0x140C570AC (AnFwConfigureProgressResources.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 *     BgpGxReservePoolRectangleSize @ 0x140C5AE28 (BgpGxReservePoolRectangleSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
