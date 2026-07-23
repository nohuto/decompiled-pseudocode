/*
 * XREFs of RaspAllocateMemory @ 0x140357710
 * Callers:
 *     RaspCreatePointList @ 0x140356648 (RaspCreatePointList.c)
 *     RaspRectangleCreate @ 0x140356700 (RaspRectangleCreate.c)
 *     RaspInitializeGlyphData @ 0x140356A90 (RaspInitializeGlyphData.c)
 *     RaspInterpolatePoint @ 0x140356F04 (RaspInterpolatePoint.c)
 *     RaspScanConvert @ 0x140356F8C (RaspScanConvert.c)
 *     RaspCreateSegmentList @ 0x14035778C (RaspCreateSegmentList.c)
 *     RaspGetCompositeGlyphList @ 0x14071D7F4 (RaspGetCompositeGlyphList.c)
 *     RaspGetXExtent @ 0x14071DB24 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x14071DCE4 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14071E3A0 (RaspLoadGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 */

__int64 __fastcall RaspAllocateMemory(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 Memory; // rdx

  v3 = *a2;
  v4 = (a2[2] + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *a2 )
  {
    if ( a1 > a2[1] - v4 )
    {
      return 0LL;
    }
    else
    {
      a2[2] = v4 + a1;
      return v3 + v4;
    }
  }
  else
  {
    Memory = BgpFwAllocateMemory(a1);
    if ( Memory )
      a2[2] = v4 + a1;
  }
  return Memory;
}
