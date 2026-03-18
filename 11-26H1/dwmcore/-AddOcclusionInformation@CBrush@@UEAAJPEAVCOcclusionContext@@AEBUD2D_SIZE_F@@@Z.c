/*
 * XREFs of ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180074510
 * Callers:
 *     <none>
 * Callees:
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x180074700 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlignOccluder@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180074CC8 (-PixelAlignOccluder@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBVCVisual@@PEBVCMILMatrix@@@Z @ 0x180074F58 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x18019CB94 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrush::AddOcclusionInformation(
        CBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v3; // rax
  const struct CMILMatrix *TopByReference; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r9d
  int v9; // r8d
  struct CMILMatrix *v10; // rax
  int v11; // eax
  const struct tagRECT *v12; // rax
  int v14; // [rsp+20h] [rbp-59h]
  __int128 v15; // [rsp+40h] [rbp-39h] BYREF
  __int128 v16; // [rsp+50h] [rbp-29h] BYREF
  __int128 v17; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v18[80]; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v3 = *(_QWORD *)this;
  v17 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CBrush *, const struct D2D_SIZE_F *, __int128 *))(v3 + 328))(this, a3, &v17) )
  {
    v15 = v17;
    if ( *((float *)&v17 + 2) > *(float *)&v17 && *((float *)&v17 + 3) > *((float *)&v17 + 1) && g_bUseOcclusion )
    {
      v16 = 0LL;
      TopByReference = CMatrixStack::GetTopByReference((struct COcclusionContext *)((char *)a2 + 24));
      CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v15, &v16);
      CBaseClipStack::Clip((char *)a2 + 144, &v15, &v16);
      if ( *((float *)&v15 + 2) > *(float *)&v15
        && *((float *)&v15 + 3) > *((float *)&v15 + 1)
        && (float)((float)(*((float *)&v15 + 2) - *(float *)&v15) * (float)(*((float *)&v15 + 3) - *((float *)&v15 + 1))) >= 75000.0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0dffffq_EventWriteTransfer(
            v7,
            v6,
            *((_DWORD *)a2 + 317),
            v8,
            SBYTE4(v15),
            SBYTE8(v15),
            SBYTE12(v15));
        v9 = *((_DWORD *)a2 + 317);
        v10 = (struct COcclusionContext *)((char *)a2 + 1132);
        *((_BYTE *)a2 + 1130) = 1;
        if ( !*((_BYTE *)a2 + 1124) )
          v10 = 0LL;
        v11 = CArrayBasedCoverageSet::Add((int)a2 + 584, (int)&v15, v9, 0, v10);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x536,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\occlusioncontext.cpp",
            (const char *)(unsigned int)v11,
            v14);
        v12 = (const struct tagRECT *)PixelAlignOccluder(&v16, &v15);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v18, v12);
        CRegion::Subtract((struct COcclusionContext *)((char *)a2 + 424), (const struct CRegion *)v18);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v18);
      }
    }
  }
  return 0LL;
}
