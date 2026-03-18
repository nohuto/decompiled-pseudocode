/*
 * XREFs of ?Transpose@CMILMatrix@@QEAAXXZ @ 0x1801A2BEC
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801A20A0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x1801A28C0 (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x1801D51B8 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18025DD7C (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transpose(__m128 *this)
{
  __m128 v1; // xmm0
  __m128 v2; // xmm4
  __m128 v3; // xmm2
  __m128 v4; // xmm3
  __m128 v5; // xmm5
  __m128 v6; // xmm1
  __m128 v7; // xmm4

  v1 = this[1];
  v2 = this[2];
  v3 = this[3];
  v4 = _mm_shuffle_ps(*this, v1, 68);
  v5 = _mm_shuffle_ps(*this, v1, 238);
  v6 = _mm_shuffle_ps(v2, v3, 68);
  *this = _mm_shuffle_ps(v4, v6, 136);
  v7 = _mm_shuffle_ps(v2, v3, 238);
  this[1] = _mm_shuffle_ps(v4, v6, 221);
  this[2] = _mm_shuffle_ps(v5, v7, 136);
  this[3] = _mm_shuffle_ps(v5, v7, 221);
  this[4].m128_i8[0] &= 3u;
  this[4].m128_i8[1] &= 0xC0u;
}
