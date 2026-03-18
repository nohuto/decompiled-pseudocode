/*
 * XREFs of ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800CDBA0
 * Callers:
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1801E62F8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@IEAAXXZ @ 0x18023D6B4 (-ReleaseObsoletePlaneAssignments@COverlayContext@@IEAAXXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ @ 0x18023DDF8 (-TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CDD20 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800CF010 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::GetLocalClipRect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  float *v5; // r11
  CMILMatrix *v6; // rcx
  float *v7; // r10
  const struct D2D_RECT_F *v8; // r11
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  struct D2D_POINT_2F v15; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a3) )
  {
    *(float *)a2 = *v5 + *(float *)(v4 + 48);
    *(float *)(a2 + 4) = v5[1] + *(float *)(v4 + 52);
    *(float *)(a2 + 8) = v5[2] + *(float *)(v4 + 48);
    *(float *)(a2 + 12) = v5[3] + *(float *)(v4 + 52);
  }
  else if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v4) )
  {
    v9 = (float)(v8->left * *v7) + v7[12];
    *(float *)a2 = v9;
    v10 = (float)(v8->top * v7[5]) + v7[13];
    *(float *)(a2 + 4) = v10;
    v11 = (float)(v8->right * *v7) + v7[12];
    *(float *)(a2 + 8) = v11;
    v12 = (float)(v8->bottom * v7[5]) + v7[13];
    *(float *)(a2 + 12) = v12;
    if ( *v7 <= 0.0 || v7[5] <= 0.0 )
    {
      if ( v9 > v11 )
      {
        *(float *)a2 = v11;
        *(float *)(a2 + 8) = v9;
      }
      if ( v10 > v12 )
      {
        *(float *)(a2 + 4) = v12;
        *(float *)(a2 + 12) = v10;
      }
    }
  }
  else
  {
    CMILMatrix::Transform2DRectToPerspective(v6, v8, &v15);
    v14[0] = 4LL;
    v14[1] = &v15;
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
      a2,
      v14);
  }
  return a2;
}
