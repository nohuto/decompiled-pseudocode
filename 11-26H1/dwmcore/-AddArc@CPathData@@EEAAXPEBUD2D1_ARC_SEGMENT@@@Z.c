/*
 * XREFs of ?AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z @ 0x180293E60
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x180053960 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x1801C4A38 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::AddArc(CPathData *this, const struct D2D1_ARC_SEGMENT *a2)
{
  __int128 v4; // xmm0
  bool v5; // zf
  char v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+38h] [rbp-10h]

  Path::Segment::Segment(v6, 3);
  v4 = *(_OWORD *)&a2->point.x;
  v6[2] = a2->sweepDirection == D2D1_SWEEP_DIRECTION_CLOCKWISE;
  v5 = a2->arcSize == D2D1_ARC_SIZE_LARGE;
  v7 = v4;
  *(FLOAT *)&v4 = a2->rotationAngle;
  v6[3] = v5;
  v8 = v4;
  CPathData::AppendSegment(this, (struct Path::Segment *)v6);
}
