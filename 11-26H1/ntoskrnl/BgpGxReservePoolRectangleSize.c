/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x140C54E28
 * Callers:
 *     BgpTxtRegionSize @ 0x140716540 (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x1404FA16C (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32;
}
