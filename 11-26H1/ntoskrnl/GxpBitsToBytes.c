/*
 * XREFs of GxpBitsToBytes @ 0x1404FDC2C
 * Callers:
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     BgpGxRectangleCreate @ 0x140C53640 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
