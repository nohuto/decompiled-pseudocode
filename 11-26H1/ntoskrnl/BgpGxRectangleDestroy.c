/*
 * XREFs of BgpGxRectangleDestroy @ 0x140C53414
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1404AD084 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1404BFC2C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1404BFCF0 (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x140716248 (BgpGxConvertRectangle.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1407162FC (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxParseBitmap @ 0x140C4F4E8 (BgpGxParseBitmap.c)
 *     BgpGxBlendRectangle @ 0x140C517E0 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140C51AD0 (BgpGxDrawBitmapImage.c)
 *     BgpTxtCreateRegion @ 0x140C51CF0 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140C51F4C (BgpTxtDestroyRegion.c)
 *     BgpTxtDisplayString @ 0x140C51FA0 (BgpTxtDisplayString.c)
 *     AnFwFadeCompletion @ 0x140C52980 (AnFwFadeCompletion.c)
 *     TxtpDestroyCacheEntry @ 0x140C52B30 (TxtpDestroyCacheEntry.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140C53390 (BgpGxReadRectangle.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
