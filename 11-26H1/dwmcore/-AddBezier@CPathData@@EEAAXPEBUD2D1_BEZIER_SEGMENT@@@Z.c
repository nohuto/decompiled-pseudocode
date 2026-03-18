/*
 * XREFs of ?AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z @ 0x180293EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x180053960 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x1801C4A38 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::AddBezier(CPathData *this, const struct D2D1_BEZIER_SEGMENT *a2)
{
  FLOAT y; // xmm1_4
  char v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  FLOAT x; // [rsp+38h] [rbp-10h]
  FLOAT v8; // [rsp+3Ch] [rbp-Ch]

  Path::Segment::Segment(v5, 5);
  y = a2->point3.y;
  v6 = *(_OWORD *)&a2->point1.x;
  x = a2->point3.x;
  v8 = y;
  CPathData::AppendSegment(this, (struct Path::Segment *)v5);
}
