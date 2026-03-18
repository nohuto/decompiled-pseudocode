/*
 * XREFs of RaspAllocateMemory @ 0x140355970
 * Callers:
 *     RaspCreatePointList @ 0x1403548A0 (RaspCreatePointList.c)
 *     RaspRectangleCreate @ 0x140354958 (RaspRectangleCreate.c)
 *     RaspInitializeGlyphData @ 0x140354CF0 (RaspInitializeGlyphData.c)
 *     RaspInterpolatePoint @ 0x140355164 (RaspInterpolatePoint.c)
 *     RaspScanConvert @ 0x1403551EC (RaspScanConvert.c)
 *     RaspCreateSegmentList @ 0x1403559EC (RaspCreateSegmentList.c)
 *     RaspGetCompositeGlyphList @ 0x140718B04 (RaspGetCompositeGlyphList.c)
 *     RaspGetXExtent @ 0x140718E34 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x140718FF4 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1407196B0 (RaspLoadGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140355EBC (BgpFwAllocateMemory.c)
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
