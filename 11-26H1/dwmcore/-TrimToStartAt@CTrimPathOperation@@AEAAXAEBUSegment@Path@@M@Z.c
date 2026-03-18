/*
 * XREFs of ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180053E88
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x1800533A4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 * Callees:
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180052E94 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x180053160 (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x180053574 (-ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ.c)
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x180053A48 (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 */

void __fastcall CTrimPathOperation::TrimToStartAt(CTrimPathOperation *this, const struct Path::Segment *a2, double a3)
{
  int v4; // edx
  float *v6; // r15
  bool v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  float v10; // xmm8_4
  int v11; // xmm6_4
  _DWORD *v12; // rsi
  int v13; // xmm7_4
  struct Path::Segment *v14; // rbx

  v4 = *((_DWORD *)this + 8);
  v6 = (float *)((char *)a2 + 4);
  v7 = *((_BYTE *)this + 396) == 0;
  *((_BYTE *)this + 397) = 0;
  *((_BYTE *)this + 396) = v7;
  *((_DWORD *)this + 8) = v4 + 1;
  if ( CTrimPathOperation::ShouldSplitCurrentSegment(this) )
    v10 = fmaxf(0.0, (float)(*(float *)(v9 + 4 * v8 + 24) - (float)(*(float *)(v9 + 44) - *v6)) / *v6);
  else
    v10 = FLOAT_1_0;
  v11 = *(_DWORD *)(v9 + 56);
  v12 = (_DWORD *)(v9 + 56);
  v13 = *(_DWORD *)(v9 + 60);
  v14 = CTrimPathOperation::InterpolateSegment((CTrimPathOperation *)v9, a2, a3, v10, (struct D2D_POINT_2F *)(v9 + 56));
  CTrimPathOperation::AppendSegment((char **)this, (CTrimPathOperation *)((char *)this + 48));
  *v12 = v11;
  v12[1] = v13;
  *((float *)v14 + 1) = (float)(v10 - *(float *)&a3) * *v6;
  CTrimPathOperation::AppendSegment((char **)this, v14);
  if ( *((_DWORD *)this + 8) < 2u && *((float *)this + 11) > *((float *)this + *((unsigned int *)this + 8) + 6) )
    CTrimPathOperation::TrimToEndAt(this, a2, 0.0);
}
