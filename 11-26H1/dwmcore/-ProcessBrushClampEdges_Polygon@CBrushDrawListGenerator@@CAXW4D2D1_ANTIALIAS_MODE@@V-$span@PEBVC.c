/*
 * XREFs of ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801DD93C
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D9900 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801438CC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180146DA8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 */

char __fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        int a1,
        unsigned __int64 *a2,
        int a3,
        float *a4,
        __int64 a5)
{
  __int64 *v5; // rax
  unsigned __int64 i; // rbx
  __int64 v11; // r10
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float *v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned int v20; // r8d
  __int128 v22; // [rsp+38h] [rbp-41h] BYREF
  __int128 v23; // [rsp+48h] [rbp-31h]
  int v24; // [rsp+58h] [rbp-21h]
  float v25[9]; // [rsp+60h] [rbp-19h] BYREF
  float v26[13]; // [rsp+84h] [rbp+Bh] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h] BYREF

  v5 = (__int64 *)&retaddr;
  for ( i = 0LL; i < *a2; ++i )
  {
    v5 = (__int64 *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, i);
    v11 = *v5;
    if ( *v5 && *(_BYTE *)(v11 + 52) )
    {
      v12 = *(float *)(v11 + 12);
      v13 = *(float *)(v11 + 16);
      v14 = *(float *)(v11 + 20);
      v15 = *(float *)(v11 + 24);
      v16 = *(float *)(v11 + 28);
      if ( ((1 << i) & a3) != 0 )
      {
        v25[0] = *(float *)(v11 + 8);
        v25[1] = v12;
        v25[3] = v13;
        v25[4] = v14;
        v25[6] = v15;
        v25[7] = v16;
        v25[2] = 0.0;
        v25[5] = 0.0;
        v25[8] = 1.0;
        v17 = Matrix3x3::operator*(v25, v26, a4);
        v18 = *(_OWORD *)v17;
        v19 = *((_OWORD *)v17 + 1);
        *(float *)&v17 = v17[8];
        v22 = v18;
        v24 = (int)v17;
        v23 = v19;
      }
      else
      {
        LODWORD(v22) = *(_DWORD *)(v11 + 8);
        *(_QWORD *)((char *)&v22 + 4) = LODWORD(v12);
        *((float *)&v22 + 3) = v13;
        *(_QWORD *)&v23 = LODWORD(v14);
        *((_QWORD *)&v23 + 1) = __PAIR64__(LODWORD(v16), LODWORD(v15));
        v24 = 1065353216;
      }
      if ( a1 == 1 )
        v20 = 0;
      else
        v20 = *(_DWORD *)(v11 + 48);
      LOBYTE(v5) = CEdgeFlagsMap::AddEdgeFlags(a5, (FLOAT *)(v11 + 32), v20, (FLOAT *)&v22, FLOAT_0_000081380211);
    }
  }
  return (char)v5;
}
