/*
 * XREFs of ?AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z @ 0x180293FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x180053960 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x1801C4A38 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::AddQuadraticBezier(CPathData *this, const struct D2D1_QUADRATIC_BEZIER_SEGMENT *a2)
{
  char v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]

  Path::Segment::Segment(v4, 4);
  v5 = (__int128)*a2;
  CPathData::AppendSegment(this, (struct Path::Segment *)v4);
}
