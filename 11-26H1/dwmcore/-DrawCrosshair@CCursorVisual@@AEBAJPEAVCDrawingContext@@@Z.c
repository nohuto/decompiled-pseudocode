/*
 * XREFs of ?DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z @ 0x1800780F8
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1801A3768 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802084C4 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     roundf_0 @ 0x180222689 (roundf_0.c)
 *     ?GetCurrentTargetDesktopScale@CDrawingContext@@QEBA?BMXZ @ 0x1802652DC (-GetCurrentTargetDesktopScale@CDrawingContext@@QEBA-BMXZ.c)
 *     ?GetCurrentTargetTreeBounds@CDrawingContext@@QEBA?BV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180265358 (-GetCurrentTargetTreeBounds@CDrawingContext@@QEBA-BV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 */

__int64 __fastcall CCursorVisual::DrawCrosshair(CCursorVisual *this, struct CDrawingContext *a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  const struct D2D_POINT_2F *v10; // rsi
  float CurrentTargetDesktopScale; // xmm11_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  FLOAT left; // xmm10_4
  float v17; // xmm2_4
  FLOAT top; // xmm9_4
  float v19; // xmm3_4
  float v20; // xmm6_4
  FLOAT right; // xmm8_4
  FLOAT bottom; // xmm7_4
  float v23; // xmm1_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  unsigned int v27; // xmm1_4
  unsigned int v28; // xmm4_4
  float y; // xmm0_4
  unsigned int v30; // xmm2_4
  unsigned int v31; // xmm3_4
  unsigned int v32; // xmm6_4
  unsigned int v33; // xmm0_4
  unsigned int v34; // xmm1_4
  unsigned int v35; // xmm5_4
  __int64 v36; // rsi
  int v37; // ebx
  __int64 v38; // rdx
  struct D2D_RECT_F v40; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-D0h]
  __int128 *v42; // [rsp+40h] [rbp-C8h]
  __int128 v43; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+58h] [rbp-B0h]
  __int128 v45; // [rsp+68h] [rbp-A0h]
  __int128 v46; // [rsp+78h] [rbp-90h]
  int v47; // [rsp+88h] [rbp-80h]
  _DWORD v48[16]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v2 = *(_OWORD *)((char *)this + 600);
  v4 = *(_OWORD *)((char *)this + 616);
  v47 = *((_DWORD *)this + 166);
  v43 = v2;
  v6 = *(_OWORD *)((char *)this + 632);
  v44 = v4;
  v7 = *(_OWORD *)((char *)this + 648);
  v45 = v6;
  v46 = v7;
  if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)&v43) )
  {
    if ( CMILMatrix::Invert((CMILMatrix *)&v43, v8, v9) )
    {
      CDrawingContext::GetCurrentTargetTreeBounds(a2, &v40);
      if ( !IsEmpty(&v40) )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v43, &v40, &v40.left);
        v10 = (const struct D2D_POINT_2F *)(*((_QWORD *)this + 87) + 212LL);
        if ( Contains(&v40, v10) )
        {
          CurrentTargetDesktopScale = CDrawingContext::GetCurrentTargetDesktopScale(a2);
          v12 = roundf_0(CurrentTargetDesktopScale * 3.0);
          v13 = roundf_0(CurrentTargetDesktopScale * 20.0);
          v14 = v10->y - v13;
          v15 = v10->y - v12;
          left = v40.left;
          v17 = v10->x - v12;
          top = v40.top;
          v19 = v12 + v10->y;
          v20 = v12 + v10->x;
          right = v40.right;
          bottom = v40.bottom;
          *(float *)&v48[2] = v10->x - v13;
          v23 = v13 + v10->x;
          v24 = v13 + v10->y;
          *(float *)&v48[7] = v14;
          v48[0] = LODWORD(v40.left);
          *(float *)&v48[1] = v15;
          *(float *)&v48[8] = v23;
          *(float *)&v48[3] = v19;
          *(float *)&v48[4] = v17;
          v48[5] = LODWORD(v40.top);
          *(float *)&v48[6] = v20;
          *(float *)&v48[9] = v15;
          v48[10] = LODWORD(v40.right);
          *(float *)&v48[11] = v19;
          *(float *)&v48[12] = v17;
          *(float *)&v48[13] = v24;
          *(float *)&v48[14] = v20;
          v48[15] = LODWORD(v40.bottom);
          v25 = roundf_0(CurrentTargetDesktopScale + CurrentTargetDesktopScale);
          v26 = roundf_0(CurrentTargetDesktopScale * 21.0);
          *(float *)&v27 = v10->x - v26;
          *(float *)&v28 = v10->y - v25;
          y = v10->y;
          *(float *)&v30 = v10->x - v25;
          *(FLOAT *)&v43 = left;
          *(float *)&v31 = v25 + v10->y;
          *(float *)&v32 = v25 + v10->x;
          *(float *)&v33 = y - v26;
          *(_QWORD *)((char *)&v43 + 4) = __PAIR64__(v27, v28);
          *(float *)&v34 = v26 + v10->x;
          *(float *)&v35 = v26 + v10->y;
          HIDWORD(v43) = v31;
          *(_QWORD *)&v44 = __PAIR64__(LODWORD(top), v30);
          *(_QWORD *)&v45 = __PAIR64__(v28, v34);
          *((_QWORD *)&v44 + 1) = __PAIR64__(v33, v32);
          *((_QWORD *)&v45 + 1) = __PAIR64__(v31, LODWORD(right));
          *(_QWORD *)&v46 = __PAIR64__(v35, v30);
          *((_QWORD *)&v46 + 1) = __PAIR64__(LODWORD(bottom), v32);
          v36 = *((_QWORD *)this + 87);
          v40.left = 1.0;
          v40.top = 1.0;
          v40.bottom = *(FLOAT *)(v36 + 208);
          v40.right = 1.0;
          v41 = 4LL;
          v42 = (__int128 *)v48;
          v37 = CDrawingContext::FillRectanglesWithSolidColor(a2);
          if ( v37 < 0 )
          {
            v38 = 132LL;
LABEL_7:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v38,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
              (const char *)(unsigned int)v37,
              SLODWORD(v40.left));
            return (unsigned int)v37;
          }
          v41 = 4LL;
          v42 = &v43;
          v37 = CDrawingContext::FillRectanglesWithSolidColor(a2);
          if ( v37 < 0 )
          {
            v38 = 133LL;
            goto LABEL_7;
          }
        }
      }
    }
  }
  return 0LL;
}
