/*
 * XREFs of ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180189280 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A75C0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@@Z @ 0x1802048E8 (-CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 *     ?AddClippedOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@_N@Z @ 0x18024F880 (-AddClippedOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180282ED0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180286B80 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x180074700 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlignOccluder@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180074CC8 (-PixelAlignOccluder@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBVCVisual@@PEBVCMILMatrix@@@Z @ 0x180074F58 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x18019CB94 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall COcclusionContext::CollectRectangleForOcclusion(__int64 a1, const struct D2D_RECT_F *a2, char a3)
{
  const struct CMILMatrix *TopByReference; // rax
  const struct D2D_RECT_F *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  double v9; // xmm2_8
  bool v10; // cf
  __int64 v11; // r9
  int v12; // eax
  const struct tagRECT *v13; // rax
  int v14; // [rsp+20h] [rbp-49h]
  __int128 v15; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+50h] [rbp-19h] BYREF
  FastRegion::CRegion *v17[10]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !IsEmpty(a2) && g_bUseOcclusion )
  {
    v16 = 0LL;
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 24));
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)TopByReference, v6, (float *)&v16);
    CBaseClipStack::Clip(a1 + 144, &v15, (float *)&v16);
    if ( *((float *)&v15 + 2) > *(float *)&v15 )
    {
      *(_QWORD *)&v9 = HIDWORD(v15);
      if ( *((float *)&v15 + 3) > *((float *)&v15 + 1)
        && (a3
         || (float)((float)(*((float *)&v15 + 2) - *(float *)&v15) * (float)(*((float *)&v15 + 3) - *((float *)&v15 + 1))) >= 75000.0) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0dffffq_EventWriteTransfer(
            v8,
            v7,
            *(unsigned int *)(a1 + 1268),
            *(float *)&v15,
            SBYTE4(v15),
            SBYTE8(v15),
            SBYTE12(v15));
        v10 = *(_BYTE *)(a1 + 1124) != 0;
        *(_BYTE *)(a1 + 1130) = 1;
        if ( a3 )
          v11 = *(_QWORD *)(a1 + 1104);
        else
          v11 = 0LL;
        v12 = CArrayBasedCoverageSet::Add(
                a1 + 584,
                &v15,
                *(_DWORD *)(a1 + 1268),
                v11,
                (struct CMILMatrix *)((a1 + 1132) & -(__int64)v10));
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x536,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\occlusioncontext.cpp",
            (const char *)(unsigned int)v12,
            v14);
        v13 = (const struct tagRECT *)PixelAlignOccluder((int *)&v16, (unsigned int *)&v15, v9);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v17, v13);
        CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)(a1 + 424), v17);
        FastRegion::CRegion::FreeMemory(v17);
      }
    }
  }
}
