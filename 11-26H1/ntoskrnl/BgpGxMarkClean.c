/*
 * XREFs of BgpGxMarkClean @ 0x14052F2EC
 * Callers:
 *     BgpGxCopyRectangle @ 0x140C51A04 (BgpGxCopyRectangle.c)
 *     BgpGxCopyBitmapToRectangle @ 0x140C54290 (BgpGxCopyBitmapToRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
