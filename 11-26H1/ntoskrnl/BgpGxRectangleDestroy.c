/*
 * XREFs of BgpGxRectangleDestroy @ 0x140C59414
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1404A6714 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1404B947C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1404B9540 (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x14071AF38 (BgpGxConvertRectangle.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14071AFEC (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxParseBitmap @ 0x140C554E8 (BgpGxParseBitmap.c)
 *     BgpGxBlendRectangle @ 0x140C577E0 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140C57AD0 (BgpGxDrawBitmapImage.c)
 *     BgpTxtCreateRegion @ 0x140C57CF0 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140C57F4C (BgpTxtDestroyRegion.c)
 *     BgpTxtDisplayString @ 0x140C57FA0 (BgpTxtDisplayString.c)
 *     AnFwFadeCompletion @ 0x140C58980 (AnFwFadeCompletion.c)
 *     TxtpDestroyCacheEntry @ 0x140C58B30 (TxtpDestroyCacheEntry.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140C59390 (BgpGxReadRectangle.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
