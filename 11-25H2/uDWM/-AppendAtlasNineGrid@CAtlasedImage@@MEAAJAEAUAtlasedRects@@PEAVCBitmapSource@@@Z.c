/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x180020180
 * Callers:
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x180020130 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800204B0 (-GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x180020500 (-AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTA.c)
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridLayout@@@Z @ 0x18002097C (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridL.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasNineGrid(
        CAtlasedImage *this,
        struct AtlasedRects *a2,
        struct _MARGINS *a3)
{
  int v4; // ecx
  int cyBottomHeight; // eax
  int v6; // r14d
  int cxRightWidth; // edx
  int v8; // eax
  struct _MARGINS v10; // xmm0
  unsigned int v11; // esi
  float v12; // edx
  float v13; // r8d
  int v14; // r9d
  int v15; // r10d
  int v16; // ecx
  unsigned int i; // ebx
  unsigned int v18; // edx
  unsigned int v19; // r9d
  bool v20; // zf
  bool v21; // zf
  float v22; // xmm3_4
  float v23; // xmm5_4
  int appended; // eax
  float v26; // r10d
  float v27; // r9d
  float v28; // [rsp+30h] [rbp-79h] BYREF
  float v29; // [rsp+34h] [rbp-75h]
  float v30; // [rsp+38h] [rbp-71h]
  float v31; // [rsp+3Ch] [rbp-6Dh]
  __int128 v32; // [rsp+40h] [rbp-69h] BYREF
  struct _MARGINS v33; // [rsp+50h] [rbp-59h] BYREF
  __int128 v34; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v35[2]; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v36[2]; // [rsp+90h] [rbp-19h] BYREF

  v4 = a3[5].cyTopHeight - a3[5].cxLeftWidth;
  LODWORD(v32) = a3[5].cxLeftWidth;
  cyBottomHeight = a3[5].cyBottomHeight;
  v6 = (int)a2;
  cxRightWidth = a3[5].cxRightWidth;
  if ( v4 < 0 )
    v4 = 0;
  DWORD1(v32) = a3[5].cxRightWidth;
  v8 = cyBottomHeight - cxRightWidth;
  DWORD2(v32) = v4;
  v35[0] = 0LL;
  if ( v8 < 0 )
    v8 = 0;
  v35[1] = 0LL;
  HIDWORD(v32) = v8;
  v10 = a3[2];
  v11 = 0;
  memset(v36, 0, sizeof(v36));
  v33 = v10;
  CDrawNineGridInstruction::GetNineGridLayout(
    &v33,
    (const struct D2D_POINTANDSIZE_L *)&v32,
    (struct NineGridLayout *)v35);
  LODWORD(v12) = a3[3].cyTopHeight + a3[3].cyBottomHeight + *((_DWORD *)this + 7);
  LODWORD(v13) = a3[3].cxLeftWidth + a3[3].cxRightWidth + *((_DWORD *)this + 6);
  v14 = *((_DWORD *)this + 4) - a3[3].cxLeftWidth;
  v15 = *((_DWORD *)this + 5) - a3[3].cyTopHeight;
  v16 = *((_DWORD *)this + 16);
  v28 = *(float *)&v14;
  v30 = v13;
  v29 = *(float *)&v15;
  v31 = v12;
  if ( (v16 & 1) != 0 )
  {
    LODWORD(v27) = v14 - a3[2].cxLeftWidth;
    LODWORD(v13) += a3[2].cxLeftWidth;
    v30 = v13;
    v28 = v27;
  }
  if ( (v16 & 2) != 0 )
    LODWORD(v30) = a3[2].cxRightWidth + LODWORD(v13);
  if ( (v16 & 4) != 0 )
  {
    LODWORD(v26) = v15 - a3[2].cyTopHeight;
    LODWORD(v12) += a3[2].cyTopHeight;
    v31 = v12;
    v29 = v26;
  }
  if ( (v16 & 8) != 0 )
    LODWORD(v31) = a3[2].cyBottomHeight + LODWORD(v12);
  v33 = v10;
  CDrawNineGridInstruction::GetNineGridLayout(
    &v33,
    (const struct D2D_POINTANDSIZE_L *)&v28,
    (struct NineGridLayout *)v36);
  for ( i = 0; i < 9; ++i )
  {
    v34 = 0LL;
    v32 = 0LL;
    CDrawNineGridInstruction::GetCurrentRect(i, (struct NineGridLayout *)v35, (struct D2D_POINTANDSIZE_L *)&v34);
    CDrawNineGridInstruction::GetCurrentRect(i, (struct NineGridLayout *)v36, (struct D2D_POINTANDSIZE_L *)&v32);
    if ( SDWORD2(v32) <= 0 || SHIDWORD(v32) <= 0 )
      continue;
    v18 = i / 3;
    v19 = i % 3;
    if ( i == 3 * (i / 3) )
    {
      v20 = (*((_BYTE *)this + 64) & 1) == 0;
    }
    else
    {
      if ( v19 != 2 )
        goto LABEL_22;
      v20 = (*((_BYTE *)this + 64) & 2) == 0;
    }
    if ( !v20 )
      continue;
LABEL_22:
    if ( !v18 )
    {
      v21 = (*((_BYTE *)this + 64) & 4) == 0;
LABEL_26:
      if ( !v21 )
        continue;
      goto LABEL_27;
    }
    if ( v18 == 2 )
    {
      v21 = (*((_BYTE *)this + 64) & 8) == 0;
      goto LABEL_26;
    }
LABEL_27:
    *(float *)&v33.cxLeftWidth = (float)(int)v32;
    v29 = (float)SDWORD1(v34);
    v28 = (float)(int)v34;
    *(float *)&v33.cxRightWidth = (float)SDWORD1(v32);
    v22 = (float)SDWORD2(v34) + (float)(int)v34;
    v23 = (float)SHIDWORD(v34) + (float)SDWORD1(v34);
    v30 = v22;
    v31 = v23;
    *(float *)&v33.cyTopHeight = (float)SDWORD2(v32) + (float)(int)v32;
    *(float *)&v33.cyBottomHeight = (float)SHIDWORD(v32) + (float)SDWORD1(v32);
    if ( v19 == 1 )
    {
      v28 = (float)(int)v34 + 0.5;
      v30 = v22 - 0.5;
      if ( v28 > (float)(v22 - 0.5) )
        v30 = (float)(int)v34 + 0.5;
    }
    if ( v18 == 1 )
    {
      v29 = (float)SDWORD1(v34) + 0.5;
      v31 = v23 - 0.5;
      if ( v29 > (float)(v23 - 0.5) )
        v31 = (float)SDWORD1(v34) + 0.5;
    }
    appended = CAtlasedImage::AppendAtlasRect((_DWORD)this, v6, (unsigned int)&v28, (unsigned int)&v33, 0);
    v11 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, appended, 0x301u, 0LL);
      return v11;
    }
  }
  return v11;
}
