/*
 * XREFs of BgpGxMarkClean @ 0x14053180C
 * Callers:
 *     BgpGxCopyRectangle @ 0x140C57A04 (BgpGxCopyRectangle.c)
 *     BgpGxCopyBitmapToRectangle @ 0x140C5A290 (BgpGxCopyBitmapToRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
