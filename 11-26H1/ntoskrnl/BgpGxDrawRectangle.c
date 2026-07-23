/*
 * XREFs of BgpGxDrawRectangle @ 0x1404B947C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1404A6714 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x14071A834 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpGxDrawBitmapImage @ 0x140C57AD0 (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x140C57CC0 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x140C57FA0 (BgpTxtDisplayString.c)
 *     AnFwpFadeAnimationTimer @ 0x140C58350 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     BgpGxConvertRectangleEx @ 0x14048B3C0 (BgpGxConvertRectangleEx.c)
 *     GxpWriteFrameBufferPixels @ 0x1404B9540 (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x1404B98EC (BgpGetBitsPerPixel.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BgpGxRectangleDestroy @ 0x140C59414 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawRectangle(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rdi
  unsigned int BitsPerPixel; // eax
  _BYTE *v6; // rsi
  unsigned int v7; // ebx
  __int64 result; // rax
  char v9; // r9
  _BYTE *v10; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-78h] BYREF

  memset_0(v11, 0, 0x48uLL);
  v4 = 0LL;
  v10 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  v6 = 0LL;
  if ( *(_DWORD *)(a1 + 8) != BitsPerPixel )
  {
    if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0 )
    {
      v9 = 1;
      v10 = v11;
    }
    else
    {
      v9 = 0;
    }
    result = BgpGxConvertRectangleEx(a1, BitsPerPixel, &v10, v9);
    if ( (int)result < 0 )
      return result;
    v4 = v10;
    a1 = (__int64)v10;
    v6 = v10;
  }
  v7 = GxpWriteFrameBufferPixels(a1, a2);
  if ( v6 )
  {
    if ( v6 != v11 )
      BgpGxRectangleDestroy(v4);
  }
  return v7;
}
