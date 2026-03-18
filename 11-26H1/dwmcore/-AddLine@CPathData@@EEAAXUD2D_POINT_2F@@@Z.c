/*
 * XREFs of ?AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z @ 0x180293F20
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x180053960 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x1801C4A38 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::AddLine(CPathData *this, struct D2D_POINT_2F a2)
{
  char v4[8]; // [rsp+20h] [rbp-28h] BYREF
  struct D2D_POINT_2F v5; // [rsp+28h] [rbp-20h]

  Path::Segment::Segment(v4, 2);
  v5 = a2;
  CPathData::AppendSegment(this, (struct Path::Segment *)v4);
}
