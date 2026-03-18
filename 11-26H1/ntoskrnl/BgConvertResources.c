/*
 * XREFs of BgConvertResources @ 0x140C4F910
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1405C5690 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x140716248 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle((__int64 *)&gLoadedDiffHivesLock.536, a1);
}
