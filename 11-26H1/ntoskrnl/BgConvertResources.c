/*
 * XREFs of BgConvertResources @ 0x140C55910
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1405C7F00 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x14071AF38 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle((__int64 *)&gLoadedDiffHivesLock.536, a1);
}
